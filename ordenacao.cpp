#include "ordenacao.h"
#include "ProfessorComparatorDepartamentoNome.h"
#include "ProfessorComparatorTipoContratoNome.h"
#include "ProfessorComparatorTitulacaoNome.h"
#include "ProfessorComparatorMatricula.h"
#include "ProfessorComparatorNome.h"
#include "ProfessorComparatorTipoContratoNome.h"
#include "ProfessorComparatorTitulacaoNome.h"

Ordenacao::Ordenacao(QTableWidget *parent, QString ordem_ordenacao, Professor *array_professor, int& tamanho_vetor)
{
    if (!array_professor){
        throw QString ("Vetor de professor nao criado");
    }
    Conjunto conj(array_professor,tamanho_vetor);
    OperarTabela ot;
    if (ordem_ordenacao == "Matricula"){
        conj.selectionSort(ProfessorComparatorMatricula());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else if (ordem_ordenacao == "Nome"){
        conj.selectionSort(ProfessorComparatorNome());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else if (ordem_ordenacao == "Departamento - Nome"){
        conj.selectionSort(Professro);
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else if (ordem_ordenacao == "Titulação - Nome"){
        conj.selectionSort(ProfessorComparatorMatricula());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else if (ordem_ordenacao == "Tipo de contrato - Nome"){
        conj.selectionSort(ProfessorComparatorMatricula());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else if (ordem_ordenacao == "Departamento - Titulação - Nome"){
        conj.selectionSort(ProfessorComparatorMatricula());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
    else{
        conj.selectionSort(ProfessorComparatorMatricula());
        ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
    }
}
