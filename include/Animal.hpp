/**
* @file	Animal.hpp
* @brief	Classe que representa os animais
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include "Veterinario.hpp"
#include "Tratador.hpp"

#include <iostream>
#include <fstream>
#include <string>

class Animal {
	private:
		virtual std::ostream& print(std::ostream&) const = 0;
	public:
		// construtores e destrutores {
		Animal();
		Animal(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo);
		~Animal();
		// } construtores e destrutores
		// getters {
		int get_m_id(void);
		std::string get_m_classe(void);
		std::string get_m_nome_cientifico(void);
		char get_m_sexo(void);
		double get_m_tamanho(void);
		std::string get_m_dieta(void);
		Veterinario* get_m_veterinario(void);
		Tratador* get_m_tratador(void);
		std::string get_m_nome_batismo(void);
		// } getters

		// setters
		void set_m_id(int id);
		void set_m_classe(std::string classe);
		void set_m_nome_cientifico(std::string nome_cientifico);
		void set_m_sexo(char sexo);
		void set_m_tamanho(double tamanho);
		void set_m_dieta(std::string dieta);
		void set_m_veterinario(Veterinario* veterinario);
		void set_m_tratador(Tratador* tratador);
		void set_m_nome_batismo(std::string nome_batismo);
		// } setters

		virtual void escreverEmArquivo() = 0;
		virtual void alterarDado() = 0;
		//operadores
		friend std::ostream& operator<<(std::ostream& os, const Animal& animal);

	protected:
		// membros {
		int m_id;	//*< Define o id do animal */
		std::string m_classe;	//*< Define a classe a qual o animal pertence */
		std::string m_nome_cientifico;	//*< Define o nome científico do animal */
		char m_sexo;	//*< Define o sexo do animal */
		double m_tamanho;	//*< Define o tamanho do animal */
		std::string m_dieta;	//*< Define a dieta do animal */
		Veterinario* m_veterinario;	//*< Define qual o veterinário associado ao animal */
		Tratador* m_tratador;	//*< Define qual o tratador associado ao animal */
		std::string m_nome_batismo;	//*< Define qual o nome de batismo do animal */
		// } membros
};

#endif
