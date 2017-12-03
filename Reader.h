#ifndef READER_H
#define READER_H

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
#include "tinyxml2.h"
#include "tinyxml2.cpp"
#include "General_Func.cpp"

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
using namespace tinyxml2;

//KMPant
class Ant{
    public:
        Ant(){}
        ~Ant(){}
        static int* KMP(string A,string B);
        static int* Getnext(string A);
    private:
        void Selfcheck();
};
//The string ape
class Ape{
    public:
        string ApeStr;
        Ape(int Num);
        ~Ape();
        static int* Find(string Origin,int X);
};
//The html bean
class Bean{
    public:
        XMLDocument HTML;
        Bean();
        ~Bean();
        void htmlRead();//The outer port
    private:
//Element adder
        bool addElement(string Eledata);
};

class LOG{
    public:
        LOG(string Logname,int index);
        ~LOG();
        void Writelog(string Logdata);
        int Status();
        void SendErr();
        static void login();         
    private:
        fstream logout;
        int logindex;
};

#endif