#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <random>

using namespace std;


//Cria o map para armazenar os medicos, com Chave (medico) e valor (especialidade)
map<string, string> medicos;

// Define uma estrutura para representar um agendamento
struct Agendamento {
    string medico;
    string dia;
    string horario;
};

// Define um mapa para armazenar os agendamentos, onde a chave e o nome do medico e valor e do tipo Agendamento
map<long long int, Agendamento> agendamentos;

//Lê o arquivo assim que o programa e iniciado para salvar no map
void carregarMedicos(){
  fstream arquivoCriar;

  //cria o arquivo medicos.txt caso nao exista
  arquivoCriar.open("medicos.txt", ios::out | ios::app);
  arquivoCriar.close();
  
  //Abre o arquivo medicos.txt para leitura
  fstream arquivoLer;
  arquivoLer.open("medicos.txt", ios::in);
  string linha;
  vector<string> vetor;
  
  //Lê todas as linhas do arquivo e salva cada linha em um vector
  while(getline(arquivoLer, linha)){
    vetor.push_back(linha);
  }
  arquivoLer.close(); //fecha o arquivo lido.
  

  //Transfere as linhas do vector para dentro do map
  
  for(int i = 0; i < vetor.size(); i+=2){
    string nome = vetor[i];
    medicos[nome] = vetor[i+1];
  }
}

//Lê o arquivo assim que o programa e iniciado para salvar no map
void carregarAgendamentos(){
  fstream arquivoCriar;

  //cria o arquivo medicos.txt caso nao exista
  arquivoCriar.open("agendamentos.txt", ios::out | ios::app);
  arquivoCriar.close();
  
  //Abre o arquivo medicos.txt para leitura
  fstream arquivoLer;
  arquivoLer.open("agendamentos.txt", ios::in);
  string linha;
  vector<string> vetor;
  
  //Lê todas as linhas do arquivo e salva cada linha em um vector
  while(getline(arquivoLer, linha)){
    vetor.push_back(linha);
  }
  arquivoLer.close(); //fecha o arquivo lido.
  

  //Transfere as linhas do vector para dentro do map
  for(int i = 0; i< vetor.size(); i+=4){
    long long int id = stoll(vetor[i]);
    agendamentos[id].medico = vetor[i+1];
    agendamentos[id].dia = vetor[i+2];
    agendamentos[id].horario = vetor[i+3];
  }
}

// Listar medicos e especialidades
void listarMedicos() {
  cout << "\n####  Lista de Medicos   ####\n\n";
  cout << "*************************\n";
  for(auto i : medicos){
    cout << "Nome: "<< i.first << endl;
    cout << "Especialidade: "<< i.second << endl;
    cout << "***************************\n";
  }
  
}

// Listar especialidades e qtd de profissional em cada
void listarEspecialidades() {
    map<string, int> especialidades; // cria um novo map para armazenar as especialidades e suas quantidades
    
    for (auto i : medicos) // percorre o map dos medicos
    {
        string especialidade = i.second; // obtem a especialidade do medico
        if (especialidades.count(especialidade) == 0) // se a especialidade ainda nao foi adicionada no novo map, adiciona com quantidade 1
        {
            especialidades[especialidade] = 1;
        }
        else // se a especialidade ja foi adicionada, incrementa sua quantidade em 1
        {
            especialidades[especialidade]++;
        }
    }
    
    // imprime as especialidades e suas quantidades
    cout << "\n####  Especialidades disponiveis   ####\n\n";
    cout << "*************************\n";
    for (auto i : especialidades)
    {
        cout << "- " << i.first << ": " << i.second << " profissional(es)" << endl;
        cout << "***************************\n";
    }

}

// gerar numero lon long int aleatorio
long long int random_int(long long int min, long long int max) {
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<long long int> dis(min, max);
    return dis(gen);
}


// Agenda novo horario, se o medico selecionado existir no sistema
void agendarHorario(string medico, string dia, string hora) {
  cout << "\n***************************\n";
  if (medicos.find(medico) == medicos.end()) {
        cout << "Medico nao encontrado no sistema" << endl;
    } else {
        long long int id = random_int(1000, 2000);
        agendamentos[id].medico = medico;
        agendamentos[id].dia = dia;
        agendamentos[id].horario = hora;
        cout << "Consulta agendada!!!\n";
    }
  cout << "***************************\n";
}


void verAgenda(string medico) {
  cout << "\n####  Consultas agendadas   ####\n\n";
  cout << "*************************\n";
  cout << "Medico: " << medico << endl;
  bool encontrou = false;
  for(auto i : agendamentos){
    if(i.second.medico == medico) {
      encontrou = true;
      cout << "Data: " << i.second.dia << " | Horario: " << i.second.horario << endl;
    }
  }
  if (!encontrou) {
        cout << "Nao ha agendamentos para este medico." << endl;
  }
  cout << "***************************\n";
}

// Adiciona, se ele ainda nao existe no sistema, um medico 
void adicionarMedico(string medico, string especialidade) {
    cout << "\n***************************\n";
    if (medicos.find(medico) == medicos.end()) {
        medicos[medico] = especialidade;
        cout << "Medico adicionado com sucesso!" << endl;
    } else {
        cout << "Medico ja registrado." << endl;
    }
    cout << "***************************\n";
}

// Altera a especialidade de um determinado medico
void alterarEspecialidade(string medico, string especialidade) {
  medicos[medico] = especialidade;
}

// exclui, se existir, um medico
void excluirMedico(string medico) {
  cout << "\n***************************\n";
  auto it = medicos.find(medico); // encontra o iterador para o medico selecionado
  if (it != medicos.end()) { // verifica se o medico foi encontrado
  medicos.erase(it); // exclui o medico
    cout << "Medico excluido." << endl;
  } else {
    cout << "Medico nao existente no sistema." << endl;
  }
  cout << "***************************\n";
}

// Sobrescrever no arquivo medicos.txt e no arquivo agendamentos.txt os dados inseridos na sessao.
void atualizarDados() {
  // sobrescrever no arquivo medicos.txt
  fstream arquivoMedicos;
  arquivoMedicos.open("medicos.txt", ios::out); // abre arquivo para ediçao
  for (auto i: medicos) {
    arquivoMedicos << i.first << endl;
    arquivoMedicos << i.second << endl;
  }
  arquivoMedicos.close(); // Fecha o arquivo

  // sobrescrever no arquivo agendamentos.txt
  fstream arquivoAgenda;
  arquivoAgenda.open("agendamentos.txt", ios::out); // abre arquivo para ediçao
  for (auto i: agendamentos) {
    arquivoAgenda << i.first << endl;
    arquivoAgenda << i.second.medico << endl;
    arquivoAgenda << i.second.dia << endl;
    arquivoAgenda << i.second.horario << endl;
  }
  arquivoAgenda.close(); // Fecha o arquivo
  
}