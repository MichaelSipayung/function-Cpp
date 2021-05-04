#include <iostream>

void print(const char *cp){
    if(cp){
        while (*cp)
        {
            std::cout<<*cp++<<"|";            
        }
        
    }
}

//second technequie
void print(const int *beg , const int *end){
    while (beg!=end)
    {
        std::cout<<*beg++<<"|";
    }
    
}
void print(const int ia[], size_t size){
    for (size_t i = 0; i != size; ++i)
    {
        std::cout<<ia[i]<<" | ";
    }
    
}


void print(int (&arr)[10]){
    for(auto &elem :arr){
        std::cout<<elem<<"|";
    }
}

void print(int matrix[][10] , int rowSize){};
