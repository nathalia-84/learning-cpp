#ifndef _FUNCOES_HPP
#define _FUNCOES_HPP

void carregarMedicos();
void carregarAgendamentos();
void listarMedicos();
void listarEspecialidades();
void agendarHorario(std::string medico, std::string dia, std::string hora);
void verAgenda(std::string medico);
void adicionarMedico(std::string medico, std::string especialidade);
void alterarEspecialidade(std::string medico, std::string especialidade);
void excluirMedico(std::string medico);
void atualizarDados();
#endif