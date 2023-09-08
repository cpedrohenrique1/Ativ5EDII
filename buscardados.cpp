#include "buscardados.h"
#include "operartabela.h"
#include "OrdenarConjuntoMatricula.h"
#include "OrdenarConjuntoNome.h"
#include "BuscaNome.h"
#include "BuscaMatricula.h"

BuscarDados::BuscarDados(QTableWidget *parent, QString current_text, QString& entrada, Professor *array_professor, int &tamanho_vetor)
{
    if (!parent)
    {
        throw QString("Erro ao criar tabela");
    }
    if (!array_professor || tamanho_vetor == 0)
    {
        throw QString("Array professor nao criado");
    }
    Professor *temp(0);
    int indice = -1;
    if (current_text == "Busca Sequencial - Nome")
    {
        temp = OrdenarConjuntoNome().SelectionSort(array_professor, tamanho_vetor);
        indice = BuscaNome().BuscaSequencial(temp, tamanho_vetor, entrada);
    }
    else if (current_text == "Busca Sequencial - Matricula")
    {
        temp = OrdenarConjuntoMatricula().SelectionSort(array_professor, tamanho_vetor);
        indice = BuscaMatricula().BuscaSequencial(temp, tamanho_vetor, entrada);
    }
    else if (current_text == "Busca Binária - Nome")
    {
        temp = OrdenarConjuntoNome().SelectionSort(array_professor, tamanho_vetor);
        indice = BuscaNome().BuscaBinaria(temp, tamanho_vetor, entrada);
    }
    else
    {
        temp = OrdenarConjuntoMatricula().SelectionSort(array_professor, tamanho_vetor);
        indice = BuscaMatricula().BuscaBinaria(temp, tamanho_vetor, entrada);
    }

    OperarTabela ot;
    if (indice == -1){
        ot.limpar(parent);
    }
    else{
        ot.buscaElemento(parent, temp[indice]);
    }
    
    if (temp)
    {
        delete[] temp;
    }
}
