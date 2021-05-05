#include <iostream>

//default argument

typedef std::string::size_type sz;
std::string screen(sz ht=24,sz wid =80,char backgrnd='m'){
    std::string collect;
    collect=static_cast<char>(backgrnd);
    return collect;
}

void collectData(sz ht=24,sz wd=56){
    std::cout<<"1. Collect data\t: " << ht<<std::endl;
    std::cout<<"2. Collect data\t: " << wd<<std::endl;

}

