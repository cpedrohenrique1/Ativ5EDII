#ifndef TRATARARQUIVO_H
#define TRATARARQUIVO_H
#include "professor.h"
#include "QString"
#include "QTextStream"

class TratarArquivo
{
public:
    bool erro(QString &linha, QStringList &parts) const;
    TratarArquivo(QTextStream &in, Professor **professor, int &tamanho_vetor);
};

#endif // TRATARARQUIVO_H
