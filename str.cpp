#include<iostream>
#include<string>

using namespace std;

class String{
public:
    char *str;
    String(char *str){
        this->str = new char[strlen(str)+1] ;
        this->str=str;
    }
int getLength(){
    int i=0;
    while(*(str+(++i))!='\0');
    return (i);
}

void copy(char *copystr){
    str = new char[strlen(copystr)+1];
        str=copystr;
}

int findIdex(char a){

for(int i=0;*(str+i)!='\0';i++){
				if(*(str+i)==a)
					return i;
			}
			return -1;
		}

void concatenate(char *sec){
    int i;
    int j;
    while(str[i]!='\0')
        i++;
    while(sec[j]!='\0'){
        str[i]=sec[j];
        j++;
        i++;
    }
    str[i]='\0';
    cout<<str;


}

int findsubString(char *s){
int flag=0;
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)==*s){
            flag=1;
            int k=0;
            for(int j=i+1;j<strlen(s);j++){
                if(*(str+j)!=*(s+ (++k))){
                    flag=0;
                    return 0;
                }
                else flag=1;
            }
            }
    }

    if(flag==1){
        return 1;
    }

}

int compare(char *sub){
    int i=0,flag=0;
     while(*(str+i)!='\0' && *(sub+i)!='\0'){
         if(*(str+i)!=*(sub+i)){
             flag=1;
             break;
         }
         i++;
    }

    if (flag==0 && *(str+i)=='\0' && *(sub+i)=='\0')
         return 1;
    else
         return 0;
}


};


int main(){
    String a("MOHIT");
    cout<<a.getLength();
    cout<<a.findIdex('b');
    cout<<a.findsubString("MO");
   cout<<a.compare("MOHIT");
   system("pause");
return 0;
}
