#include<bits/stdc++.h>

using namespace std;

int main(){
string str;
cin>>str;
int mid=0;
int size1=str.size();

if(size1%2==1){
        if(size1==1){
             bool flag=false;
             if((str[0]=='b') ||(str[0]=='l')|| (str[0]=='H')||(str[0]=='d') || (str[0]=='i') || (str[0]=='o') || (str[0]=='p' ) || (str[0]=='q') || (str[0]=='v')||(str[0]=='w')||(str[0]=='x')){
                    flag=true;
                }
            else if((str[0]=='A') || (str[0]=='I') ||(str[0]=='M') || (str[0]=='O') || (str[0]=='T') ||(str[0]=='U') ||(str[0]=='V') ||(str[0]=='W') ||(str[0]=='X') ||(str[0]=='Y')){
                        flag=true;
                }
            else{
                    flag=false;
                }
            if(flag==true){
                cout<<"TAK";
            }
            else{
                cout<<"NIE";
            }
        }
        else{
            mid=size1/2;
            bool flag=false,flag1=false;
            if((str[mid]=='A')||(str[mid]=='H')||(str[mid]=='I') || (str[mid]=='M') ||(str[mid]=='O')|| (str[mid]=='T') || (str[mid]=='V')|| (str[mid]=='W') || (str[mid]=='X') || (str[mid]=='Y')){
                flag=true;
            }
            else if((str[mid]=='i')||(str[mid]=='o')||(str[mid]=='v')||(str[mid]=='w')||(str[mid]=='x')){
                flag=true;
            }
            else{
                flag=false;
            }
            if(flag==true){
                    bool flag=false,flag1=false;
                    for(int i=0;i<mid;i++){
                        if((str[i]=='b' &&str[size1-i-1]=='d') || (str[i]=='d' &&str[size1-i-1]=='b') || (str[i]=='i' &&str[size1-i-1]=='i') || (str[i]=='o' &&str[size1-i-1]=='o') || (str[i]=='p' &&str[size1-i-1]=='q') || (str[i]=='q' &&str[size1-i-1]=='p') || (str[i]=='v' &&str[size1-i-1]=='v')||(str[i]=='w' &&str[size1-i-1]=='w')||(str[i]=='x' &&str[size1-i-1]=='x')||(str[i]=='l' &&str[size1-i-1]=='l')){
                            flag=true;
                        }
                        else if((str[i]=='A' &&str[size1-i-1]=='A') || (str[i]=='I' &&str[size1-i-1]=='I')|| (str[i]=='H' && str[size1-i-1]=='H') ||(str[i]=='M' &&str[size1-i-1]=='M') || (str[i]=='O' &&str[size1-i-1]=='O') || (str[i]=='T' &&str[size1-i-1]=='T') ||(str[i]=='U' &&str[size1-i-1]=='U') ||(str[i]=='V' &&str[size1-i-1]=='V')|| (str[i]=='W' &&str[size1-i-1]=='W') ||(str[i]=='X' &&str[size1-i-1]=='X')|| (str[i]=='Y' &&str[size1-i-1]=='Y')){
                                flag=true;
                        }
                        else{
                            flag=false;
                            break;
                        }
                    }
                    if(flag==true){
                        cout<<"TAK";
                    }
                    else{
                        cout<<"NIE";
                    }
                }
                else{
                   cout<<"NIE";
                }
        }
}
else{
    int mid=size1/2;
    bool flag=false,flag1=false;
    if(size1==2){
            if((str[0]=='b' &&str[1]=='d') ||(str[0]=='l' &&str[1]=='l')|| (str[0]=='d' &&str[1]=='b') || (str[0]=='i' &&str[1]=='i') || (str[0]=='o' &&str[1]=='o') || (str[0]=='p' &&str[1]=='q') || (str[0]=='q' &&str[1]=='p') || (str[0]=='v' &&str[1]=='v')||(str[0]=='w' &&str[1]=='w')||(str[0]=='x' &&str[1]=='x')){
                    flag=true;
                }
            else if((str[0]=='A' &&str[1]=='A') || (str[0]=='I' &&str[1]=='I') ||(str[0]=='H' && str[1]=='H')||(str[0]=='M' &&str[1]=='M') || (str[0]=='O' &&str[1]=='O') || (str[0]=='T' &&str[1]=='T') ||(str[0]=='U' &&str[1]=='U') ||(str[0]=='V' &&str[1]=='V') ||(str[0]=='W' &&str[1]=='W') ||(str[0]=='X' &&str[1]=='X') ||(str[0]=='Y' &&str[1]=='Y')){
                        flag=true;
                }
            else{
                    flag=false;
                }
            if(flag==true){
                cout<<"TAK";
            }
            else{
                cout<<"NIE";
            }
    }
    else{
        if((str[mid]=='b' &&str[mid-1]=='d') ||(str[mid]=='l' &&str[mid-1]=='l')|| (str[mid]=='d' &&str[mid-1]=='b') || (str[mid]=='i' &&str[mid-1]=='i') || (str[mid]=='o' &&str[mid-1]=='o') || (str[mid]=='p' &&str[mid-1]=='q') || (str[mid]=='q' &&str[mid-1]=='p') || (str[mid]=='v' &&str[mid-1]=='v')||(str[mid]=='w' &&str[mid-1]=='w')||(str[mid]=='x' &&str[mid-1]=='x')){
                    flag=true;
                }
        else if((str[mid]=='A' &&str[mid-1]=='A') ||(str[mid]=='H' && str[mid-1]=='H') ||(str[mid]=='I' &&str[mid-1]=='I') ||(str[mid]=='M' &&str[mid-1]=='M') || (str[mid]=='O' &&str[mid-1]=='O') || (str[mid]=='T' &&str[mid-1]=='T') ||(str[mid]=='U' &&str[mid-1]=='U')|| (str[mid]=='V' &&str[mid-1]=='V')|| (str[mid]=='W' &&str[mid-1]=='W')|| (str[mid]=='X' &&str[mid-1]=='X') ||(str[mid]=='Y' &&str[mid-1]=='Y')){
                        flag=true;
                }
        else{
                    flag=false;
            }
        if(flag==true){
            flag=false;
            for(int i=0;i<mid-1;i++){
                if((str[i]=='b' &&str[size1-i-1]=='d') ||(str[i]=='l' &&str[size1-i-1]=='l')|| (str[i]=='d' &&str[size1-i-1]=='b') || (str[i]=='i' &&str[size1-i-1]=='i') || (str[i]=='o' &&str[size1-i-1]=='o') || (str[i]=='p' &&str[size1-i-1]=='q') || (str[i]=='q' &&str[size1-i-1]=='p') || (str[i]=='v' &&str[size1-i-1]=='v')||(str[i]=='w' &&str[size1-i-1]=='w')||(str[i]=='x' &&str[size1-i-1]=='x')){
                        flag=true;
                    }
                else if((str[i]=='A' &&str[size1-i-1]=='A') || (str[i]=='H' && str[size1-i-1]=='H')||(str[i]=='I' &&str[size1-i-1]=='I') ||(str[i]=='M' &&str[size1-i-1]=='M') || (str[i]=='O' &&str[size1-i-1]=='O') || (str[i]=='T' &&str[size1-i-1]=='T')|| (str[i]=='U' &&str[size1-i-1]=='U')||(str[i]=='V' &&str[size1-i-1]=='V')||(str[i]=='W' &&str[size1-i-1]=='W')||(str[i]=='X' &&str[size1-i-1]=='X')||(str[i]=='Y' &&str[size1-i-1]=='Y')){
                            flag=true;
                    }
                else{
                    flag=false;
                    break;
                    }
                }
                if(flag==true){
                    cout<<"TAK";
                }
                else{
                    cout<<"NIE";
                }
            }
        else{
            cout<<"NIE";
            }
        }
    }
return 0;
}
