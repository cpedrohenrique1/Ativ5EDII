#include "professor.h"

int Professor::getMatricula() const
{
    return matricula;
}

QString Professor::getMatriculaQString() const
{
    return QString::number(matricula);
}

void Professor::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

const QString &Professor::getNome() const
{
    return nome;
}

void Professor::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Professor::getDepartamento() const
{
    return departamento;
}

void Professor::setDepartamento(const QString &newDepartamento)
{
    departamento = newDepartamento;
}

const QString &Professor::getTitulacao() const
{
    return titulacao;
}

void Professor::setTitulacao(const QString &newTitulacao)
{
    titulacao = newTitulacao;
}

const QString &Professor::getTipo_de_contrato() const
{
    return tipo_de_contrato;
}

void Professor::setTipo_de_contrato(const QString &newTipo_de_contrato)
{
    tipo_de_contrato = newTipo_de_contrato;
}

Professor::Professor():
    matricula(0),
    nome(""),
    departamento(""),
    titulacao(""),
    tipo_de_contrato("")
{}
