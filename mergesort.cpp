/*     
Merge-Sort
Complexity
Best case:O(n)
Avg case:O(n)
worst case:O(nlogn)
*/

#include<iostream>
using namespace std;

void merge(int a[],int beg,int mid,int end){
     int i=beg,j=mid+1,temp[10],l,k=beg;
     while((i<=mid)&&(j<=end)){     
                             if(a[i]>a[j]){
                                           temp[k]=a[j];
                                           j++;
                                           }  
                             else{
                                  temp[k]=a[i];
                                  i++;
                                  }                
                             k++;
     }          
                             
     if(i>mid){
               while(j<=end){
                            temp[k]=a[j];
                            j++;
                            k++;
                            }
               }
     else{
          while(i<=mid){
                       temp[k]=a[i];
                       i++;
                       k++;
                       }
     }
     for(l=beg;l<k;l++){
                      a[l]=temp[l];
                      }
     }
void mergeSort(int a[],int beg,int end){
     int mid;
     if(beg<end){
                 mid=(beg+end)/2;
                 mergeSort(a,beg,mid);
                 mergeSort(a,mid+1,end);
                 merge(a,beg,mid,end);
                 }
     }
int main(){
    system("cls");
    int a[20],size;
    cout<<"\nEnter the size of array:";
    cin>>size;
    cout<<"\nEnter the values:";
    for(int i=0;i<size;i++){
            cin>>a[i];
            }
    cout<<"\nThe Arary u entered is:";
    for(int i=0;i<size;i++){
            cout<<"-->"<<a[i];
            }
    mergeSort(a,0,size-1);
    cout<<"\nThe sorted array is:";
    for(int i=0;i<size;i++){
            cout<<"-->";
            cout<<a[i];
            }
    system("pause");
    return 0;
    }
