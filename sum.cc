#include <iostream>
int sum(int number[6]){
    int total=0;
    for (size_t i = 0; i < 6; ++i)
    {
        total+=number[i];
    }
    return total;
    
}
double average(int number[6]){
    double total=0;
    auto n=6.0;
    for (size_t i = 0; i < 6; ++i)
    {
        total+=number[i];
    } 
    return total/n;
    
}