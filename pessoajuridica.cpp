#include "pessoajuridica.h"
#include "iostream"
#include "contato.h"
#include "pessoa.h"

PessoaJuridica::PessoaJuridica(string cn, string n, string sn, int tdp, string em, string nf, string lf, string nt, string ru, string b, string c ):Contato( n,sn, tdp, em, nf, lf, nt, ru, b, c)
{
	cnpj = cn;
}

 string PessoaJuridica::getCnpj() {return cnpj;}

 void PessoaJuridica::setCnpj(string cn) {cnpj = cn;}
