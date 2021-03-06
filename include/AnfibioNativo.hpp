/**
* @file	AnifibioNativo.hpp
* @brief	Classe que representa os anfíbios
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANFIBIO_NATIVO_HPP_
#define _ANFIBIO_NATIVO_HPP_

#include "Anfibio.hpp"
#include "AnimalNativo.hpp"


class AnfibioNativo : public Anfibio, AnimalNativo {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		AnfibioNativo();
		AnfibioNativo(int id, std::string classe, std::string nome_cientifico, char sexo,
		 	           double tamanho, std::string dieta, Veterinario* veterinario,
		 	           Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string uf_origem);
		~AnfibioNativo();
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
