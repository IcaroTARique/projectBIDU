#include "pessoafisica.h"
#include "contato.h"
#include "pessoa.h"
#include "iostream"

PessoaFisica::PessoaFisica( string cp, string r, string n, string sn, int tdp, string em, string nf, string lf, string nt, string ru, string b, string c ):Contato( n, sn, tdp, em, nf, lf, nt, ru, b, c)
{
	cpf = cp;
	rg = r;
}

    string PessoaFisica::getCpf (){return cpf;}
	string PessoaFisica::getRg  (){return rg;}
	
	void PessoaFisica::setCpf (string cp) {cpf = cp;}
	void PessoaFisica::setRg  (string r)	{rg = r;}
