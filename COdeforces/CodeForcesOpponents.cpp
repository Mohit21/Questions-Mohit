#include<bits/stdc++.h>
#define inf 1000000007ULL
using namespace std;

int main(){
    long long n,d;
    cin>>n>>d;
    bool visit[d];
    for(long long i=0;i<d;i++){
        visit[i]=false;
    }
    long long count=0,k=0,ans=0;
    for(long long i=0;i<d;i++){
        string str;
        int flag=0;
        cin>>str;
        for(long long j=0;j<str.size();j++){
            if(str[j]=='0'){
                visit[i]=true;
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if(flag==1  && d>1 && visit[i]==true){
                count++;
        }
        else if(d==1 && flag==1 && visit[i]==true){
            count=1;
        }
        else{
            count=0;
        }
       ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}

