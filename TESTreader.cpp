#include "Reader.h"
int main(){
    int a = 2,b = 3;
    Temp_Stack<int,1005> S;
    S.push(1);
    sWrite(cout,S.pop());
    Temp_F<int>::swap(a,b);
    sWrite(cout,a<<b);
    Sleep(3000);
    return 0;
}