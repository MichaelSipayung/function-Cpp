#include <iostream>
#include <initializer_list>

void error_mgs(std::initializer_list<std::string> name_arg){
    for (auto i = name_arg.begin(); i != name_arg.end(); ++i)
    {
        std::cout<<*i<<std::endl;
    }
    
}