#include "pessoa.h"
#include "iostream"


Pessoa::Pessoa(string n, string sn, int tdp) //Construtor
{
	nome = n;
	sobrenome = sn;
	tipodepessoa = tdp;
}

 string Pessoa::getNome      () {return nome;}
 string Pessoa::getSobrenome () {return sobrenome;}
 int Pessoa::getTipoDePessoa () {return tipodepessoa;}

 void Pessoa::setNome         (string n)  {nome      = n;}
 void Pessoa::setSobrenome    (string sn) {sobrenome = sn;}
 void Pessoa::setTipoDePessoa (int tdp)   {tipodepessoa = tdp;}
