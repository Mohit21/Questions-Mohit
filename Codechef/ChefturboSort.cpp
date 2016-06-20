#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main(){
long long t;
cin>>t;
vector<long long> V;
long long i,n;
vector<long long >::iterator it;
for(i=0;i<t;i++){
	cin>>n;
	V.push_back(n);
}
sort(V.begin(),V.end());
for(it=V.begin();it!=V.end();it++){
	cout<<*it<<endl;
}
 system("pause");
return 0;
} 
