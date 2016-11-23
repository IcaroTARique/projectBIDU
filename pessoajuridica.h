#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include "contato.h"
#include "pessoa.h"
#include <string>
using namespace std;

class PessoaJuridica: public Contato {
	
	string cnpj;
	
public:
	PessoaJuridica( string, string, string, int, string, string, string, string, string, string, string);
	~PessoaJuridica(){}
	
	string getCnpj ();
	
	void setCnpj (string);

	virtual string toString() {
		return Contato::toString() + "; CNPJ: " + getCnpj();
	}	
};

#endif
