#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> process(std::string expected, std::string actual){
    
    if(expected.empty()){
        return{};
    }
    else if(expected==actual){
        return {"functions " , actual};
    }
    else{
        return{"check "  , "your " , " function"};
    }
}

std::vector<int> listnumber(int a,int b, int c , int d){
    auto total=0;
    if(a==b&&c==d){
        return {a,c};
    }
    else{
        total=a*b*c*d;
        return{total};
    }
}