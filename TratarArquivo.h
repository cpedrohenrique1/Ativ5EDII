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
    bool erro(QString &linha, QStringList &parts) const;
    TratarArquivo(QTextStream &in, Professor **professor, int &tamanho_vetor);
};

#endif // TRATARARQUIVO_H
