#include <iostream>

class teste{
private:
    int *array;
public:
    teste():
        array(new int[10]){
            for(int i = 0; i < 10; ++i){
                array[i] = i;
            }
    }
    int *getArray() const{
        return array;
    }
};

int main(){
    teste t;
    std::cout << t.getArray() << std::endl;
    return 0;
}