#include<bits/stdc++.h>

using namespace std;

void computelps(int *lps,char *P,int M){
    int len=0,i=1;
    lps[0]=0;
    while(i<M){
        if(P[i]==P[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else if(P[i]!=P[len]){
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}


void KMP(char *T,char *P){
    int N=strlen(T),M=strlen(P);
    int *lps=(int*)malloc(M*sizeof(int));
    computelps(lps,P,M);
    int i=0,j=0;
    while(i<N){
        if(P[j]==T[i]){
            i++;
            j++;
        }
        if(j==M){
            cout<<"\nThe Pattern found at i="<<i-j<<endl;
        j=lps[j-1];
        }
        else if(i<N &&P[j]!=T[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    free(lps);
}

int main(){
    char *T="ABABDABACDABABCABAB", *P="ABABCABAB";
    KMP(T,P);
return 0;
}
