#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int a[100][100],t,k=0,n,sum,sum1[10],i,j,l=0,sum2;
    cin>>t; 
    while(t!=0){
          sum=0;
          sum2;
        fflush(stdin);
        cin>>n;
        for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
        
         cin>>a[i][j];  
          
            if(i==0&&j==0){ 
            sum=sum+a[0][0];
            sum2+=a[0][0];
            }
            
            else if(i-j==1){
                sum=sum+a[i][j];
            }
            else if(i-j==0){
                
                sum2+=a[i][j];
            }
            else{
                 continue;
                 }
        }
        }
        if(sum==23){
            sum1[k]=sum;
            k++;    
        }
        else if(sum2==23){
            sum1[k]=sum2;
            k++;
        }   
        else{
            sum1[k]=sum;
            k++;    
        }
        t--;
    }
    
   while(l<k){
       cout<<sum1[l]<<endl;
       l++;
   }   
   
    system("pause");
    return 0;
}
