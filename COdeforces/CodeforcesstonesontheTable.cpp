#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long N,i=0,count=0;
    	cin>>N;
    	string str;
    	cin>>str;
    	for(i=0;i<N-1;i++){
            if(str[i]==str[i+1]){
                count++;
            }
    	}
    	cout<<count;
    return 0;
}

