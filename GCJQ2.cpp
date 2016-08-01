#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

void flip(char Str[], int beg,int end){
    int temp,start=0,i;
    for(i=beg;i<end;i++){
            if(Str[i]== '+' ){
                           Str[i]= '-';
                           }
            else if(Str[i] == '-'){
                 Str[i]= '+';
                 }
           }
    i=end-1;
    while (start < i)
    {
        temp = Str[start];
        Str[start] = Str[i];
        Str[i] = temp;
        start++;
        i--;
    }
}
 
int main(){
    int T,T1=0;
    string S;
    int count,size=0,ans,countn1,countn2,size1;
    cin>>T;
    while(T--){
               cin>>S;
               size=S.size();
               size1=size;
               string S1,S2;
               char str[size];
               for(int i=0;i<size;i++){
                       str[i]=S[i];
                       }
               count=0;
               for(int i=0;i<size;i++){
                       S1.append("+");
                       S2.append("-");
                       }
              if(S.compare(S1)==0){
                                    ans=0;
                                    }
              else if(S.compare(S2)==0){
                    ans=1;
                    }
              else{
                   int flag=0,beg,flag1=0,flag2=0,i;
                    while(1){
                             if(str[size1-1]== '-'){
                                         if(str[0]== '-' && str[size1-1]== '-'){
                                                      flip(str,0,size1);
                                                      count++;   
                                                     }
                                         else if(str[0]== '+' && size1==2){
                                              str[0]= '-';
                                              count++;
                                            }
                                         else{
                                              beg=size1-1;
                                              for(i=size1-1;i>=0;i--){
                                                                      if(str[i]== '-'){
                                                                                  flag2=0;
                                                                      }
                                                                      else{
                                                                           flag2=1;
                                                                            break;
                                                                      }
                                                   }
                                          if(flag2==1 && str[i]=='+' && i!=0){
                                                             flip(str,0,i+1);
                                                             count++;
                                                             }
                                         else if(flag2==1 && str[0]== '+' && i==0){         
                                                                      str[0]='-';
                                                                      count++;
                                                                      }
                                           
                                         }
                             }
                             else if(str[size1-1]== '+'){
                                  if(size1==1 && str[0]=='-'){
                                              str[0]='+';
                                              count++;
                                              }
                                  else{
                                       size1-=1;
                                       }
                                  }
                             for(int i=0;i<size;i++){
                                     if(S1[i]==str[i]){
                                                       flag=0;
                                             }
                                     else{
                                          flag=1;
                                          break;
                                             }
                                     }     
                             if(flag==0){                                 
                                         break;
                                         }
                             }
                   ans=count;
                   }                          
    cout<<"Case #"<<++T1<<": "<<ans<<endl;
    }          
return 0;
}


/*#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

void flip(char Str[], int beg,int end,int size){
    int temp,start=0,i;
    if(size==2){
         if(Str[beg]== '+'){
                       Str[beg]= '-';
                       }
         else if(Str[beg]== '-'){
                       Str[beg]= '+';
                       }
         }
    else{
    for(i=beg;i<end;i++){
            if(Str[i]== '+' ){
                           Str[i]= '-';
                           }
            else if(Str[i] == '-'){
                 Str[i]= '+';
                 }
           }
    }
    i=end-1;
    while (start < i)
    {
        temp = Str[start];
        Str[start] = Str[i];
        Str[i] = temp;
        start++;
        i--;
    }
}
 

int main(){
    int T,T1=0;
    string S;
    int count,size=0,ans,countn1,countn2,mid;
    cin>>T;
    while(T--){
               cin>>S;
               size=S.size();
               string S1,S2;
               char str[size];
               for(int i=0;i<size;i++){
                       str[i]=S[i];
                       }
               count=0;
               for(int i=0;i<size;i++){
                       S1.append("+");
                       S2.append("-");
                       }
              if(S.compare(S1)==0){
                                    ans=0;
                                    }
              else if(S.compare(S2)==0){
                    ans=1;
                    }
              else{   
                       int flag=0,beg,flag1=0,flag2=0,i;
                    while(1){
                             //mid=size/2;
                             if(str[size-1]== '-'){
                                         if(str[0]== '-'){
                                                      flip(str,0,size,size);                                                                          
                                                      count++;   
                                                     }
                                         else {
                                              str[0]= '-';
                                              count++;
                                              }
                                         }
                             else if(str[size-1]== '+'){
                                  beg=size-2;
                                  for(i=size-2;i>=0;i--){
                                          if(str[i]== '-'){
                                                      flag2=0;
                                                      }
                                          else{
                                               flag2=1;
                                               break;
                                               }
                                          }
                                  if(flag2==0){
                                               flip(str,0,beg,size);
                                               count++;
                                               }
                                  else if(flag2==1 && str[0]== '+' && i==0){
                                       str[0]='-';
                                       count++;
                                       }
                                  else if(flag2==1 && str[i]=='+' && i!=0){
                                       flip(str,0,i-1,size);
                                       count++;
                                       }
                                  }          
                             for(int i=0;i<size;i++){
                                     if(S1[i]==str[i]){
                                                       flag=0;
                                             }
                                     else{
                                          flag=1;
                                          break;
                                             }
                                     }         
                             if(flag==0){                                 
                                         break;
                                         }
                   }
                   ans=count;
               }    
               cout<<"Case #"<<++T1<<": "<<ans<<endl;
    }
    system("pause");
    return 0;
    }
*/
