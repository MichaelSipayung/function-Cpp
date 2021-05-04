int count_calls(){
    static int ctr=0;
    return ++ctr;
}

int for_nonstatic(){
    int nonstatic=0;
    return ++nonstatic;
}