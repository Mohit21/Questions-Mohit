#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main(){
int T,N;
cin>>T;
while(T--){
	cin>>N;
	int n;
	vector<int> v;
	vector<int>::iterator it;
	set<int> s;
	set<int>::iterator it1;
	
	for(int i=0;i<N;i++){
		cin>>n;
		n*=3;
		v.push_back(n);
	}
	it=v.begin();
	for(int i=0;i<N;i++){
		cin>>n;
		*it+=n;
		s.insert(*it);
		it++;
	}
	it1=s.end();
	--it1;
	cout<<<<*it1<<endl;
s.clear();
}
system("pause");
return 0;
}
