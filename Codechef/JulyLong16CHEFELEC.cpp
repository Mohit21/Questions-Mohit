#include<bits/stdc++.h>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    vector<char> str;
    str.clear();
    vector<char>::iterator it,it1,it2;
    vector<char> v;
    v.clear();
    vector<char>::iterator itv;
    map<long long,long long> mp;
    mp.clear();
    //map<long long,long long>::iterator itm;
    long long N;
    long long prev=-1;
    cin>>N;
    char ch;
    long long n,dist1=0,dist2=-1,total=0;
    for(long long i=0;i<N;i++){
        cin>>ch;
        str.push_back(ch);
    }
    for(long long i=0;i<N;i++){
        cin>>n;
        mp[i]=n;
    }
    long long k=0;
    for(it=str.begin();it!=str.end();it++){
        if(*it=='0'){
            it1=find(it,str.end(),'1');
            if(prev!=-1){
                    dist2=prev;
                    //dist2=(v.back());
            }
            if(it1!=str.end() && dist2!=-1){
                dist1=distance(it,it1);
                if((mp[k+dist1]-mp[k])<(mp[k]-mp[dist2])){
                        total=total+abs(mp[k+dist1]-mp[k]);
                        *it='1';
                        prev=k;
                        //v.push_back(k);
                }
                else if((mp[k+dist1]-mp[k])==(mp[k]-mp[dist2])){

                }
                else{
                    total=total+abs(mp[dist2]-mp[k]);
                    *it='1';
                    prev=k;
                    //v.push_back(k);
                }
            }
            else if(dist2==-1){
                dist1=distance(it,it1);
                total=total+abs(mp[k+dist1]-mp[k]);
                *it='1';
                prev=k;
                //v.push_back(k);
            }
            else{
                total=total+abs(mp[dist2]-mp[k]);
                *it='1';
                prev=k;
                //v.push_back(k);
            }
        }
        else{
            prev=k;
            //v.push_back(k);
        }
    k++;
    }
    cout<<total;
    cout<<endl;
}
return 0;
}


/*
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
    long long n,dist1=0,dist2=-1,prev,total=0,count1=0,j;
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
        long long dist=0;
        k=0;prev=-1;dist2=-1;dist1=0;j=0;
        for(it=str.begin();it!=str.end();it++){
            if(str[0]=='1'){
                prev=k;
                if(prev!=-1){
                    dist2=prev;
                }
                it1=find(it,str.end(),'1');
                if(it1!=str.end()){
                    dist=distance(str.begin(),it);
                    dist1=distance(it,it1);
                    long long a=0;
                    int flag=0;
                    for(long long j=dist+1;j<=dist1;j++){
                        if(mp[j]-mp[k]<mp[k]-mp[dist1]){
                            flag=1;
                            str[j]='1';
                        }
                        else{
                            if(a==0){
                                total=total+abs(mp[k]-mp[j-1]);
                                a++;
                            }
                            str[j]='1';
                            flag=0;
                            break;
                        }
                    }
                    if(flag==0){
                            total=total+abs(mp[j-1]-mp[dist1]);
                    }
                    else{
                        total=total+abs(mp[k]-mp[j-1]);
                    }
                    //prev=k;
                    advance(it,dist1+1);
                    k+=(dist1+1);
                }
                else{
                    if(*it=='1'){
                        prev=k;
                        total=total+abs(mp[N-1]-mp[prev]);
                    }
                    else{
                        prev=k;
                        total=total+abs(mp[N-1]-mp[prev-1]);
                    }
                }
                k++;
            }
            else if(str[0]=='0'){
                    prev=k;
                    if(prev!=-1){
                        dist2=k;
                    }
                    it1=find(it,str.end(),'1');
                    if(it!=str.end()){
                            dist=distance(str.begin,it);
                            dist1=distance(it,it1);
                            total=total+abs(mp[dist1]-mp[dist]);
                            advance(it,dist1+1);
                            k+=(dist+1);
                    }
                    else if(*it=='1'){

                    }


                    k++;
            }
            else{

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


*/
