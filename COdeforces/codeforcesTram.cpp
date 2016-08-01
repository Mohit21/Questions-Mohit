#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long N,Ex,En,i=0,count=0,max;
    	cin>>N;
    	while(N--){
                cin>>Ex>>En;
                if(i=0){
                    count=En-Ex;
                    max=count;
                    i++;
                }
                else{
                    count-=Ex;
                    count+=En;
                    if(max<=count){
                        max=count;
                    }
                }
    	}
    cout<<max;
    return 0;
}

