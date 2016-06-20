#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool find4(string str,int id){
     bool flag=false;
             string str1("U");
             /*if(strstr(str.c_str(),str1.c_str())){
                               flag=true;
                               }
             */
             flag=contains(str,str1);
             if(flag)
                     return true;
             else
                 return false;
     }

bool find5(string str,int id){
     bool flag=false;
             string str1("IVE");
             /*if(strstr(str.c_str(),str1.c_str())){
                               flag=true;
                               }
             */
             flag=contains(str,str1);
             if(flag)
                     return true;
             else
                 return false;
     }

bool find7(string str,int id){
     bool flag,flag1;
             string str1("VEN"),str2("EVE");
             flag=contains(str,str1);
             flag1=contains(str,str2);
             
             /*if(strstr(str.c_str(),str1.c_str())){
                               flag=true;
                               }
             if(strstr(str.c_str(),str2.c_str())){
                               flag1=true;
                               }
             */if(flag || flag1) 
                     return true;
             else
                 return false;
     }

bool find1(string str,int id){
     bool flag,flag1;
             string str1("NE"),str2("ONE");
             flag=contains(str,str1);
             flag1=contains(str,str2);
             /*if(str.find(str2) != string::npos){
                               flag1=true;
                               }
             */
             if(flag || flag1) 
                     return true;
             else
                 return false;
     }


bool find3(string str,int id){
     bool flag,flag1;
             string str1("THRE"),str2("HREE");
             flag=contains(str,str1);
             flag1=contains(str,str2);
             
             /*if(strstr(str.c_str(),str1.c_str())){
                               flag=true;
                               }
             if(strstr(str.c_str(),str2.c_str())){
                               flag1=true;
                               }
             */
             if(flag || flag1) 
                     return true;
             else
                 return false;
     }


bool find9(string str,int id){
     bool flag,flag1;
             string str1("NIN"),str2("INE");
             flag=contains(str,str1);
             flag1=contains(str,str2);
             
             /*if(strstr(str.c_str(),str1.c_str())){
                               flag=true;
                               }
             if(strstr(str.c_str(),str2.c_str())){
                               flag1=true;
                               }
             */
             if(flag || flag1) 
                     return true;
             else
                 return false;
     }
     
int main(){
    int T,T1=0;
    string str;
    vector<int> v;
    vector<int>::iterator it;
    //int visited[10],count,flag=0;
    cin>>T;
    while(T--){
               
               cin>>str;
               int size=str.size();
               for(int i=0;str[i]!='\0';i++){
                       if(str[i]=='Z'){
                                       cout<<"Hello";
                             v.push_back(0);          
                            }
                       else if(str[i]=='W'){
                            v.push_back(2);
                            }
                       else if(str[i]=='X'){
                            v.push_back(6);
                            }
                       else if(str[i]=='G'){
                            v.push_back(8);
                            }
                       }
               for(int i=0;str[i]!='\0';i++){
                       if(str[i]=='F'){
                            if(find4(str,i)){
                                          v.push_back(4);
                                          }
                            if(find5(str,i)){
                                             v.push_back(5);
                                             }
                            }
                       else if(str[i]=='S'){
                                         it=find(v.begin(),v.end(),6);
                                          if(it!=v.end()){
                                                          find7(str,i);
                                                          } 
                                          else{
                                               v.push_back(7);
                                               }   
                            }
                       else if(str[i]=='H'){
                                          it=find(v.begin(),v.end(),8);
                                          if(it!=v.end()){
                                                          find3(str,i);
                                                          } 
                                          else{
                                               v.push_back(3);
                                               }
                            }
                       else if(str[i]=='O'){
                                            it=find(v.begin(),v.end(),0);
                                            if(it!=v.end()){
                                                            find1(str,i);             
                                                            }
                                            else{
                                                 v.push_back(1);
                                                 }
                                            
                            }
                       else if(str[i]=='N'){
                                            if(find9(str,i)){
                                                                v.push_back(9);
                                                                }
                            }
                       }
                     sort(v.begin(),v.end());
                    cout<<"Case #"<<++T1<<": ";
                    for(it=v.begin();it!=v.end();it++){
                                                       cout<<*it;
                                                       }
                    cout<<endl; 
                    v.clear();  
               }    
    system("pause");
    return 0;
    }
