#include <iostream>
#include<format>
using namespace std;

int main(){
    int x {42};
    int* ptr;
    ptr = &x;
    int y = *ptr;
    if(__cplusplus == 202002L) cout << "C++20" << endl;
    cout << format("x = {}", x) << endl;
    cout << format("y = {}",y) << endl;
    cout << format("ptr = {}", (void*)ptr) << endl;
    return 0;
}