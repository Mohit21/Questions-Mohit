#include<bits/stdc++.h>

using namespace std;

int main(){
string str;
long long N;
cin>>N;
cin>>str;
long long count[26];
for(int i=0;i<26;i++){
    count[i]=0;
}
if(N>26){
    cout<<"-1";
    return 0;
}
for(long long i=0;i<N;i++){
        count[str[i]-'a']++;
}
long long sum=0;
for(int i=0;i<26;i++){
    if(count[i]>1){
        sum+=count[i]-1;
    }
}
cout<<sum;
return 0;
}
