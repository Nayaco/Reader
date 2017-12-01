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
#include<algorithm>
#include<functional>
#include<bitset>
#include<string>
#include<time.h>
#include "tinyxml.h"
#include "tinyxml.cpp"

//defines
#define stdRead(x) scanf("%s",&x)
#define stdWrite(x) printf("%s",x)
#define sRead(x) cin>>x
#define sWrite(x) cout<<x<<endl
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
//KMPant
class Ant{
    public:
        Ant(){}
        ~Ant(){}
        static void Showme(string A);  
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
        Bean(XMLDocument *XML);
        ~Bean();
        void htmlRead();
};
#endif