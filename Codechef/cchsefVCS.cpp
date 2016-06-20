#include<iostream>
#include<set>

using namespace std;

int main(){
int T,N,M,K;
cin>>T;
while(T--){
	set<int> s;
	int size;
	cin>>N;
	cin>>M;
	cin>>K;
	int n; 
	for(int i=0;i<M;i++){
		cin>>n;
		s.insert(n);
	}
	int size1=s.size(),count=0;
	for(int i=0;i<K;i++){
		cin>>n;
		s.insert(n);
		if(size1!=s.size())
		                  size1=s.size();
        else
            count++;
	}	
	cout<<count<<" ";
	cout<<N-s.size();
	s.clear();
    cout<<endl;
}
system("pause");
return 0;
}
