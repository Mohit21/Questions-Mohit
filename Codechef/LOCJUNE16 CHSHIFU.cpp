#include<bits/stdc++.h>

using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    int N,M;
    int u1,v1;
	cin>>N>>M;
	int visit[N],visit1[N];
	vector<int> u,v;
	set<int> s;
	vector<int>::iterator it,it1,beg;
	u.clear();
	v.clear();
	memset(visit,0,sizeof(visit));
	memset(visit1,0,sizeof(visit1));
	for(int i=0;i<M;i++){
        cin>>u1>>v1;
        visit[u1-1]++;
        visit[v1-1]++;
        u.push_back(u1);
        v.push_back(v1);
	}
	int count=0,ans=0,max,flag=0,dist=0;
    max=(*max_element(visit,visit+(N-1)));
	for(int i=0;i<N;i++){
        if(visit[i]==max){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
	}
	if(flag==1){
                beg=u.begin();
                for(it=u.begin();it!=u.end();it++){
                    if(visit1[(*it)-1]==0){
                        visit1[(*it)-1]=1;
                        s.insert(*it);
                        dist=abs(distance(beg,it));
                        visit1[v[dist]-1]=1;
                    }
                }
        for(int i=0;i<N;i++){
                if(visit1[i]==0){
                        count++;
                }
        }
        cout<<((s.size())+count)<<endl;
	}
	else{
        cout<<1<<endl;
	}
}
return 0;
}


/*#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    	int N,M;
    	int u1,v1;
	cin>>N>>M;
	vector<int> u,v;
	u.clear();
	v.clear();
	vector<int>::iterator it,it1,beg;
	u.clear();
	v.clear();
	int visit[N];
	long long count=0,count1=0,dist=0;
	memset(visit,0,sizeof(visit));
	for(int i=0;i<M;i++){
        cin>>u1>>v1;
        u.push_back(u1);
        v.push_back(v1);
	}
	beg=u.begin();
	for(it=u.begin();it!=u.end();it++){
        if(visit[(*it)-1]==0){
            visit[(*it)-1]=1;
            count++;
            dist=abs(distance(beg,it));
            visit[v[dist]-1]=1;
        }
        while((it1=find(it+1,u.end(),*it))!=u.end()){
            dist=abs(distance(beg,it1));
            visit[v[dist]-1]=1;
            it=it1;
            if((it+1)==u.end()){
                break;
            }
        }
    }
    for(int i=0;i<N;i++){
                if(visit[i]==0){
                        count1++;
                }
        }
    cout<<(count+count1)<<endl;
}
return 0;
}

/*#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    	int N,M;
    	int u,v;
	cin>>N>>M;
	bool visit[N];
	list<int> adj[N];
	list<int>::iterator it;
	memset(visit,false,sizeof(visit));
	for(int i=0;i<M;i++){
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
	}
	int count=0,count1=0;
	for(int i=0;i<N;i++){
            int k=0;
        while(adj[i].size()>0 && k<1){
            it=adj[i].begin();
            if(visit[i]==false && visit[*it]==false){
                        visit[i]=true;
                        visit[*it]=true;
                          count++;
            }
            k++;
        }
        if(adj[i].size()==0){
            count1++;
        }
	}
	cout<<(count+count1)<<endl;
    for(int i=0;i<M;i++){
        adj[i].clear();
        }
}
return 0;
}

*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    	int N,M;
    	int u,v;
	cin>>N>>M;
	int visit[N];
	memset(visit,0,sizeof(visit));
	for(int i=0;i<M;i++){
        cin>>u>>v;
        visit[u-1]++;
        visit[v-1]++;
	}
	int count=0,ans=0,max,flag=0;
    max=(*max_element(visit,visit+(N-1)));
	for(int i=0;i<N;i++){
        if(visit[i]==max){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
	}
	if(flag==1){
            for(int i=0;i<N;i++){
                if(visit[i]==0){
                        count++;
                }
            }
            if(max>count){
                    cout<<N-(max-count)<<endl;
            }
            else{
                cout<<N-(count-max)<<endl;
            }

	}
	else{
        cout<<1<<endl;
	}
}
return 0;
}

*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    	int N,M,count=0;
    	int u,v;
	cin>>N>>M;
	bool visit[N];
	memset(visit,0,sizeof(visit));
	for(int i=0;i<M;i++){
        cin>>u>>v;
        if(visit[u-1]==0 && visit[v-1]==0 && i==0){
                visit[u-1]=1;
                visit[v-1]=1;
                ++count;
                }
        else if(visit[u-1]==0 && visit[v-1]==0){
                visit[v-1]=1;
                ++count;
                }
        else if((visit[u-1]==1 && visit[v-1]==0 ) || (visit[u-1]==0 && visit[v-1]==1)){
                continue;
                }
	}
	cout<<count;
	cout<<endl;
}
return 0;
}
*/
