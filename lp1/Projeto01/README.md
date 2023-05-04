# Sistema de Gerenciamento de Hospital 🏥

 - Este programa foi desenvolvido para auxiliar no gerenciamento de um hospital, permitindo a realização de diversas operações, como cadastro de médicos, agendamento de consultas e consulta de agendas. O programa foi implementado em C++ e utiliza arquivos de texto para armazenar os dados.

## Funcionalidades:

1. Carregar Médicos: Ao iniciar o programa, os dados dos médicos são lidos a partir do arquivo "medicos.txt" e carregados em memória para serem utilizados durante a execução do programa.

2. Carregar Agendamentos: Também durante a inicialização, os agendamentos de consultas são lidos do arquivo "agendamentos.txt" e carregados em memória.

3. Listar Médicos: Essa função permite listar todos os médicos cadastrados no sistema, exibindo seus nomes e especialidades.

4. Listar Especialidades: Essa função apresenta as especialidades disponíveis no hospital, juntamente com a quantidade de médicos que atuam em cada uma delas.

5. Agendar Horário: Permite agendar uma consulta informando o nome do médico, a data e o horário desejados. O programa verifica se o médico existe no sistema antes de realizar o agendamento.

6. Ver Agenda: Exibe as consultas agendadas para um determinado médico. É necessário informar o nome do médico e o programa apresentará a data e o horário de cada consulta.

7. Adicionar Médico: Essa função permite adicionar um novo médico ao sistema, informando seu nome e especialidade. O programa verifica se o médico já está cadastrado antes de adicioná-lo.

8. Alterar Especialidade: Permite alterar a especialidade de um médico já cadastrado no sistema. É necessário informar o nome do médico e a nova especialidade.

9. Excluir Médico: Permite excluir um médico do sistema, removendo todas as suas consultas agendadas. É necessário informar o nome do médico a ser excluído.

10. Atualizar Dados: Essa função atualiza os dados armazenados nos arquivos "medicos.txt" e "agendamentos.txt" com as alterações realizadas durante a execução do programa. Garante que as informações estejam atualizadas na próxima execução.

## Como usar o programa:

1. Compilação: O programa deve ser compilado utilizando um compilador C++ compatível.

2. Arquivos necessários: Certifique-se de que os arquivos "funcoes.hpp" e "funcoes.cpp" estejam presentes no diretório do programa. Além disso, é necessário ter permissão de leitura e gravação nos arquivos "medicos.txt" e "agendamentos.txt" para que os dados possam ser armazenados corretamente.

3. Execução: Após compilar o programa, execute o arquivo resultante. O programa carregará automaticamente os dados existentes nos arquivos e apresentará um menu com as opções disponíveis.

4. Siga as instruções: Utilize o menu do programa para selecionar a função desejada e siga as instruções apresentadas na tela para inserir os dados necessários.

5. Encerramento: Ao finalizar a execução do programa, os dados serão automaticamente atualizados nos arquivos, garantindo que as informações estejam disponíveis na próxima utilização.

Produzido por Nathalia Azevedo de Melo :purple_heart: