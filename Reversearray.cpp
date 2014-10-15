#include<iostream>

void rvereseArray(int arr[], int start, int end)
{
  int temp;
  while(start < end)
  {
    temp = arr[start];   
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }   
}     
 
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    coutt<arr[i];
 
  cout<<"\n";
} 
 

int main() 
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  printArray(arr, 6);
  rvereseArray(arr, 0, 5);
  printf("Reversed array is \n");
  printArray(arr, 6);
  system("pause");
  return 0;
}
