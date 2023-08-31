#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


#include <iostream>

void eita(int **nmr){
    std::cout << **nmr << std::endl;
    std::cout << *&nmr << std::endl;
    std::cout << *nmr << std::endl;
    *nmr = new int(50);
}

void functin(int **nmr){
    std::cout << **nmr << std::endl;
    std::cout << *&nmr << std::endl;
    std::cout << *nmr << std::endl;
    eita(nmr);
}
void anao(int &nmr){
    std::cout << nmr << std::endl;
    std::cout << &nmr << std::endl;
    nmr = 5;
}

int main(){
    int *nmr = new int(90);
    std::cout << *nmr << std::endl;
    std::cout << nmr << std::endl;
    std::cout << &nmr << std::endl;
    functin(&nmr);
    std::cout << *nmr << std::endl;
    std::cout << nmr << std::endl;
    std::cout << &nmr << std::endl;
    functin(&nmr);
    // int numero = 20;
    // anao(numero);
    // std::cout << numero << std::endl;
    // std::cout << &numero << std::endl;
}
