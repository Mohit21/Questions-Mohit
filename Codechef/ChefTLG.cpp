/*#include<iostream>
#include<iomanip>
using namespace std;
 
int main(){
long t;
float sal,P;
cin>>t;
while(t--){
    	cin>>sal;
	if(sal<1500){
		sal+=(sal*(0.10+0.9));
	}
	else{
		sal=(sal*1.98);
		sal+=500;
		
	}
	cout<<sal<<endl;
			    
}
system("pause");
return 0;
} 

/*#include<iostream>
#include<iomanip>
using namespace std;
 
int main(){
long t;
float Q,P;
cin>>t;
while(t--){
    	cin>>Q>>P;
	if(Q<1000){
		cout<<fixed<<setprecision(6)<<Q*P;
	}
	else{
		cout<<fixed<<setprecision(6)<<Q*P*0.9;
	}
	cout<<endl;
			    
}
system("pause");
return 0;
}   
 

/*#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(){
long t;
cin>>t;
while(t--){
	long B,LS,RS;
	float ans=0,ans1=0;
    	cin>>B>>LS;
    	ans=(LS*LS)-(B*B);
    	ans=sqrt(ans);
    	ans1=(LS*LS)+(B*B);
    	ans1=sqrt(ans1);
    	if(ans>ans1){
    		cout<<ans1<<" "<<ans;
    	}
    	else{
    		cout<<ans<<" "<<ans1;
    	}
    	cout<<endl;	    
}
system("pause");
return 0;
}   
 

/*#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
long t,num;
cin>>t;
while(t--){
	vector<int> v;
	vector<int>::iterator it,it1;
	for(int i=0;i<3;i++){
            cin>>num;
	        v.push_back(num);    
    }
	sort(v.begin(),v.end());
	it=v.end();
	it--;
	it--;
	cout<<*it<<endl;
	v.clear();
}
system("pause");
return 0;
}   

/*#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
long t,num;
cin>>t;
while(t--){
    	cin>>num;
	cout<<(int)sqrt(num)<<endl;		    
}
system("pause");
return 0;
}   


/*#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
long t,num;
cin>>t;
while(t--){
	long num1=0;
	vector<int> v;
	vector<int>::iterator it,it1;
    int i=0;
    	cin>>num;
	while(num!=0){
		v.push_back(num%10);
		num/=10;
	}
	it=v.begin();
	it1=v.end();
	it1--;
	cout<<(*it+*it1)<<endl;		    
}
system("pause");
return 0;
}   

/*#include<iostream>
 
using namespace std;
 
int main(){
long t,num;
cin>>t;
while(t--){
	long num1=0;
	int a=0;
    	cin>>num;
	while(num!=0){
		a=num%10;
		num1=num1*10+;
		num/=10;
	}
	cout<<num1<<endl;		    
}
system("pause");
return 0;
}      
*/ 

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
long t,max=0,W,L;
cin>>t;
while(t--){
    long C1,C2,diff=0;       
	cin>>C1>>C2;
	diff=abs(C1-C2);
	if(max<diff){
            if(C1>C2){
                 W=1;
                 L=diff;
                 max=diff;
                 }
            else{
                 W=2;
                 L=diff;
                 max=diff;
                 }
            }
}
cout<<W<<" "<<L;
system("pause");
return 0;
}      

