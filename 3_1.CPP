#include<iostream>


using namespace std;


int duplicate(int *tptr,int size){
    int i,j,k;
    for ( i = 0; i < size; i++) {
      for ( j = i + 1; j < size;) {
         if (tptr[j] == tptr[i]) {
            for (k = j; k < size; k++) {
               tptr[k] = tptr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
   return size;
}

class Number{
public :
	int *ptr;
	int size;
	Number();
	Number(int *,int);
	Number(Number &);
	void Intersection(Number &);
	void Display();
	int checkSubset(Number &);
    void Union(Number &);
    void addElement(int);
    void remove(int element);
};

Number :: Number(){
	ptr = NULL;
	size=0;
}


Number :: Number(int *a,int size){
	this->size=size;
	ptr = new int[size];
	ptr = a;
}

Number :: Number(Number &  ob){
	ob.ptr=this->ptr;
}


void Number :: Display(){
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<" ";
	}
}


void Number :: Intersection(Number &ob){
    for(int i=0;i<size;i++){
        for(int j=0;j<ob.size;j++){
            if(*(ptr+i)==*(ob.ptr+j)){
                cout<<ptr[i]<<" ";
            }
        }
    }
}

void Number :: Union(Number &ob){
    int *tptr = new int[size+ob.size];
    int i;
    for( i=0;i<size;i++)
        *(tptr+i)=*(ptr+i);
    for(int j=0;j<ob.size;j++)
        *(tptr+i+j)=*(ob.ptr+j);

   int nsize= duplicate(tptr,size+ob.size);
    for(int i=0;i<nsize;i++)
        cout<<*(tptr+i)<<" " ;
}

int Number :: checkSubset(Number &ob)
{
    int i = 0;
    int j = 0;
    for (i=0; i<size; i++)
    {
        for (j = 0; j<ob.size; j++)
        {
           if(*(ptr+i)==*(ob.ptr+j))
              break;
        }

        if (j == ob.size)
           return 0;
    }

    return 1;
}

void Number :: addElement(int element){
    int *temp;
    int j;
    temp = new int[size];
    for(int i=0;i<size;i++)
        *(temp+i)=*(ptr+i);
    ptr = new int[size+2];
    for( j=0;j<size;j++)
        *(ptr+j)=*(temp+j);
    *(ptr+j)=element;
}

void Number :: remove(int element){
    for(int i=0;i<size;i++){
        if(i== element){
            for(int j=i+1;j<size;j++)
                *(ptr+j)=*(ptr+j+1);
                size--;

        }
    }
}


int main(){

	int a[]={2,22,4,52,6,72};
	int b[]={2,22,3,4,52,6,72,8,9};
	Number num(a,6);
	Number ob(b,9);
	cout<<"\n\n\nSet 1\n\n"<<endl;
	num.Display();
	cout<<"\n\n\nSet 2\n\n"<<endl;
	ob.Display();
	cout<<"\n\n\n Intersection\n\n"<<endl;
	num.Intersection(ob);
    cout<<"\n\n\n Union\n\n"<<endl;
    num.Union(ob);
    cout<<"\n\n\n Checking Subset\n"<<endl;
    int flag =num.checkSubset(ob);

    if(flag==1){
        cout<<"Is a subset"<<endl;
    }
    else
        cout<<"Not a subset"<<endl;

    num.remove(3);
    cout<<"\n After removing\n";
    num.Display();

return 0;

}
