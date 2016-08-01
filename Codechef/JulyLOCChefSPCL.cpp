#include<bits/stdc++.h>

using namespace std;


int main(){
int a=145,b=13974,k=5,count=0,count1=0;
for(int i=a;i<=b;i++){
        count=0;
        int flag=0;
    for(int j=2;j<sqrt(i);j++){
        if(i%j==0){
            count++;
        }
        if(count>2){
                flag=1;
            break;
        }
    }
    if(flag==0){
        count1++;
    }
    else{
            continue;
    }
}
cout<<count1;
return 0;
}
