#include<bits/stdc++.h>

using namespace std;

int main(){
           vector<long long> v;
           v.clear();
           vector<long long>::iterator it;
           string str;
           int n;
           cin>>str;
           int i=0;
           if(str.size()>1){
                for(i=0;i<str.size();i++){
                        if(str[i]=='+'){
                            continue;
                        }
                        else{
                         v.push_back(str[i]-48);
                        }
                   }
                   sort(v.begin(),v.end());
                   for(it=v.begin();it!=v.end();it++){
                        cout<<*it;
                        if(it+1!=v.end()){
                                cout<<"+";
                                }
                   }

           }
           else if(str.size()==1){
            cout<<str[0];
           }
    return 0;
}
