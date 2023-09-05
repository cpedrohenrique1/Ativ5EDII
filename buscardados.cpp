#include "buscardados.h"
#include "conjunto.h"
#include "operartabela.h"
#include "ProfessorComparatorTitulacaoNome.h"
#include "ordenacao.h"

BuscarDados::BuscarDados(QTableWidget *parent, QString current_text, Professor *arrayProfessor, int &tamanho_vetor){
    Conjunto conj(arrayProfessor, tamanho_vetor);
    if (current_text == "Busca Sequencial - Nome"){
        Ordenacao ordem(parent, )
        OperarTabela tabela;
        tabela.popular(parent, conj.getTamanhoVetor(), conj.getProfessorSelectionSort());
    }
    if (current_text == "Busca Sequencial - Matricula"){
        
    }
    if (current_text == "Busca Binária - Nome"){
        
    }
    if (current_text == "Busca Binária - Matricula"){
        
    }
}
template <typename T>
Professor *BuscarDados::buscaSequencial(Conjunto &conj, QString entrada, T compare){
    if (!conj.getProfessorSelectionSort() || conj.getTamanhoVetor() == 0){
        throw QString("Erro, vetor de professores nao existe");
    }
    for (int i = 0; i < conj.getTamanhoVetor(); ++i){
        if (compare.igual(conj.getProfessorSelectionSort()[i], entrada)){
            try{
                Professor *elemento = new Professor;
                *elemento = conj.getProfessorSelectionSort()[i];
                return elemento;
            }catch(std::bad_alloc &e){
                throw QString ("Memoria nao alocada");
            }
        }
        if (compare.maiorque(conj.getProfessorSelectionSort()[i], entrada)){
            return 0;
        }
    }
    return 0;
}

template <typename T>
Professor *BuscarDados::buscaBinaria(Conjunto &conj, QString entrada, T compare)
{
//    if (!conj.getProfessorSelectionSort() || conj.getTamanhoVetor() == 0){
//        throw QString("Array nao criado");
//    }
//    int inicio = 0;
//    int fim = tamanho - 1;
//    while (inicio <= fim){
//        int meio = (inicio + fim)/2;
//        if (conj.getProfessorSelectionSort()[meio] == valor){
//            return conj.getProfessorSelectionSort()[meio];
//        }
//        if (conj.getProfessorSelectionSort()[meio] < valor){
//            inicio = meio + 1;
//        }else{
//            fim = meio - 1;
//        }
//    }
//    return 0;
}
