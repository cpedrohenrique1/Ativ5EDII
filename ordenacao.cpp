#include "ordenacao.h"
#include "OrdenarConjuntoDepartamentoNome.h"
#include "OrdenarConjuntoDepartamentoTipoContratoNome.h"
#include "OrdenarConjuntoDepartamentoTitulacaoNome.h"
#include "OrdenarConjuntoMatricula.h"
#include "OrdenarConjuntoNome.h"
#include "OrdenarConjuntoTipoContratoNome.h"
#include "OrdenarConjuntoTitulacaoNome.h"
#include "operartabela.h"

Ordenacao::Ordenacao(QTableWidget *parent, QString ordem_ordenacao, Professor *array_professor, int& tamanho_vetor)
{
    if (!parent){
        throw QString("Tabela nao criada");
    }
    if (!array_professor || tamanho_vetor == 0){
        throw QString ("Vetor de professor nao criado");
    }
    Professor *temp(0);
    if (ordem_ordenacao == "Matricula"){
        temp = OrdenarConjuntoMatricula().SelectionSort(array_professor, tamanho_vetor);
    }
    else if (ordem_ordenacao == "Nome"){
        temp = OrdenarConjuntoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    else if (ordem_ordenacao == "Departamento - Nome"){
        temp = OrdenarConjuntoDepartamentoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    else if (ordem_ordenacao == "Titulação - Nome"){
        temp = OrdenarConjuntoTitulacaoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    else if (ordem_ordenacao == "Tipo de contrato - Nome"){
        temp = OrdenarConjuntoTipoContratoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    else if (ordem_ordenacao == "Departamento - Titulação - Nome"){
        temp = OrdenarConjuntoDepartamentoTitulacaoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    else{
        temp = OrdenarConjuntoDepartamentoTipoContratoNome().SelectionSort(array_professor, tamanho_vetor);
    }
    OperarTabela ot;
    ot.popular(parent, tamanho_vetor, temp);
    if (temp){
        delete[] temp;
    }
}
