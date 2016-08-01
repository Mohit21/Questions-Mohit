#include<bits/stdc++.h>

using namespace std;
long long getsize(long long val){
    return (val<100?2:(val<1000?3:(val<10000?4:1)));
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count[26];
    for(int i=0;i<26;i++){
      count[i]=0;
    }

    for(int i=0;i<str.size();i++){
        if(str[i]>=65 && str[i]<=90){
            count[str[i]-'A']++;
        }
        else if(str[i]>=97 && str[i]<=122){
            count[str[i]-'a']++;
        }
    }
    int min=*(min_element(count,count+26));
    if(min==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
