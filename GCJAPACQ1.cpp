#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int T,T1=0;
	cin>>T;
	while(T--){
		 int N;
		 cin>>N;
		 char name[N][20],temp[20];
		 vector<int> v,c;
		 vector<int>::iterator it1,it2;
		 string nm;
		 for(int i=0;i<N;i++){
			scanf("%19s",name[i]);
			//name.push_back(nm);
		 }
		
		//lexicographically sort 
		for (int i = 0; i < N - 1 ; i++)
   		 {
        	for (int j = i + 1; j < N; j++)
        	{
            	if (strcmp(name[i], name[j]) > 0)
            	{
                	strcpy(temp, name[i]);
                	strcpy(name[i], name[j]);
                	strcpy(name[j], temp);
            	}
        	}
		}
		
		//max character count 
		int count[N][26];
		int m=0,count1=0;
		memset(count,0,sizeof(count)); 
		for(int i=0;i<N;i++){
			count1=0;
			for(int j=0;name[i][j]!='\0';j++){
					count[i][name[i][j]-'A']++;
			}
			for(int k=0;k<26;k++){
				if(count[i][k]!=0){
					count1++;
				}
			}
			v.push_back(count1);
			}
		int max=*max_element(v.begin(),v.end());
		int countname=0,l=0;
		if(v.size()>0){
			
			for(it1=v.begin();it1!=v.end();it1++){
				if(*it1==max){
					countname++;
					c.push_back(l);
				}
				l++;
			}
		if(countname==1){
				it1=c.begin();
				cout<<"Case #"<<++T1<<": ";
				for(int i=0;i<name[*it1][i]!='\0';i++){
					cout<<name[*it1][i];
				}
				cout<<endl;
		}
		else{
			for(it1=c.begin();it1!=c.end();it1++){
				cout<<"Case #"<<++T1<<": ";
				for(int i=0;i<name[*it1][i]!='\0';i++){
					cout<<name[*it1][i];
					}
				cout<<endl;				
			}
		}
	}			
}
system("pause");
return 0;	
}



