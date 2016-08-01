#include<bits/stdc++.h>
#define num 1000000007
using namespace std;

long long fib(long long low, long long high){
	long long f1 = 0, f2 = 1, f3 = 0;
	long long result = 0;
	while (f3 <= high){
		if (f3 >= low){
        cout<<f3<<" ";
         //result=((result%num)+(f3%num))%num;
		}
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
cout<<endl;
	return result;
}

int main(){
    long long T;
    cin>>T;
    while(T--){
        long long l,r;
        cin>>l>>r;
        cout<<fib(l,r);
        cout<<endl;
    }
    return 0;
}

