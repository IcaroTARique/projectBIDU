#ifndef CONTATO_H
#define CONTATO_H

#include <string>
#include "pessoa.h"

class Contato: public Pessoa{
	//Pessoa pessoa;
	string email;
	string nomefacebook; 
	string linkface;
	string numerotelefone;
	string rua;
	string bairro;
	string cidade;
	
public:	
	Contato() { }
	Contato(string, string, int, string, string, string ,string ,string, string, string);
	~Contato(){}
	
	//Pessoa getPessoa         ();
	string getEmail          ();
	string getNomeFacebook   ();
	string getLinkFace       ();
	string getNumeroTelefone ();
	string getRua            ();
	string getBairro         ();
	string getCidade         ();
	
	//void setPessoa 			(Pessoa);
	void setEmail 			(string);
	void setNomeFacebook 	(string);
	void setLinkFace   		(string);
	void setNumeroTelefone  (string);
	void setRua 			(string);
	void setBairro 			(string);
	void setCidade 			(string);
	
	virtual string toString() {
		return "Nome: " + getNome() + "; Sobrenome: " + getSobrenome() + "; Email: " + getEmail();
	}
};

#endif
