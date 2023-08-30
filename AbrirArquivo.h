#ifndef ABRIRARQUIVO_H
#define ABRIRARQUIVO_H
#include "QString"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"

class AbrirArquivo{
private:
    int nome;
public:
    AbrirArquivo();
    QString operator()(QWidget *parent){
        QString enderecoArquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.csv");
        QFile arquivo(enderecoArquivo);
        QTextStream in(&arquivo);
        if (!arquivo.open(QIODevice::ReadOnly))
        {
            throw QString("Erro ao abrir o arquivo");
        }
        int nmrLinha = 0;
        while (!in.atEnd())
        {
            nmrLinha++;
//            QString linha = in.readLine();
//            QStringList parts = linha.split(";");
//            int i = 0;
//            Pedro::Aluno *aluno = new Pedro::Aluno;
//            for (QString part : parts)
//            {
//                switch (i)
//                {
//                case 0:
//                {
//                    Pedro::Matricula *matricula = new Pedro::Matricula();
//                    QStringList partsMatricula = part.split(".");
//                    int j = 0;
//                    for (QString partMatricula : partsMatricula)
//                    {
//                        switch (j)
//                        {
//                        case 0:
//                        {
//                            matricula->setAno(partMatricula.toInt());
//                            break;
//                        }
//                        case 1:
//                        {
//                            matricula->setSemestre(partMatricula.toInt());
//                            break;
//                        }
//                        case 2:
//                        {
//                            matricula->setCurso(partMatricula.toInt());
//                            break;
//                        }
//                        case 3:
//                        {
//                            matricula->setNumero(partMatricula.toInt());
//                            break;
//                        }
//                        }
//                        j++;
//                    }
//                    aluno->setMatricula(*matricula);
//                    break;
//                }
//                case 1:
//                {
//                    aluno->setNome(part);
//                    break;
//                }
//                case 2:
//                {
//                    aluno->setTurno(part);
//                    break;
//                }
//                case 3:
//                {
//                    aluno->setPeriodo(part.toInt());
//                    break;
//                }
//                case 4:
//                {
//                    aluno->setOptativa(part);
//                    break;
//                }
//                case 5:
//                {
//                    aluno->setCurso(part);
//                    break;
//                }
//                }
//                ++i;
//            }
//            listaAlunos.push_back(aluno);
        }
        arquivo.close();
        return enderecoArquivo;
    }
    int getNome() const;
    void setNome(int newNome);
};

#endif // ABRIRARQUIVO_H
