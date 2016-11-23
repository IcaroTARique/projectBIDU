#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
	string nome;
	string sobrenome;
	int tipodepessoa;

public:
	Pessoa() { }
	Pessoa(string, string, int);
	~Pessoa(){}
	
	string getNome      ();
	string getSobrenome ();	
	int getTipoDePessoa ();

	void setNome      (string);
	void setSobrenome (string);
	void setTipoDePessoa (int);
};

#endif
