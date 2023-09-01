#ifndef TRATARARQUIVO_H
#define TRATARARQUIVO_H
#include "professor.h"
#include "QString"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "professor.h"
#include <list>
#include <iostream>

class TratarArquivo
{
public:
    void operator()(QTextStream &in, Professor **professor, int &tamanho_vetor)
    {
        if (*professor != 0)
        {
            delete[] (*professor);
            *professor = 0;
        }
        std::list<Professor> lista_professor;
        int numero_linha = 0;
        while (!in.atEnd())
        {
            numero_linha++;
            QString linha = in.readLine();
            QStringList parts = linha.split(";");
            bool erro = false;
            if ((linha.isEmpty() || linha.isNull()) && !erro)
            {
                erro = true;
            }
            if (parts.size() != 5 && !erro)
            {
                erro = true;
            }
            if (!erro)
            {
                int indice_part = 0;
                for (QString teste_error : parts)
                {
                    if ((teste_error.isEmpty() || teste_error.isNull()) && !erro)
                    {
                        erro = true;
                    }
                    int letra = 0;
                    for (int i = 0; i < teste_error.size() && !erro && letra == 0; i++){
                        if (teste_error[i] != ' '){
                            letra++;
                        }
                    }
                    if (letra == 0 && !erro){
                        erro = true;
                    }
                    if (indice_part == 0 && !erro)
                    {
                        for (int i = 0; i < teste_error.size() && !erro; i++)
                        {
                            if (teste_error[i] < '0' || teste_error[i] > '9')
                            {
                                erro = true;
                            }
                        }
                    }
                    if (indice_part > 0 && !erro)
                    {
                        for (int i = 0; i < teste_error.size() && !erro; i++)
                        {
                            if (teste_error[i] >= '0' && teste_error[i] <= '9')
                            {
                                erro = true;
                            }
                        }
                    }
                    indice_part++;
                }
            }
            if (erro){
                // escrever um arquivo log com informaçoes sobre o erro, a linha que deu erro com o numero da linha
            }else{
                Professor newProf;
                int i = 0;
                for (QString part : parts)
                {
                    switch (i)
                    {
                    case 0:
                    {
                        newProf.setMatricula(part.toInt());
                        break;
                    }
                    case 1:
                    {
                        newProf.setNome(part);
                        break;
                    }
                    case 2:
                    {
                        newProf.setDepartamento(part);
                        break;
                    }
                    case 3:
                    {
                        newProf.setTitulacao(part);
                        break;
                    }
                    case 4:
                    {
                        newProf.setTipo_de_contrato(part);
                        break;
                    }
                    }
                    i++;
                }
                lista_professor.push_back(newProf);
            }
        }
        if (lista_professor.empty())
        {
            throw QString("Nao foi possivel ler o arquivo corretamente");
        }
        try{
            tamanho_vetor = lista_professor.size();
            *professor = new Professor[tamanho_vetor];
            int indice = 0;
            for (Professor var : lista_professor)
            {
                (*professor)[indice] = var;
                indice++;
            }
        }
        catch (std::bad_alloc &e)
        {
            throw QString("Nao foi possivel alocar memoria");
        }
    }
};

#endif // TRATARARQUIVO_H
