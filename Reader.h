#ifndef READER_H
#define READER_H
#include "tinyxml2.h"
#include "tinyxml2.cpp"
#include "General_Func.cpp"
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