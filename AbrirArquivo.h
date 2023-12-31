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
    AbrirArquivo(QWidget *parent, Professor **professor, int &tamanho_vetor){
        QFile arquivo(QFileDialog::getOpenFileName(parent, "Abrir Arquivo", "/home/", "*.csv"));
        QTextStream in(&arquivo);
        if (!arquivo.open(QIODevice::ReadOnly))
        {
            throw QString("Erro ao abrir o arquivo");
        }
        if ((*professor))
        {
            delete[] (*professor);
            *professor = 0;
            tamanho_vetor = 0;
        }
        TratarArquivo tratar_arquivo(in, professor, tamanho_vetor);
        arquivo.close();
    }
};

#endif // ABRIRARQUIVO_H
