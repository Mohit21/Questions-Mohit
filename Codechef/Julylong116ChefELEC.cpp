#include<bits/stdc++.h>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    vector<char> str;
    str.clear();
    vector<char>::iterator it,it1,it2;
    map<long long,long long> mp;
    mp.clear();
    long long N;
    char ch;
    long long n,dist1=0,dist2=-1,countd=0,prev,total=0,count1=0;
    cin>>N;
    for(long long i=0;i<N;i++){
        cin>>ch;
        str.push_back(ch);
    }
    for(long long i=0;i<N;i++){
        cin>>n;
        mp[i]=n;
        if(str[i]=='1'){
            count1++;
        }
    }
    if(count1==N){
            total=0;
        cout<<total;
    }
    else if(count1==1){
        if(str[0]=='1'||str[N-1]=='1'){
            total=total+abs(mp[0]-mp[N-1]);
        }
        else{
            prev=-1;
            for(long long i=0;i<N;i++){
                    if(str[i]=='1'){
                        prev=i;
                        break;
                    }
            }
            total=total+abs(mp[0]-mp[prev]);
            total=total+abs(mp[prev]-mp[N-1]);
        }
    cout<<total;
    }
    else{
        long long dist=0,l,k;
        int flag0=0,flag1=0;
        prev=-1;
        long long j;
        dist2=-1;dist1=0;
        if(str[0]=='1'){
                for(j=1;j<str.size();j++){
                    if(str[j]=='1'){
                        flag0=1;
                        break;
                    }
                }
                if(flag0==1 && (j-0)>1){
                        l=0;
                    for(long long k=1;k<=j-1;k++){
                        dist1=mp[k]-mp[0];
                        dist2=mp[j]-mp[k];
                        if(dist1<dist2){
                            prev=k;
                        }
                        else if(dist1>dist2 && l==0 && (j-0)>2){
                            total=total+abs(mp[prev]-mp[0]);
                            total=total+abs(mp[j]-mp[k]);
                            l++;
                        }
                        else if(j-0==2){
                             if(mp[1]-mp[0]<mp[2]-mp[1]){
                                total=0+abs(mp[0]-mp[1]);
                                }
                            else{
                                total=0+abs(mp[1]-mp[2]);
                            }
                        }
                    }
                }
                else if(j-0==1 && str.size()==3){
                    total=0;
                    total=0+abs(mp[j]-mp[N-1]);
                    j=2;
                }
            }
        else if(str[0]=='0'){
                    prev=-1;
                for(long long j=0;j<str.size();j++){
                    if(str[j]=='1'){
                        prev=j;
                        flag1=1;
                        break;
                    }
                }
                if(flag1==1){
                    total=total+abs(mp[0]-mp[prev]);
                }
            }
        if(j!=N-1){
                for(long long i=j;i<str.size();i++){
                    l=0;
                for(j=i+1;j<str.size();j++){
                        if(str[j]=='1'){
                            flag0=1;
                            break;
                        }
                    }
                    if(flag0==1){
                            l=0;
                        for(long long k=i+1;k<=j-1;k++){
                            dist1=mp[k]-mp[i];
                            dist2=mp[j]-mp[k];
                            if(dist1<dist2){
                                prev=k;
                            }
                            else if(dist1>dist2&&l==0){
                                total=total+abs(mp[prev]-mp[i]);
                                total=total+abs(mp[j]-mp[k]);
                                l++;
                            }
                        }
                    i=j;
                    }
                    else{
                        total=total+abs(mp[j]-mp[N-1]);
                        i=N-1;
                    }
            }

        }
       cout<<total;
    }
    cout<<endl;
}
return 0;
}


/* long long k=0,k1=N-1;
    if(str[k]=='1'&& str[k1]!='1'){
        it=str.begin();
        it1=find(it,str.end(),'1');
        if(it1!=str.end()){

        }
        else if(it1==str.end()){               //if only 1 is there!
            prev=-1;
            dist2=-1;
            k=0;
            for(it=str.begin();it!=str.end();it++){
                if(*it=='0'){
                    if(prev!=-1){
                            dist2=prev;
                    }
                    if(dist2!=-1){
                            total=total+abs(mp[dist2]-mp[k]);
                            *it='1';
                            prev=k;
                    }
                }
                else{
                    prev=k;
                }
            k++;
            }
            cout<<total;
        }
    }*/
