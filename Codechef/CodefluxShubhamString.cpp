#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
set<string> s;
string str1,str2;
set<string>::iterator it;
string str;
long long int T;
cin>>T;
while(T--){
cin>>str1;
cin>>str2;
s.insert(str1);
s.insert(str2);
if(s.size()==1){
                cout<<"equal"<<endl;           
                }
else{
     it=s.begin();
     if(str1.compare(*it)==0){
                   cout<<"first"<<endl;
                   }
     else{
          cout<<"second"<<endl;
          }
     }
s.clear();
}

system("pause");
return 0;
}
