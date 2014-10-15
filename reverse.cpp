#include<iostream>
#include<string>
using namespace std;
int main(){
char *str = " programming j k klc dfd df";
int len = strlen(str);
int i,j,k;

for(i=len-1;i>=0;i--){
j=i;
while(str[i]!=' ' && i>=0){
i--;
}
k=i;
while(k<=j){
k++;
coutt<<str[k];
}

}
system("pause");
return 0;
}
