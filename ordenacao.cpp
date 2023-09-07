#include "ordenacao.h"

Ordenacao::Ordenacao(QTableWidget *parent, QString ordem_ordenacao, Professor *array_professor, int& tamanho_vetor)
{
    if (!parent){
        throw QString("Tabela nao criada");
    }
    if (!array_professor || tamanho_vetor == 0){
        throw QString ("Vetor de professor nao criado");
    }
    Conjunto conj(array_professor,tamanho_vetor);
    OperarTabela ot;
    if (ordem_ordenacao == "Matricula"){
        
    }
    else if (ordem_ordenacao == "Nome"){
        
    }
    else if (ordem_ordenacao == "Departamento - Nome"){
        
    }
    else if (ordem_ordenacao == "Titulação - Nome"){
        
    }
    else if (ordem_ordenacao == "Tipo de contrato - Nome"){
        
    }
    else if (ordem_ordenacao == "Departamento - Titulação - Nome"){
        
    }
    else{
        
    }
   ot.popular(parent, tamanho_vetor, conj.getProfessorSelectionSort());
}
