QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    TratarArquivo.cpp \
    busca.cpp \
    buscardados.cpp \
    conjunto.cpp \
    main.cpp \
    mainwindow.cpp \
    operartabela.cpp \
    ordenacao.cpp \
    professor.cpp

HEADERS += \
    AbrirArquivo.h \
    BuscaBinaria.h \
    BuscaBinariaMatricula.h \
    BuscaBinariaNome.h \
    BuscaSequencial.h \
    BuscaSequencialMatricula.h \
    BuscaSequencialNome.h \
    ProfessorComparator.h \
    ProfessorComparatorDepartamentoNome.h \
    ProfessorComparatorDepartamentoTipoContratoNome.h \
    ProfessorComparatorDepartamentoTitulacaoNome.h \
    ProfessorComparatorMatricula.h \
    ProfessorComparatorNome.h \
    ProfessorComparatorTipoContratoNome.h \
    ProfessorComparatorTitulacaoNome.h \
    TratarArquivo.h \
    busca.h \
    buscardados.h \
    conjunto.h \
    mainwindow.h \
    operartabela.h \
    ordenacao.h \
    professor.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
