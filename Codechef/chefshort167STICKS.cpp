/*#include<bits/stdc++.h>

using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    	long long N,n;
    	cin>>N;
    	vector<int> v,v1;
    	vector<int>::iterator it,it1,it2;
    	for(int i=0;i<N;i++){
            cin>>n;
            v.push_back(n);
    	}
    	int flag=0;
    	sort(v.rbegin(),v.rend());
    	for(it=v.begin();it!=v.end();it++){
            it2=it;
            ++it2;
            it1=find(it2,v.end(),*it);
            if(it1!=v.end()){
                v1.push_back(*it);
            }
            if(v1.size()==2){
                    flag=1;
                break;
            }
    	}
    	if(flag==1){
            long long mul=1;
            for(it=v1.begin();it!=v1.end();it++){
                mul*=(*it);
            }
            cout<<mul;
    	}
    	else{
            cout<<-1;
    	}
        cout<<endl;
        v.clear();
        v1.clear();
}
return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    	long long N,n,s1,s2;
    	cin>>N;
    	int count[1005];
    	memset(count,0,sizeof(count));
    	for(int i=0;i<N;i++){
            cin>>n;
            count[n]++;
    	}
    	int flag=0;
    	for(long long i=0;i<1005;i++){
            if(count[i]>=2){
                s1=i;
            }
    	}
    	count[s1]-=2;
    	for(long long i=0;i<1005;i++){
            if(count[i]>=2){
                s2=i;
                flag=1;
            }
    	}
    	if(flag==0){
            cout<<-1;
    	}
    	else if(flag==1){
                    cout<<s1*s2;
    	}
    	cout<<endl;
}
return 0;
}
