#include <iostream>

using namespace std;

int main(){
    int x = 67;
    int* p = &x;
    cout<< &x <<endl;
    cout<<*p<<endl;
    *p = 41;
    cout<<*p<<endl;
}