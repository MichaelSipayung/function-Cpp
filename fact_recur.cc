int fact_rec(int value){

    if(value>1){
        return fact_rec(value-1)*value;
    }
    return 1;
}