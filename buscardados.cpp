#include "buscardados.h"
#include "conjunto.h"
#include "operartabela.h"
#include "ProfessorComparatorTitulacaoNome.h"
#include "ordenacao.h"

BuscarDados::BuscarDados(QTableWidget *parent, QString current_text, Professor *arrayProfessor, int &tamanho_vetor){
    Conjunto conj(arrayProfessor, tamanho_vetor);
    if (current_text == "Busca Sequencial - Nome"){
//        conj.getProfessorSelectionSort()
    }
    if (current_text == "Busca Sequencial - Matricula"){
        
    }
    if (current_text == "Busca Binária - Nome"){
        
    }
    if (current_text == "Busca Binária - Matricula"){
        
    }
}
