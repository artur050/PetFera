/**
* @file	MamiferoExotico.hpp
* @brief	Classe que representa os mamíferos exóticos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _MAMIFERO_EXOTICO_HPP_
#define _MAMIFERO_EXOTICO_HPP_

#include "Mamifero.hpp"
#include "AnimalExotico.hpp"

class MamiferoExotico : public Mamifero, AnimalExotico {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		MamiferoExotico();
		MamiferoExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string pais_origem);
		~MamiferoExotico();
		// } construtores e destrutores

		// getters {

		// } getters

		// setters {

		// } setters
		void escreverEmArquivo();

	protected:
		// membros {

		// } membros
};

#endif
