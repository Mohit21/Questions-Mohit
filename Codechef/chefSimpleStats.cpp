#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
int T;
cin>>T;
int N,K;
while(T--){
cin>>N>>K;
long long m;
vector<long long> V;
vector<long long>::iterator it,it1;
for(int i=0;i<N;i++){
	cin>>m;
	V.push_back(m);
}
sort(V.begin(),V.end());
it=V.begin();
it1=V.end();
it+=K;
it1-=K;
float avg=0;
for(;it!=it1;it++){
	avg+=*it;
}
K*=2;
N-=K;
cout<<fixed<<setprecision(6)<<avg/N<<endl;
}
system("pause");
return 0;
}
