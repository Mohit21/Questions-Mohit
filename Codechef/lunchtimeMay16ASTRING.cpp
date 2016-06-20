#include<iostream>
#include<set>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstring>
#include<vector>

using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
               string str;
               long long int K;
               cin>>str;
               cin>>K;
               long long int size1=str.size();
               vector<int> v;
               vector<int>::iterator it,it1;
               if(K<=size1){
                    for(long long int i=0;str[i]!='\0';i++){
                            v.push_back(str[i]-'a');
                            }
                    it=v.begin();
                    int j=0;
                    while(K>0){
                               if(j==0){
                               it=min_element(v.begin(),v.end());
                               it1=it;
                               j++;
                               }
                               else{
                                    it=min_element(it1,v.end());
                                    it1=it;
                                    }
                               it1++;
                               cout<<char((*it)+'a');
                               K--;
                               }     
                    }
               v.clear();
               cout<<endl;
            }
    system("pause");
    return 0;
}
 
