#include <iostream>
#include <string>
#include "funcoes.hpp" //importa o arquivo de cabeçalho das funcoes

using namespace std;

int main()
{

  cout << "\n#############################\n";
  cout << "########## Hospital #########\n";
  cout << "#############################\n\n";

  /* Escolhendo o perfil (aluno, instrutor ou admin */

  cout << "Escolha seu perfil no sistema:\n";
  cout << "1 - Atendente\n";
  cout << "2 - Gestor\n";
  cout << "-> :";
  int perfil;
  cin >> perfil;

  // Lê o arquivo medicos.txt e carrega os dados no sistema
  carregarMedicos();
  // Lê o arquivo agendamentos.txt e carrega os dados no sistema 
  carregarAgendamentos(); 

  /* Menu de opções para o perfil atendente */
  if (perfil == 1)
  {
    while (true)
    {
      cout << "\n#####   Perfil atendente   #####\n\n";
      cout << "1 - Listar medicos\n";
      cout << "2 - Listar especialidades\n";
      cout << "3 - Agendar consulta\n";
      cout << "4 - Consultar agendamentos\n";
      cout << "5 - Sair\n";
      cout << "-> :";
      int opt;
      cin >> opt;

      /* Listar todos os medicos por nome e especialidade */
      if (opt == 1)
      {
        listarMedicos(); //Chama a função em funcoes.cpp
      }

      /* Listar todas as especialidades disponíveis e a quantidade de profissionais de cada uma */
      else if (opt == 2)
      {
        listarEspecialidades(); //Chama a função em funcoes.cpp
      }

      /* Agendar horário para um determinado médico (nome e dia/horário) */
      else if (opt == 3)
      {
        string lixo;
        getline(cin, lixo);
        cout << "\n####  Agendar   ####\n";
        cout << "Digite o nome do medico: ";
        string medico;
        getline(cin, medico);
        cout << "Digite o dia da semana: ";
        string dia;
        getline(cin, dia);
        cout << "Digite o horario: ";
        string hora;
        getline(cin, hora);
        agendarHorario(medico, dia, hora); //Chama a função em funcoes.cpp
      }

      /* Ver todos os agendamentos de uma determinado médico (pesquisar pelo nome)*/
      else if (opt == 4)
      {
        string lixo;
        getline(cin, lixo);
        cout << "\n####  Ver agendamentos   ####\n";
        cout << "Digite o nome do medico: ";
        string medico;
        getline(cin, medico);
        verAgenda(medico); //Chama a função em funcoes.cpp
      }

      /* Sai do while(true) */
      else
      {
        atualizarDados(); // sobrescreve os dados
        break;
        
      }
    }
  }

  /* Menu de opções para o perfil gestor */
  else if (perfil == 2)
  {
    cout << "\nInsira sua senha:\n";
      string senha;
      cin >> senha;
      if (senha != "admin")
      {
        cout << "\nSenha incorreta!\n";
      }
      else
      {
        while (true)
    {
      
        cout << "\n#####   Perfil gestor   #####\n\n";
        cout << "1 - Listar medicos\n";
        cout << "2 - Listar especialidades\n";
        cout << "3 - Adicionar um novo medico\n";
        cout << "4 - Consultar agendamentos\n";
        cout << "5 - Alterar a especialidade de um medico\n";
        cout << "6 - Excluir medico\n";
        cout << "7 - Sair\n";
        cout << "-> :";

        int opt;
        cin >> opt;

        /* Listar todos os médicos por nome e suas respectivas funções */
        if (opt == 1)
        {
          listarMedicos(); //Chama a função em funcoes.cpp
        }

        /* Listar todas as especialidades disponíveis e a quantidade de profissionais de cada uma */
        else if (opt == 2)
        {
          listarEspecialidades(); //Chama a função em funcoes.cpp
        }

        /* Adicionar um novo médico */
        else if (opt == 3)
        {
          string lixo;
          getline(cin, lixo);
          cout << "\n####  Adicionar medico   ####\n";
          cout << "Digite o nome do medico: ";
          string medico;
          getline(cin, medico);
          cout << "Digite a especialidade: ";
          string especialidade;
          getline(cin, especialidade);
          adicionarMedico(medico, especialidade); //Chama a função em funcoes.cpp
        }

        /* Ver todos os agendamentos de uma determinado médico (pesquisar pelo nome)*/
        else if (opt == 4)
        {
          string lixo;
          getline(cin, lixo);
          cout << "\n####  Ver agendamentos   ####\n";
          cout << "Digite o nome do medico: ";
          string medico;
          getline(cin, medico);
          verAgenda(medico); //Chama a função em funcoes.cpp
        }

        /* Alterar a especialidade de um médico */
        else if (opt == 5)
        {
          string lixo;
          getline(cin, lixo);
          cout << "\n####  Alterar especialidade   ####\n";
          cout << "Digite o nome do medico: ";
          string medico;
          getline(cin, medico);
          getline(cin, lixo);
          cout << "Digite a especialidade: ";
          string especialidade;
          alterarEspecialidade(medico, especialidade); //Chama a função em funcoes.cpp
        }

        /* Excluir um médico */
        else if (opt == 6)
        {
          string lixo;
          getline(cin, lixo);
          cout << "\n####  Ver agendamentos   ####\n";
          cout << "Digite o nome do medico: ";
          string medico;
          getline(cin, medico);
          excluirMedico(medico); //Chama a função em funcoes.cpp
        }

        /* Sai do while(true) */
        else
        {
          atualizarDados(); // sobrescreve os dados
          break;
          
        }
      }
      }
  }
  /* Caso o perfil não exista */
  else
  {
    cout << "Perfil nao localizado\n"
         << endl;
  }

  

  return 0;
}