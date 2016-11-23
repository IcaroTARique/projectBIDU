#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <string>
#include "contato.h"
#include "pessoa.h"
using namespace std;

class PessoaFisica: public Contato {
	string cpf;
	string rg;
	
public:
	
	PessoaFisica(string, string, string, string, int, string, string, string, string, string, string, string);
	~PessoaFisica(){}
	
	string getCpf ();
	string getRg  ();
	
	void setCpf (string);
	void setRg  (string);

	virtual string toString() {
		return Contato::toString() + "; CPF: " + getCpf() + "; RG: " + getRg();
	}
};

#endif
