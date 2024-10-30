#include <iostream>
using namespace std;

//Pointer is a variable that point to the address of another variable, when using pointer you can change the variable directly with pointer

// Using pointer have to put & before argument when call function swap1(&a.&b)
void swap1(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
//similar to swap 1, another reference of using poiter in function but dont have to put & before argument
// swap2(a,b)
void swap2(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
// Not using pointer
void swap3(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    //ptr is a pointer to x
    int x = 10;
    int* ptr = &x;

    // change the value of x through ptr
    *ptr = 20;
    cout<<x;

    int a = 1;
    int b = 2;
    cout<<"Don't use pointer:";
    swap3(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<"Use pointer:";
    swap2(a,b);
    cout<<a<<" "<<b<<endl;
}