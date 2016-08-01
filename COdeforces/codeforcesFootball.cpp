#include<bits/stdc++.h>

using namespace std;

int main(){
           string str;
           cin>>str;
           int i=0,count=0,ans=0;
           for(i=1;i<str.size();i++){
                if(str[i]==str[i-1]){
                    count++;
                }
                else{
                    count=0;
                }
                if(count>=6){
                    ans=1;
                    break;
                }
           }
           if(ans==1){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
    return 0;
}

/*#include<bits/stdc++.h>
#define num 786433
using namespace std;

int main(){
           string str;
           cin>>str;
           int i=0,count0=0,count1=0,ans0=0,ans1=0;
           while(str[i]!='\0'){
                if(str[i]==str[i-1]){
                    count++;
                }
                else{
                    count=0;
                }
                if(count>=6){

                }
                if(str[(str.
                        size())-1]=='1'){
                    count1++;
                }
                else if(str[(str.size())-1]=='0'){
                    count0++;
                }
                else if(str[i]=='1' && str[i+1]=='1' ){
                    count1++;
                }
                else if(str[i]=='0' && str[i+1]=='0'){
                    count0++;
                }
                else if(str[i]=='0' && str[i+1]=='1'){
                    ++count0;
                    if(count0>=7){
                        ans0=count0;
                    }
                    count0=0;
                }
                else if(str[i]=='1' && str[i+1]=='0'){
                    ++count1;
                    if(count1>=7){
                        ans1=count1;
                    }
                    count1=0;
                }
                i++;
           }
           if(count0>=7 || ans0>=7){
                cout<<"YES"<<endl;
           }
           else if(count1>=7 || ans1>=7){
                cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
    return 0;
}

*/
