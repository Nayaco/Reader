#include "Reader.h"

int main(){
    int a = 2,b = 3;
    Temp_F<int>::swap(a,b);
    sWrite(cout,a<<b);
    Sleep(3000);
    return 0;
}