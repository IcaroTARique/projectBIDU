#include "pessoa.h"
#include "iostream"
#include "contato.h"

Contato::Contato( string n, string sn, int tdp, string em, string nf, string lf, string nt, string ru, string b, string c):Pessoa(n, sn, tdp)
{
	//pessoa = p;
	email = em;
	nomefacebook = nf;
	linkface = lf;
	numerotelefone = nt;
	rua = ru;
	bairro = b;
	cidade = c;

}

	//Pessoa Pessoa::getPessoa         () {return Pessoa;}
	string Contato::getEmail          () {return email;}
	string Contato::getNomeFacebook   () {return nomefacebook;}
	string Contato::getLinkFace       () {return linkface;}
	string Contato::getNumeroTelefone () {return numerotelefone;}
	string Contato::getRua            () {return rua;}
	string Contato::getBairro         () {return bairro;}
	string Contato::getCidade         () {return cidade;}
	
	//void Pessoa::setPessoa 		(Pessoa p)  {pessoa         = p;}
	void Contato::setEmail 			(string em) {email          = em;}
	void Contato::setNomeFacebook 	(string nf) {nomefacebook   = nf;}
	void Contato::setLinkFace   	(string lf) {linkface       = lf;}
	void Contato::setNumeroTelefone (string nt) {numerotelefone = nt;}
	void Contato::setRua 			(string ru)  {rua            = ru;}
	void Contato::setBairro 		(string b)  {bairro         = b;}
	void Contato::setCidade 		(string c)  {cidade         = c;}
