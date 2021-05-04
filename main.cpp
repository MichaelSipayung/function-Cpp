#include <iostream>
#include "faktorial.hpp"
#include "enter.hpp"
#include "static.hpp"
#include "fact.cc"
#include "max.cc"
#include "pointer_param.cc"
#include "pass_by_ref.cc"
#include "compare_str.cc"
#include "findstr.cc"
#include "decltype.cc"
#include "const.cc"
#include "pass_array.cc"
#include <vector>
#include <initializer_list>
#include "vary_argument.cc"
#include "swap.cc"
#include "sum.cc"
#include "string_add.cc"
#include "reference_ret.cc"
#include "return_vector.cc"
#include <cstdlib>
#include "fact_recur.cc"
#include "retPointer.cc"

int main(int, char**) {
    
    std::cout << "Hello, function!\n";
    auto faktorial_num=4;
    long long int value_fak;
    std::string a("michael");
    std::string b_1("sipayung");
    value_fak=factorial(faktorial_num);
    std::cout<<"Factorial of  \t " << faktorial_num<<"!\t:" <<value_fak<<std::endl;
    std::cout<<" long long int size\t: " <<sizeof(long long int)<<std::endl;

    std::cout<<"1.apply static local in function \t: " << count_calls()<<std::endl;
    std::cout<<"2.apply static local in function \t: " << count_calls()<<std::endl;
    std::cout<<"3.apply static local in function \t: " << count_calls()<<std::endl;
    enter(2);
    std::cout<<"1.apply non static local in function \t: " << for_nonstatic()<<std::endl;
    std::cout<<"2.apply non static local in function \t: " << for_nonstatic()<<std::endl;
    std::cout<<"3.apply non static local in function \t: " << for_nonstatic()<<std::endl;

    std::cout<<"Number of factorial 4!\t: "  <<fact(4)<<std::endl;
    int first_va=19;
    int secon_val=18;
    std::cout<<" max value  dari \t: " <<first_va<<" dan \t: " <<secon_val<<" adalah \t: " <<max(first_va,secon_val)<<std::endl;

    //review pointer 
    int n=0;int *p=&n;
    std::cout<<"nilai p \t: " << *p<<std::endl;
    *p=12;
    std::cout<<" nilai n \t:"  <<n<<std::endl;
    std::cout<<" Nilai p \t: " <<*p<<std::endl;
    std::cout<<" Before reset \t: " <<first_va <<std::endl;
    reset(&first_va);
    std::cout<<" after reset \t: " <<first_va <<std::endl;
    std::cout<<"1.pass by reference \t: "<<secon_val<<std::endl;
    pass_reset(secon_val);
    std::cout<<"2.pass by reference \t: "<<secon_val<<std::endl;
    std::cout<<" is string \t: " <<a<<" shorter than \t:" << b_1<< "\t = " <<isShorter(a,b_1)<< " (1: true , 0: false)"<<std::endl;
    std::string mic("michael sipayung");
    std::string::size_type a_sim=0;
    auto find= find_char(mic,'i',a_sim);
    std::cout<<" Find char \t :'i'  ="<<find<<std::endl;

    tEnter(3);
    std::cout<<"size_type \t: " <<a_sim <<"byte"<<std::endl;
    std::cout<<"passing const parameter \t: "<<cons(12)<<std::endl; 

    //std::string array_name("michael");
    char name_a[]="michael";
    print(name_a);
    std::string let_co("let compile");
    std::vector<int> name_vec{12,2,3,54,3};
    int test_unit[4]={1,2,3,4};
    //print(test_unit.begin(),test_unit.end());
    tEnter(2);
    print(std::begin(test_unit) , std::end(test_unit));
    tEnter(1); 
    int fix_size[4]={1,2,3,4};
    std::cout<<"Nilai \t: [";
    print(fix_size,std::end(fix_size)-std::begin(fix_size));
    std::cout<<"]"<<std::endl;

    std::cout<<" return argumen \t:  " << std::end(fix_size)-std::begin(fix_size)<<std::endl;

    int ten_el[10];
    for (int i= 0; i <10; ++i)
    {
        ten_el[i]=i;
    }
    std::cout<<std::endl;
    std::cout<<" Print element \t: [";
    print(ten_el);
    std::cout<<std::endl;
    std::cout<<" size t \t: " <<sizeof(ten_el) <<" byte"<<std::endl;
    tEnter(2);
    //passing vary argument
    std::initializer_list<int> list_name;
    double a_test=12.09;
    int a_test_1=12;
    if(a_test==a_test_1){
        error_mgs({"function x" , "not equals"});       //must have constant type         
    }
    else{
        error_mgs({"1.test " ,"2.vary","3.argument"});
    }

    int swap_1=12,swap_2=13;
    std::cout<<" Before swap \t 1. first \t:  "<<swap_1<<std::endl<<"\t\t2. second\t: "<<swap_2<<std::endl;
    swap(swap_1,swap_2);
    std::cout<<" after swap \t 1. first \t:  "<<swap_1<<std::endl<<"\t\t2. second\t: "<<swap_2<<std::endl;
    tEnter(2);
    int sum_num[6]={1,2,3,5,9,6};
    int total=sum(sum_num);
    std::cout<<" Total data \t\t: " << total<<std::endl;
    std::cout<<" rata-rata data \t: " << average(sum_num)<<std::endl;

    size_t t=0;
    std::string name_st("michael");
    std::string name_st1("sipayung");
    std::cout<<" test return string \t: " << make_plural(t,name_st,name_st1)<<std::endl;
    std::cout<<"return reference \t: " << &shorterString(name_st,name_st1)<<std::endl;

    //references returns are lvalue
    std::cout<<std::endl;
    std::string s("value");
    std::cout<<" Before update \t\t: " <<s<<std::endl;
    get_val(s,0)='M';
    std::cout<<" return reference \t: " <<s<<std::endl;

    std::cout<<" return vector \t: [";
    std::vector<std::string> temp__vector_return=process("true","false");
    for (auto &i : temp__vector_return)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    
    std::cout<<" return list of vector \t: [";
    auto return_vector=listnumber(12,9,19,62);
    for(auto &u:return_vector){
        std::cout<<u<<"|";
    }
    std::cout<<std::endl;
    
    std::vector<std::vector<int>> secDimension{
        {2,2,3,5},
        {3,4,6,7}
    };
    std::vector<std::vector<std::string>> listStudent{
        {"michael","john","Daniel"},
        {"24  th","15  th","16  th"}
    };
    std::cout<<" Show vector 2 dimension "<< std::endl;
    
    std::cout<<"A \t: ["<<std::endl;
    for (auto &i : secDimension)
    {
        for(auto &j:i){
            std::cout<<j<<"|";
        }
        std::cout<<std::endl;
    }
    std::cout<<"]"<<std::endl;

    //explore 2 dimension
    secDimension[0][1]=12;
    std::cout<<" After change \t: ["<<std::endl;    
        for (auto &i : secDimension)
    {
        for(auto &j:i){
            std::cout<<j<<"|";
        }
        std::cout<<std::endl;
    }
    std::cout<<"]"<<std::endl;

    std::cout<<" List student \t[ " <<std::endl;
    for(auto &i:listStudent){
        for(auto &j:i){
            std::cout<<j<<" |";
        }
        std::cout<<std::endl;
    }

    std::cout<<"fact 5! \t: " <<fact_rec(5)  <<std::endl<<"call by recursive method " <<std::endl;


}



