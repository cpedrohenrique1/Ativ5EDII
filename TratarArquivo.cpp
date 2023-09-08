#include "TratarArquivo.h"
#include "QFile"
#include "QFileDialog"
#include <list>
#include <iostream>
#include "QCoreApplication"
#include "QDir"

bool TratarArquivo::erro(QString &linha, QStringList &parts) const
{
    if ((linha.isEmpty() || linha.isNull()) || parts.size() != 5)
    {
        return true;
    }
    bool indice_part = false;
    for (QString teste_error : parts)
    {
        if ((teste_error.isEmpty() || teste_error.isNull()))
        {
            return true;
        }
        bool letra = false;
        for (int i = 0; i < teste_error.size() && !letra; ++i)
        {
            if (teste_error[i] != ' ')
            {
                letra = true;
            }
        }
        if (!letra)
        {
            return true;
        }
        if (!indice_part)
        {
            for (int i = 0; i < teste_error.size(); ++i)
            {
                if (teste_error[i] < '0' || teste_error[i] > '9')
                {
                    return true;
                }
            }
        }
        if (indice_part)
        {
            for (int i = 0; i < teste_error.size(); ++i)
            {
                if (teste_error[i] >= '0' && teste_error[i] <= '9')
                {
                    return true;
                }
            }
        }
        if (!indice_part){
            indice_part = true;
        }
    }
    return false;
}

TratarArquivo::TratarArquivo(QTextStream &in, Professor **professor, int &tamanho_vetor)
{
    if ((*professor))
    {
        delete[] (*professor);
        (*professor) = 0;
        tamanho_vetor = 0;
    }
    std::list<Professor> lista_professor;
    int numero_linha = 0;
    while (!in.atEnd())
    {
        ++numero_linha;
        QString linha = in.readLine();
        QStringList parts = linha.split(";");
        if (erro(linha, parts))
        {
            QString DiretorioLog = QCoreApplication::applicationDirPath() + "/logs";
            QDir diretorio;
            if (!diretorio.exists(DiretorioLog))
            {
                diretorio.mkpath(DiretorioLog);
            }
            QFile logfile(DiretorioLog + "/log.txt");
            if (!logfile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            {
                throw QString("Nao foi possivel abrir o arquivo log");
            }
            QTextStream out(&logfile);
            out << linha << "\n";
            out << "Erro na linha " << numero_linha << " do arquivo" << "\n\n";
            logfile.close();
        }
        else
        {
            Professor newProf;

            newProf.setMatricula(parts[0].toInt());
            newProf.setNome(parts[1]);
            newProf.setDepartamento(parts[2]);
            newProf.setTitulacao(parts[3]);
            newProf.setTipo_de_contrato(parts[4]);

            lista_professor.push_back(newProf);
        }
    }
    if (lista_professor.empty())
    {
        throw QString("Nao foi possivel ler o arquivo corretamente");
    }
    try
    {
        tamanho_vetor = lista_professor.size();
        *professor = new Professor[tamanho_vetor];
        int indice = 0;
        for (Professor temp : lista_professor)
        {
            (*professor)[indice] = temp;
            ++indice;
        }
    }
    catch (std::bad_alloc &e)
    {
        throw QString("Nao foi possivel alocar memoria");
    }
}
