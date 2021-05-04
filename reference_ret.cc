#include <iostream>

char &get_val(std::string &str,std::string::size_type ix){
    return str[ix];
}