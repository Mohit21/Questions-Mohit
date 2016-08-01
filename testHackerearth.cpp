#include <iostream>
using namespace std;

int main()
{
    int A,B,N,T;
    cin>>A;
    cin>>B;
    cin>>N;
    if(N==1){
             T=A;
             }
    else if(N==2){
         T=B;
         }
    else{
         T=0;
         for(int i=N-2;i>0;i--){
         	T=A+B;
    	    A=B;
    	    B=T;
       }
    }
  cout<<T<<endl;
    system("pause");
    return 0;
}
