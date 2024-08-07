#include <iostream>

int main(){
    int var = 10;
    int *ptr = &var;
    int **ptrToPtr = &ptr; //pointer to pointer

    std::cout << "Value of var: " << var << std::endl; //10
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; //10
    std::cout << "Value pointed to by ptrToPtr: " << **ptrToPtr << std::endl; //10

    return 0;
}