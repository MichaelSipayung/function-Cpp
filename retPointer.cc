typedef int arrt[10];
arrt* func(int i);

//return pointer to array
// int (*function(int i))[10];
// //using a trailing return type
// auto functions(int i)->int(*)[10]{

// }

int odd[]={1,3,5,7};
int even[]={2,4,6,8};
decltype(odd) *arrPtr(int i){
    return (i%2)?&odd : &even;
} 

