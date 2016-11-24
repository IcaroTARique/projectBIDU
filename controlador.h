#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <string>
#include <vector>
#include "contato.h"
#define QUANTIDADE_TOP 500

class Controlador {
	//map <string, Contato> list;
	Contato lista_de_contatos[QUANTIDADE_TOP];
	vector <Contato> vetor_contato;  

	int numero_contatos;
	
public:
	~Controlador(){}

	int addContato();
	int deleteContato( string nome, string sobrenome);
	int editContato(string nome, string sobrenome);
	int searchContato(string nome, string sobrenome);
	int listContatos(); 
	int searchContatoPorBairro(string bairro);

};
#endif
