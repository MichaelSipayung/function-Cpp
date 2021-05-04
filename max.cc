#include "max.hpp"

int max(int a , int b){
    if (a>b)
    {
        return a;
    }
    else if (a<b)
    {
        return b;
    }
    
    else{
        return b;
    }
    
}
int max(int a , int b,int c){
    if (a>b>c)
    {
        return a;
    }
    else if (a<b<c)
    {
        return c;
    }
    
    else{
        return b;
    }
    
}