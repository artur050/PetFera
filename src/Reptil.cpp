/**
* @file	Repitl.cpp
* @brief	Implementação da classe que representa os répteis
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "Reptil.hpp"

/**
* @brief	Construtor padrão da classe Reptil
*/
Reptil::Reptil() { }

/**
* @brief	Construtor parametrizado da classe Reptil
*/
Reptil::Reptil(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno) :
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_venenoso(venenoso), m_tipo_veneno(tipo_veneno) { }

/**
* @brief	Destrutor da classe Reptil
*/
Reptil::~Reptil() { }


// getters {
bool Reptil::get_m_venenoso(void) {
	return m_venenoso;
}

std::string Reptil::get_m_tipo_veneno(void) {
	return m_tipo_veneno;
}
// } getters

// setters {
void Reptil::set_m_venenoso(bool venenoso) {
	m_venenoso = venenoso;
}

void Reptil::set_m_tipo_veneno(std::string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
}
// } setters

/**
* @brief	Sobrecarga da função print da biblioteca ostream
*/
std::ostream& Reptil::print(std::ostream& os) const {
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
					  << "Tipo do veneno: " << m_tipo_veneno << endl;
}

/**
* @brief	Método que escreve os dados do réptil em um arquivo
*/
void Reptil::escreverEmArquivo(){
	std::ofstream arquivo ("Animais.csv");
	if (arquivo) {
		arquivo.seekp (0, arquivo.end);
		arquivo
		 			<< m_id << ";"
					<< m_classe << ";"
					<< m_nome_cientifico << ";"
					<< m_sexo << ";"
					<< m_tamanho << ";"
					<< m_dieta << ";"
					<< m_veterinario->get_m_id() << ";"
					<< m_tratador->get_m_id() << ";"
					<< m_nome_batismo << ";"
					<< m_venenoso << ";"
					<< m_tipo_veneno << ";"
					<< std::endl;
	} else {
		std::cerr << "Falha ao escrever em Animais.csv" << std::endl;
	}
}

/**
* @brief	Método que altera um determinado dado do réptil
*/
void Reptil::alterarDado(){
	return;
}
