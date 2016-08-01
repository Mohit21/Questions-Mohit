#include<iostream>
#include<string.h>

using namespace std;
/*  
int numChar(int A1[], int m){
    int count=0,flag=-1;
    for(int i=0;i<m-1;i++){
            if(A1[i+1]>A1[i]){
                           flag=-1;
                           count++; 
                            }
            else{
                 flag=0;
                 break;
                 }
            }
    return count;
}
*/
int main()
{
    int T;
    cin>>T;
    while(T--){
               fflush(stdin);
               string str;
               cin>>str;
               int count=0,flag=0;
               int size=str.size();
               for(int i=0;i<size-1;i++){
                       if(str[i+1]>str[i]){
                                          count++; 
                                          }
                       
               }
               cout<<count<<endl;
               }
    system("pause");
    return 0;
}
