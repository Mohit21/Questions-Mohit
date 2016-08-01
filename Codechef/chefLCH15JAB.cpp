#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
            string str;
            cin>>str;
            int count[26];
            memset(count,0,sizeof(count));
            int i=0;
            while(str[i]!='\0'){
                count[str[i]-'a']++;
                i++;
            }
            sort(count,count+26);
            long long sum;
            int flag=0;
            for(int i=25;i>=0;i--){
                    sum=0;
                for(int j=0;j<26;j++){
                        if(i==j){
                            continue;
                        }
                        else{
                            sum+=count[j];
                        }
                }
            if(sum==count[i]){
                flag=1;
                break;
            }
            }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        }
    return 0;
    }
