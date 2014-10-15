#include<iostream>
#include<string>

void divideString(char *str, int n)
{
   int str_size = strlen(str);
   int i;
   int part_size;
 
  
   if(str_size%n != 0)
   {
     cout<<"Invalid Input: String size is not divisible by n";
     return;
   }
 

   part_size = str_size/n;
   for(i = 0; i< str_size; i++)
   {
     if(i%part_size == 0)
        cout<<"\n";;
     cout<<str[i];
   }
}
 
int main()
{
    char *str = "a_simple_divide_string_quest";
 
   
    divideString(str, 4);
 
    system("pause");
    return 0;
}
