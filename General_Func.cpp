/*
*/
#pragma region Headers  
#pragma G++ diagnostic error "-std=c++11"
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<queue>
#include<vector>
#include<stack>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<functional>
#include<bitset>
#include<string>
#include<time.h>
#include<Windows.h>
//defines
#define CreateoF(x,y) x.open(y,ios::out,0)
#define CreateiF(x,y) x.open(y,ios::in,0)
#define Close(x) x.close();
#define stdRead(format,x) scanf(format,&x)
#define stdWrite(format,...) printf(format,__VA_ARGS__)
#define sRead(x,...) x>>__VA_ARGS__
#define sWrite(x,...) x<<__VA_ARGS__<<endl
#define RPoint_to(x) freopen(x,"r",stdin)
#define WPoint_to(x) freopen(x,"w",stdout)
#define Closer fclose(stdin)
#define Closew fclose(stdout)
#define Allclose fclose(stdin);fclose(stdout)
#define Setr srand((unsigned)time(NULL))
#define ran(x) rand()%x
#define Turnoff std::ios::sync_with_stdio(false)
#define Start(x) x=time(NULL)
#define Stop(x) printf("TimeCost:%d\n",time(NULL)-x);system("Pause")
#define Insert main()
using namespace std;
#pragma endregion
//.......................................................
#pragma region Declears
template<class T> class Temp_F{
  public:
    static void swap(T& A,T& B);
};

template<class T,int Max_L> class Temp_Stack{
    public:
        Temp_Stack();
        ~Temp_Stack();
        bool Empty();
        T pop();
        void push(T A);
    private:
        T* Stack;
        bool Is_Full();
        int Len,Max_Len;
};
#pragma endregion
//.....................This is Temp_F......................
template<class T> void Temp_F<T>::swap(T& A, T& B){
    T t; t = A; A = B; B = t;
}
//...................This is Temp_Stack....................
template<class T,int Max_L> Temp_Stack<T,Max_L>::Temp_Stack(){
    Max_Len = Max_L;Len = 0; Stack = new T[Max_L];
}

template<class T,int Max_L> Temp_Stack<T,Max_L>::~Temp_Stack(){
    delete []Stack; 
}

template<class T,int Max_L> bool Temp_Stack<T,Max_L>::Empty(){
    return Len?0:1;   
}

template<class T,int Max_L>bool Temp_Stack<T,Max_L>::Is_Full(){
    if(Len == Max_Len)return 1;
    return 0;
} 
template<class T,int Max_L> void Temp_Stack<T,Max_L>::push(T A){
    if(!Is_Full())Stack[Len++] = A;
    else{
        Max_Len <<= 1;
        T* temp = new T[Max_Len];
        for(int i = 0;i < Len; i++)temp[i] = Stack[i];
        Stack = temp;
        delete []temp;
        Stack[Len++] = A;
    }
    return;
}
template<class T,int Max_L> T Temp_Stack<T,Max_L>::pop(){
    return Empty()?NULL:Stack[--Len];
}
//......................................................


