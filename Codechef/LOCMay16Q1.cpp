#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
               long long n,count=0;
               cin>>n;
               for(int i=n;i>0;i--){
                       if(n>=1&&n<3){
                                     n-=1;
                                  count++;   
                                     }
                       else if(n>=3&&n<5){
                            n-=3;
                            count++;
                            }
                       else if(n>=5){
                            n-=5;
                            count++;
                            }
                       }      
                if(count%2==0){
                               cout<<"JACK";
                               }
                else{
                     cout<<"JENNY";
                     }
            cout<<endl;
            }
    system("pause");
    return 0;
}
 
