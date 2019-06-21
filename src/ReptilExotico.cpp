#include "ReptilExotico.hpp"

// construtores e destrutores {
ReptilExotico::ReptilExotico() {}
ReptilExotico::ReptilExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string pais_origem) : 
		 	   Reptil(id, classe, nome_cientifico, sexo, tamanho,dieta, veterinario, tratador, 
		 	   nome_batismo, venenoso,tipo_veneno),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
ReptilExotico::~ReptilExotico() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters

std::ostream& ReptilExotico::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Venenoso: " << m_venenoso << endl
					  << "Tipo do veneno: " << m_tipo_veneno << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "País de origem: " << m_pais_origem << endl;
} 