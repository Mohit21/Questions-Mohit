#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin>>n;
string str;
cin>>str;
long long count[52];
bool visit[52];
for(int i=0;i<52;i++){
    count[i]=0;
    visit[i]=false;
}

long long countdis=0;
for(long long i=0;i<str.size();i++){
    if(str[i]>=65 && str[i]<=90){
        ++count[str[i]-'A'];
        if(visit[str[i]-'A']==false){
            visit[str[i]-'A']=true;
            countdis++;
        }
    }
    else if(str[i]>=97 && str[i]<=122){
        ++count[(str[i]-'a')+26];
        if(visit[(str[i]-'a')+26]==false){
            visit[(str[i]-'a')+26]=true;
            countdis++;
        }
    }
}
long long k=0,star1=0,end1=0;
cout<<countdis<<endl;
for(long long i=0;i<str.size();i++){
    if(str[i]>='A' && str[i]<='Z'){
         if(count[str[i]-'A']==1 && countdis>0){
            if(k==0){
                    star1=i;
                    k++;
                }
                else{
                    end1=i;
                }
                --countdis;
        }
        else if(count[str[i]-'A']>1 && countdis>0){
            --count[str[i]-'A'];
        }
        else{
            break;
        }
    }
    else if(str[i]>='a' && str[i]<='z'){
        if(count[(str[i]-'a')+26]==1 && countdis>0){
            if(k==0){
                    star1=i;
                    k++;
                }
                else{
                    end1=i;
                }
                --countdis;
        }
        else if(count[(str[i]-'a')+26]>1 && countdis>0){
            --count[(str[i]-'a')+26];
        }
        else{
            break;
        }
    }
}

cout<<star1<<" "<<end1<<endl;
for(int i=0;i<52;i++){
    visit[i]=false;
}
for(long long i=0;i<str.size();i++){
    if(str[i]>=65 && str[i]<=90){
        if(visit[str[i]-'A']==false){
            visit[str[i]-'A']=true;
            countdis--;
        }
    }
    else if(str[i]>=97 && str[i]<=122){
        ++count[(str[i]-'a')+26];
        if(visit[(str[i]-'a')+26]==false){
            visit[(str[i]-'a')+26]=true;
            countdis--;
        }
    }
    if(countdis==0){
        k=i;
    }
}
int last=false;
if(k==n-1){
    last=true;
}

if(last){
        cout<<(end1-star1)+1;
}
else{
    cout<<(end1-star1);
}

return 0;
}
