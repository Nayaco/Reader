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
#include<Windows.h>

#define Read(x) scanf("%s",&x)
#define Write(x) printf("%s",x)
#define sRead(x) cin>>x
#define sWrite(x) cout<<x
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

class Ant{
    Ant(){
    }
    public:
        static void Showme(string A);  
    private:
        int Selfcheck();
        int KMP(string A,string B);
};
void Ant::Showme(string A){
    sWrite(A);
}
int Ant::KMP(string A,string B){

}


