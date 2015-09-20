#include <iostream>
#include<string.h>

using namespace std;

int Hash[27][27][27][27][27];
int main()
{
    int v,w,x,y,z,count=0,n;
    char s[10];
    cin>>n;
    while(n!=0){
    	fflush(stdin);
    	cin>>s;
    	v=0,w=0,x=0,y=0,z=0;
    	for(int i=0;i<strlen(s);i++){
    		if(i==0){
    			v=s[i]-'a'+1;
    		}
    		if(i==1){
    			w=s[i]-'a'+1;
    		}
    		if(i==2){
    			x=s[i]-'a'+1;
    		}
    		if(i==3){
    			y=s[i]-'a'+1;
    		}
    		if(i==4){
    			z=s[i]-'a'+1;
    		}
        }
        if(!Hash[v][w][x][y][z])
    			count++;
       Hash[v][w][x][y][z]=1;
            n--;
    }
    cout<<count<<endl;
    for(int i=0;i<27;i++)
    	for(int j=0;j<27;j++)
    		for(int k=0;k<27;k++)
    			for(int l=0;l<27;l++)
    				for(int m=0;m<27;m++)
    					if(Hash[i][j][k][l][m]){
    						cout<<(char)((i+'a')-1);
    						if(j)
    							cout<<(char)((j+'a')-1);
    						if(k)
    							cout<<(char)((k+'a')-1);
    						if(l)
    							cout<<(char)((l+'a')-1);
    						if(m)
    							cout<<(char)((m+'a')-1);
    							cout<<endl;
    					
    					}
    //cout << "Hello World!" << endl;
    system("pause");
    return 0;
}
