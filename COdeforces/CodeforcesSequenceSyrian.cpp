#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    	long long T;
    	cin>>T;
    	while(T--){
            long long N;
            cin>>N;
            vector<long long> v;
            v.clear();
            vector<long long>::iterator it,it1,it2;
            long long n,dist=0;
            for(long long i=0;i<N;i++){
                cin>>n;
                v.push_back(n);
            }
            it=v.begin();
            it1=v.begin();
            while(it1!=v.end()){
                it1=it+1;
                if(it1!=v.end() && (*it1-*it)!=1){
                    dist=distance(v.begin(),it1);
                    v.erase(v.begin()+dist);
                }
                else{
                    ++it;
                }
            }
        cout<<v.size();
    	cout<<endl;
    	}
    return 0;
}

