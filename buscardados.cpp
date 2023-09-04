#include "buscardados.h"
#include "conjunto.h"

BuscarDados::BuscarDados(QTableWidget *parent, QString current_text, Professor *arrayProfessor, int &tamanho_vetor){
    Conjunto conj(arrayProfessor, tamanho_vetor);
    if (current_text == "Busca Sequencial - Nome"){
        buscaSequencialNome(conj, current_text);
    }
    if (current_text == "Busca Sequencial - Matricula"){
        
    }
    if (current_text == "Busca Binária - Nome"){
        
    }
    if (current_text == "Busca Binária - Matricula"){
        
    }
}

Professor *BuscarDados::buscaSequencialNome(Conjunto &conj, QString nome){
    if (!conj.getProfessorSelectionSort() || conj.getTamanhoVetor() == 0){
        throw QString("Erro, vetor de professores nao existe");
    }
    for (int i = 0; i < conj.getTamanhoVetor(); ++i){
        if (conj.getProfessorSelectionSort()[i].getNome() == nome){
            try{
                Professor *elemento = new Professor;
                *elemento = conj.getProfessorSelectionSort()[i];
                return elemento;
            }catch(std::bad_alloc &e){
                throw QString ("Memoria nao alocada");
            }
        }
        if (conj.getProfessorSelectionSort()[i].getNome() > nome){
            return 0;
        }
    }
    return 0;
}