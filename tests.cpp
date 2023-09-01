#include <iostream>

void function2(int **var){
    for (int i = 0; i < 10; i++){
        std::cout << (*var)[i] << std::endl;
    }
}

void function(int **var){
    // var cria um ponteiro para um array de tamanho 10
    *var = new int[10];
    for (int i = 0; i < 10; i++){
        (*var)[i] = i;
    }
    function2(var);
}

int main(){
    int *var;
    function(&var);
    std::cout << var << std::endl;
    return 0;
}