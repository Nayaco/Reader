#include<Reader.h>

void Ant::Showme(string A){
    sWrite(A);
}

int* Ant::Getnext(string A){
    int *Index = new int[A.length()+1];
    Index[0] = Index[1] = 0;
    int j = 0;
    for(int i = 1; i < A.length(); i++){
        j = Index[i];
		while(j > 0 && A[i] != A[j])j = Index[j];
		if(A[i] == A[j])j++;
            else j = 0;
		Index[i+1]=j;
	}
    return Index;
}

int* Ant::KMP(string A,string B){
    int *Index = Getnext(B);
    int *Match = new int[A.length()];
    memset(Match,0,sizeof(Match));
    //for(int i = 0; i < B.length(); i++)sWrite(Index[i]);
    int j = 0,Isfound = 0;
    for(int i = 0; i < A.length(); i++){
        while(j > 0 && A[i] != B[j])j = Index[j];
        if(A[i] == B[j])j++;
        if(j == B.length()){
            Match[++Isfound] = i - B.length() + 1;
            //sWrite(i-B.length()+1);
            j = Index[j];
        }
    }
    return Isfound?Match:nullptr;
}

int* Ape::Find(string origin, int x){
    return nullptr;
}