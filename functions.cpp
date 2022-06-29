#include <iostream>
#include <windows.h>
#include <cstring>
 
using namespace std;

typedef struct Aluno
{
    char nome[30];
    int matricula;
    float nota;
};

Aluno Cadastro(char nome[], int matricula, float nota) {
    Aluno c;
    strcpy(c.nome, nome);
    c.matricula = matricula;
    c.nota = nota;
    return c;
}

Aluno Imprime(Aluno aluno) {
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matricula: " << aluno.matricula << endl;
    cout << "Nota: " << aluno.nota << endl;
}
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    Aluno aluno;

    aluno = Cadastro("Joao", 123, 9.5);
    Imprime(aluno);

    cout << endl;
    return 0;
}