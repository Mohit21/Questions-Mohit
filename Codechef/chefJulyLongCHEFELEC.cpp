#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long T;
    	cin>>T;
    	while(T--){
                long long n,i,x,cor=0;
                cin>>n;
                string str;
                cin>>str;
                vector<long long> v;
                vector<long long>::iterator it;
                for(i=0;i<n;i++){
                        cin>>x;
                        v.push_back(x);
                }
                i=0;
                long long dist=0,cor1,min=0;
                while(str[i]!='\0'){
                    if(str[i]=='1'){
                            it=(v.begin()+i);
                            cor=*it;
                    }
                    else if(str[i]=='0'){
                        it=(v.begin()+i);
                        cor1=*it;
                    }
                    dist=abs(cor-cor1);
                        if(min<dist){
                            min=dist;
                        }
                    i++;
                }
    cout<<min;
    cout<<endl;
    }
    return 0;
}

