#ifndef TRATARARQUIVO_H
#define TRATARARQUIVO_H
#include "professor.h"
#include "QString"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "professor.h"
#include <list>

class TratarArquivo{
public:
    void operator()(QTextStream *in, Professor *professor, int *tamanho_vetor){
        if (!in){
            throw QString("Arquivo nao aberto");
        }
        if (professor){
            delete professor;
        }
        if (tamanho_vetor){
            delete tamanho_vetor;
        }
        std::list<Professor> lista_professor;
        while (!in->atEnd())
        {
            try {
                QString linha = in->readLine();
                QStringList parts = linha.split(";");
                int i = 0;
                bool erro = false;
                Professor *newProf = new Professor;
                for (QString part : parts)
                {
                    if (i == 0){
                        for (int indice = 0; indice < part.size(); indice++){
                            if (part[indice] < '0' || part[indice] > '9'){
                                erro = true;
                                indice = part.size();
                            }
                        }
                    }else{
                        for (int indice = 0; indice < part.size(); indice++){
                            if (part[indice] >= '0' && part[indice] <= '9'){
                                erro = true;
                                indice = part.size();
                            }
                        }
                    }
                    if (part.isEmpty()){
                        erro = true;
                    }
                    if (!erro){
                        switch (i)
                        {
                        case 0:
                        {
                            newProf->setMatricula(part.toInt());
                            break;
                        }
                        case 1:
                        {
                            newProf->setNome(part);
                            break;
                        }
                        case 2:
                        {
                            newProf->setDepartamento(part);
                            break;
                        }
                        case 3:
                        {
                            newProf->setTitulacao(part);
                            break;
                        }
                        case 4:
                        {
                            newProf->setTipo_de_contrato(part);
                            break;
                        }
                        }
                    }
                    else{
    //                        escrever no arquivo a linha, o numero da linha e o erro
                    }
                    ++i;
                }
                lista_professor.push_back(*newProf);
            } catch (std::bad_alloc &e) {
                throw QString("Nao foi possivel alocar memoria");
            }
        }
        try {
            if (lista_professor.empty()){
                throw QString("Nao foi possivel ler o arquivo corretamente");
            }
            tamanho_vetor = new int(lista_professor.size());
            professor = new Professor[lista_professor.size()];
            int indice = 0;
            for (Professor prof : lista_professor){
                professor[indice] = prof;
                indice++;
            }
        } catch (std::bad_alloc &e) {
            throw QString("Nao foi possivel alocar memoria");
        }
    }
};

#endif // TRATARARQUIVO_H
