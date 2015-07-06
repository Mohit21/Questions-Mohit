/*
LCS Problem Statement: 
Given two sequences, find the length of longest subsequence present in both of them. 
A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. 
For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”. 
So a string of length n has 2^n different possible subsequences.
*/

#include<iostream>
#include<cmath>

using namespace std;
/*
int length(char A[],int n){
    int l=0;
    for(int i=0;i<n;i++){
            if(A[i]!='\0'){
                           l++;
                           }
            else{
                 continue;
                 }
            }
    return l+1;
    }
*/
    
int max(int x,int y){
   return  (x>y)?x:y;
    }
    
int longestSub(char A[],int m,char B[],int n){
    int C[m+1][n+1];
    for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                    if(i==0||j==0){
                         C[i][j]=0;          
                                   }
                    else if(A[i-1]==B[j-1]){
                         C[i][j]=C[i-1][j-1]+1;
                         }
                    else{
                         C[i][j]=max(C[i-1][j],C[i][j-1]);
                         }
                    }
            }
    return C[m][n];
    }    
int main(){
    int len,len1,len2;
    char ch1[20],ch2[20];
    fflush(stdin);
    gets(ch1);
    fflush(stdin);
    gets(ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    cout<<"\nU entered:"<<endl;
    puts(ch1);
    cout<<endl;
    puts(ch2);
    len=longestSub(ch1,len1,ch2,len2);
    cout<<"\nLength of the LCS:"<<len<<endl;
    system("pause");
    return 0;
    }
