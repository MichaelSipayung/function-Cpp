#include <iostream>
//inline function for optimize small,straight-line function

inline const std::string &shorterStringma(const std::string &s1,const std::string &s2){
    return s1.size()<=s2.size()? s1:s2;
}
inline int smaller(int a,int b){
    return a<b?a:b;

}