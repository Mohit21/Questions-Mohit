#include<iostream>
//#include<string>
//#include<cstring>
#define size 255

using namespace std;

int main(){
    int count[size+1],B[size];
    string str;
    cin>>str;
    memset(count,0,sizeof(count));
    for(int i=0;str[i]!='\0';i++){
            count[str[i]]++;
            }
    for(int i=1;i<=size;i++){
            count[i]+=count[i-1];
            }
    for(int i=0;str[i]!='\0';i++){
            B[count[str[i]]-1]=str[i];
            --count[str[i]];
            }
    for(int i=0;str[i]!='\0';i++){
            str[i]=B[i];
            }
    cout<<endl<<"The sorted Array is:"<<str;
    system("pause");
    return 0;
    }
