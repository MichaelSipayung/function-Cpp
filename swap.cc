void swap(int &a,  int &b){
    if(a==b){
        return;
    }
    int temp=b;
    b=a;
    a=temp;
}