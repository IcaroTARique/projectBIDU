#include "controlador.h"
#include "iostream"
#include <iostream>
#include <stdio.h>
#include "pessoafisica.h"
#include "pessoajuridica.h"
#include <string>



	int Controlador::addContato()
	{
		int tipodepessoa;
		string nome;
		string sobrenome;
		string cpf;
		string rg;
		string cnpj;
		//Pessoa pessoa;
		string email;
		string nomefacebook;
		string linkface;
		string numerotelefone;
		string rua;
		string bairro;
		string cidade;

		if(numero_contatos < QUANTIDADE_TOP){

			cout << "Pessoa Fisica -0- ou Juridica -1-?" << endl;
			cin >> tipodepessoa ;
			fflush(stdin);
			cout << "Escreva o Nome" << endl;
			cin >> nome;
			fflush(stdin);
			cout << "Escreva o Sobrenome" << endl;
			cin >> sobrenome;
			fflush(stdin);
			cout << "Escreva o Numero do Telefone" << endl;
			cin >> numerotelefone;
			fflush(stdin);
			cout << "Escreva o e-mail" << endl;
			cin >> email;
			fflush(stdin);
			cout << "Escreva Nome do Facebook" << endl;
			cin >> nomefacebook;
			fflush(stdin);
			cout << "Escreva o link do Facebook" << endl;
			cin >> linkface;
			fflush(stdin);
			cout << "Escreva a nome Rua" << endl;
			cin >> rua;
			fflush(stdin);
			cout << "Escreva o nome Bairro" << endl;
			cin >> bairro;
			fflush(stdin);
			cout << "Escreva o nome da Cidade" << endl;
			fflush(stdin);

//(string cn, string n, string sn, int tdp, string em, string nf, string lf, string nt, string r, string b, string c)
			if (tipodepessoa == 0){
				
				cout << "Escreva CPF" << endl;
				cin >> cpf;
				cout << "Escreva RG" << endl;
				cin >> rg;

				PessoaFisica pessoa_f( cpf, rg, nome, sobrenome, tipodepessoa, email, nomefacebook, linkface, numerotelefone, rua, bairro, cidade);
				//nome, sobrenome, numerotelefone, email, nomefacebook, rua, bairro, cpf, rg, tipodepessoa );
				lista_de_contatos[numero_contatos] = pessoa_f;
			}
			if (tipodepessoa == 1){

				cout << "Escreva CNPJ" << endl;
				cin >> cnpj;

				PessoaJuridica pessoa_j ( cnpj, rg, nome, tipodepessoa, email, nomefacebook, linkface, numerotelefone, rua, bairro, cidade);
			}

			numero_contatos++;
			return 1;
		}


	return 0;
	}
	
	int Controlador::deleteContato( string nome, string sobrenome)
	{
	
	int i;

	int position = searchContato(nome, sobrenome); //Recebe valor????
	    if (position == -1)
	    {
	        return -1;
	    }
	    	for (i = position; i < numero_contatos -1; i++)
	    	{
	        lista_de_contatos[i] = lista_de_contatos[i+1];
	    	}
	    numero_contatos --;
    return 1;
	}
	
	int Controlador::editContato(string nome, string sobrenome)
	{
		int position = searchContato(nome, sobrenome);
    	
    	if (position == -1)
   		{
        	return 0;
    	}
 
	    string nome_atualizar;
	    cout <<"Nome do Contato" << lista_de_contatos[position].getNome() << endl;
	    cout << "Nome (ATUALIZAR):" << endl;
	    cin  >> nome_atualizar;


	    string sobrenome_atualizar;
	    cout <<"Sobrenome do Contato :" << lista_de_contatos[position].getSobrenome() << endl;
	    cout << "Sobrenome (ATUALIZAR):" << endl;
	    cin  >> sobrenome_atualizar;

	    string rua_atualizar;
	    cout << "Rua do Contato :" << lista_de_contatos[position].getRua() << endl;
	    cout << "Rua (ATUALIZAR)" << endl;
	    cin >> rua_atualizar;

		string bairro_atualizar;
	    cout << "Bairro do Contato :" << lista_de_contatos[position].getBairro() << endl;
	    cout << "Bairro (ATUALIZAR)" << endl;
	    cin >> bairro_atualizar;

	 	string cidade_atualizar;
	    cout << "Cidade do Contato :" << lista_de_contatos[position].getCidade() << endl;
	    cout << "Cidade (ATUALIZAR)" << endl;
	    cin >> cidade_atualizar;


	    string numerotelefone_atualizar;
	    cout << "Telefone do Contato :" << lista_de_contatos[position].getNumeroTelefone() << endl;
	    cout << "Telefone (ATUALIZAR)" << endl;
	    cin >> numerotelefone_atualizar;

	    string email_atualizar;
	    cout << "Email do Contato :" << lista_de_contatos[position].getEmail() << endl;
	    cout << "Email (ATUALIZAR) " << endl;
	    cin>> email_atualizar;

	    string nomefacebook_atualizar;
	    cout <<"Facebook do Contato :" << lista_de_contatos[position].getNomeFacebook() << endl;
	    cout << "Facebook (ATUALIZAR) " << endl;
	    cin >> nomefacebook_atualizar;
	    
	    string linkface_atualizar;
	    cout <<"Link do Facebook do Contato :" << lista_de_contatos[position].getLinkFace() << endl;
	    cout << "Link do Facebook (ATUALIZAR) " << endl;
	    cin>> linkface_atualizar;

	    int tipodepessoa_atualizar;
	    cout <<"Tipo de Contato :" << lista_de_contatos[position].getTipoDePessoa() << endl;
	    cout << "Tipo (ATUALIZAR) " << endl;
	    cin>> tipodepessoa_atualizar;

	    if (lista_de_contatos[position].getTipoDePessoa() == 0) 
	    {

		   	string cpf_atualizar;
		   	string rg_atualizar;
		   	PessoaFisica *pessoa_f;
			pessoa_f = static_cast<PessoaFisica*>(&lista_de_contatos[position]);
		    cout <<"CPF do Contato : " << pessoa_f->getCpf() << " RG do Contato " << pessoa_f->getRg() <<endl;
		    cout << "CPF (ATUALIZAR) " << endl;
		    cin>> cpf_atualizar;
		    cout << "RG (ATUALIZAR) " << endl;
		    cin>> rg_atualizar;
			pessoa_f->setCpf(cpf_atualizar);
			pessoa_f->setRg(rg_atualizar);
			pessoa_f->setNome(nome);
			//Completar a atualizacao
	    	lista_de_contatos[position] = *pessoa_f;
	    
	    }else{

	    	string cnpj_atualizar;
	    	PessoaJuridica *pessoa_j;
			pessoa_j = static_cast<PessoaJuridica*>(&lista_de_contatos[position]);
	    	cout <<"CNPJ do Contato :" << pessoa_j->getCnpj() << endl;
	    	cout << "CNPJ (ATUALIZAR) " << endl;
	    	cin>> cnpj_atualizar;
			//Completar a atualizacao
			pessoa_j->setCnpj(cnpj_atualizar);			
			lista_de_contatos[position] = *pessoa_j;
	    }

    return 1;

	}
	
	int Controlador::searchContato(string nome, string sobrenome)
	{
		int i;
    	
    	if (numero_contatos == 0)
        return -1;

    	for (i = 0 ; i < numero_contatos ; i++)
    	{
        	if (lista_de_contatos[i].getNome() == nome) // nome
        	{
        		if (lista_de_contatos[i].getSobrenome() == sobrenome){ //sobrenome
        	
	        		cout << "Contato foi achado no sistema" << endl;
	            	cout << lista_de_contatos[i].toString() << endl; //incompleto - completar com tudo que tem nos contatos
            	return i;	
        	
        		}else{
        			cout << "Contato não encontrado" << endl;
        		}

    		}
    	}
	}
	
	int Controlador::searchContatoPorBairro(string bairro) //Como fazer
	{
		int i;
    	
    	if (numero_contatos == 0)
        return -1;

    	for (i = 0 ; i < numero_contatos ; i++)
    	{
        	if (lista_de_contatos[i].getBairro() == bairro) // Está certo??
        	{
        	
	        		cout << "Bairro de contato foi achado no sistema" << endl;
	            	cout << lista_de_contatos[i].getBairro() << endl; 
            	return i;	//Se tiver mais de uma pessoa no mesmo bairro?
        	
        		}else{
        			cout << "Contato não encontrado" << endl;
        	}

    	}
    }

    int Controlador::listContatos()
    {
    	for (int i = 0 ; i < numero_contatos ; i++) 
    	{
    		cout << "NOME : " << lista_de_contatos[i].getNome() << " " << lista_de_contatos[i].getSobrenome() << endl; 
    	}
    }
	
	
