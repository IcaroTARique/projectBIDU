#include <string>
#include <iostream>
#include "controlador.h"
#include <stdio.h>
#include <string>

Controlador *controller = new Controlador();


void cadastrando()
{
    int res_operacao;

    res_operacao = controller->addContato();

    if(res_operacao == -1)
        cout << "Impossivel Adicionar" << endl;
    else
        cout << "Possivel Adicionar" << endl;

 }
void procurandoByNome()
{
    string nome;
    string sobrenome;
    int res_operacao;
    fflush(stdin);

    cout << "Digite Nome do Contato para pesquisa por Nome" << endl;
    cin >> nome;
    cout << "Digite Sobrenome do Contato" << endl;
    cin >> sobrenome;
    res_operacao = controller->searchContato(nome, sobrenome);

    if(res_operacao == -1)
        cout << "Impossivel Consultar" << endl;
    else
        cout << "Possivel consultar" << endl;

}

void procurandoByBairro()
{
    string nome;
    int res_operacao;
    fflush(stdin);

    cout << "Digite Nome do Contato para Pesquisa por Bairro" << endl;
    cin >> nome;
    res_operacao = controller->searchContatoPorBairro(nome);

    if(res_operacao == -1)
        cout << "Impossivel Consultar" << endl;
    else
        cout << "Possivel consultar" << endl;

}

void editando()
{
    string nome, sobrenome;
    int res_operacao;
    fflush(stdin);

    cout << "Digite um Nome para Editar" << endl;
    cin >> nome;
    cout << "Digite um Sobrenome" << endl;
    cin >> sobrenome;
    res_operacao = controller->editContato(nome, sobrenome);

    if(res_operacao == -1)
        cout << "Impossivel editar" << endl;
    else
        cout << "Possivel editar" << endl;

}
void removendo()
{
    string nome, sobrenome;
    int res_operacao;
    fflush(stdin);

    cout << "Digite um Nome de contato a ser Deletado" << endl;
    cin >> nome;
    cout << "Digite um Sobrenome" << endl;
    cin >> sobrenome;
    res_operacao = controller->deleteContato(nome, sobrenome);

    if(res_operacao == -1)
        cout << "Impossivel Remover" << endl;
    else
        cout << "Possivel Remover" << endl;
}

void mostraMenu()
{
    cout << "____________________________________________________" << endl;
    cout << "_______________________MENU_________________________" << endl;
    cout << "****************************************************" << endl;
    cout << "*  -1-    Para Cadastro de Contato                 *" << endl;
    cout << "*  -2-    Para Consulta de Contato por Nome        *" << endl;
    cout << "*  -3-    Para Consulta de Contato por Bairro      *" << endl;
    cout << "*  -4-    Para Edicao de contato                   *" << endl;
    cout << "*  -5-    Para Remocao de Contato                  *" << endl;
    cout << "*  -6-    Para Listar Todos os Contatos            *" << endl;
    cout << "*  -7-    Finalizar Programa                       *" << endl;
    cout << "****************************************************" << endl;
    cout << "____________________________________________________\n" << endl;
}

void exit()
{
    cout << "SHUTDOWN - END" << endl;
}

void listar()
{
    controller->listContatos();
}
int main()
{

    int opcao;
    int res_operacao;

    while(opcao!=7)
    {
        mostraMenu();

        fflush(stdin);

        cout << "O que voce deseja fazer?" << endl;
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                 cadastrando();
                 break;
            case 2:
                 procurandoByNome();
                 break;
            case 3:
                 procurandoByBairro();
                 break;
            case 4:
                 editando();
                 break;
            case 5:
                 removendo();
                 break;
            case 6:
                 listar();
                 break;
            case 7:
                 exit();
                 break;
        }

    };


}
