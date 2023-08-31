#ifndef ABRIRARQUIVO_H
#define ABRIRARQUIVO_H
#include "QString"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "professor.h"
#include "TratarArquivo.h"

class AbrirArquivo{
public:
    QString operator()(QWidget *parent, Professor **professor, int &tamanho_vetor){
        if (!parent){
            throw QString("Ocorreu um erro desconhecido");
        }
        if (*professor){
            delete *professor;
        }
        QString endereco_arquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.csv");
        QFile arquivo(endereco_arquivo);
        QTextStream in(&arquivo);
        if (!arquivo.open(QIODevice::ReadOnly))
        {
            throw QString("Erro ao abrir o arquivo");
        }
        TratarArquivo tratar_arquivo;
        tratar_arquivo(&in, professor, tamanho_vetor);
        arquivo.close();
        return endereco_arquivo;
    }
};

#endif // ABRIRARQUIVO_H
