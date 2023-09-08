#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "QString"

class Professor
{
private:
    int matricula;
    QString nome;
    QString departamento;
    QString titulacao;
    QString tipo_de_contrato;
public:
    Professor();
    const int &getMatricula() const;
    void setMatricula(const int& newMatricula);
    const QString &getNome() const;
    void setNome(const QString &newNome);
    const QString &getDepartamento() const;
    void setDepartamento(const QString &newDepartamento);
    const QString &getTitulacao() const;
    void setTitulacao(const QString &newTitulacao);
    const QString &getTipo_de_contrato() const;
    void setTipo_de_contrato(const QString &newTipo_de_contrato);
};

#endif // PROFESSOR_H
