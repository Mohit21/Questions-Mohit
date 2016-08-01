#include<bits/stdc++.h>
#define inf 1000000007ULL
using namespace std;

int main(){
    long long n;
    cin>>n;
    string str;
    cin>>str;
    long long A[n];
    for(long long i=0;i<n;i++){
        cin>>A[i];
    }
    bool flag1=true;
    for(int i=1;i<n;i++){
        if(str[i-1]=='R' && str[i]=='L'){
            flag1=false;
        }
    }
    if(flag1==true){
       cout<<-1;
       return 0;
    }
    else{
        long long count,ans=inf;
        int flag=0;
        for(long long i=1;i<n;i++){
                flag=0;
                count=0;
                if(str[i-1]=='R' && str[i]=='L'){
                        ans=min(ans,(A[i]-A[i-1])>>1);
                        //flag=1;
                        }
            }
            cout<<ans;
    }

    return 0;
}

/*#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    string str;
    cin>>str;
    string str1="",str2="";
    long long A[n];
    for(long long i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        str1=str1+'L';
        str2=str2+'R';
    }
    if(str.compare(str1)==0){
        cout<<-1;
    }
    else if(str.compare(str2)==0){
            cout<<-1;
    }
    else{
           // cout<<"hello";
            long long count=0,dist=0,dist1=0;
            int flag=0;
            string::iterator it,it1;
            for(it=str.begin();it!=str.end();it++){
                    flag=0;count=-1;
                if(*it=='R'){
                        it1=find(it,str.end(),'L');
                        if(it1!=str.end()){
                            dist=distance(it,str.begin());
                            dist1=distance(it,it1);
                            for(long long j=A[dist1],k=A[dist];j>=A[dist],k<=A[dist1];j--,k++){
                                        ++count;
                                        if(j==k){
                                                flag=1;
                                                break;
                                            }
                                        }
                        }
                        else{
                            flag=1;
                            count=-2;
                            break;
                        }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==1 && count!=-2){
                cout<<count;
            }
            else{
                cout<<-1;
            }
    }
    return 0;
}
*/
