long long int factorial(int value){
    long long int ret=1;
    while (value>1)
    {
        ret*=value--;
    }
    return ret;
    
}
