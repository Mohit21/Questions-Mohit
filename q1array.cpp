/*
Sorting a list with 3 inputs-0,1,2
Best Case:0 1 2 ---->O(n)
Avg Case:0 2 1 -->O()
Worst Case:2 1 0 ---->O(nlogn)
*/

#include<iostream>
using namespace std;


void merge(int A[],int beg,int mid,int end){
     int i=beg,j=mid+1,temp[10],l,k=beg;
     while((i<=mid)&&(j<=end)){     
                             if(A[i]>A[j]){
                                           temp[k]=A[j];
                                           j++;
                                           }  
                             else{
                                  temp[k]=A[i];
                                  i++;
                                  }                
                             k++;
     }          
                             
     if(i>mid){
               while(j<=end){
                            temp[k]=A[j];
                            j++;
                            k++;
                            }
               }
     else{
          while(i<=mid){
                       temp[k]=A[i];
                       i++;
                       k++;
                       }
     }
     for(l=beg;l<k;l++){
                      A[l]=temp[l];
                      }
     }
void mergeSort(int A[],int beg,int end){
     int mid;
     if(beg<end){
                 mid=(beg+end)/2;
                 mergeSort(A,beg,mid);
                 mergeSort(A,mid+1,end);
                 merge(A,beg,mid,end);
                 }
     }
        
int main(){
    int A[20],size;
    cout<<"\nEnter the size of array:";
    cin>>size;
    cout<<"\nEnter the Elements:";
    for(int i=0;i<size;i++){
            cout<<"\nfor-"<<i+1<<":";
            cin>>A[i];
            }
    mergeSort(A,0,size);
    cout<<"\nThe Sorted array is:";
    for(int i=0;i<size;i++){
            cout<<"-->"<<A[i];
            }
    system("pause");
    return 0;
    }
