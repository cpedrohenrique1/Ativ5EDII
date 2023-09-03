#ifndef TRATARARQUIVO_H
#define TRATARARQUIVO_H
#include "professor.h"
#include "QString"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include <list>
#include <iostream>
#include "QCoreApplication"
#include "QDir"

class TratarArquivo
{
public:
    //  testar erro de arquivo
    bool erro(QString &linha, QStringList &parts) const;
    // adicionar os dados do arquivo na lista ou no arquivo log
    void operator()(QTextStream &in, Professor **professor, int &tamanho_vetor);
};

#endif // TRATARARQUIVO_H
