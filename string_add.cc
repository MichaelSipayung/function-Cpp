#include <iostream>

std::string make_plural(size_t cnt,const std::string &word,const std::string &end){
    return (cnt>1)?word+end:word;;
}

const std::string &shorterString(const std::string &s1,  const std::string &s2){
    return s1.size()<=s2.size()?s1:s2;
}