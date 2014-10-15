#include<iostream>

using namespace std;

class Array{
public:
    int size;
    int accsize;
    int *a;

    Array(){
        accsize=-1;
        size=10;
        a = new int[size-1];
    }

    Array(int size){
        this->size = size;
        a = new int[size-1];
    }
    Array(const Array &ob){
        this->size = ob.size;
        this->a=ob.a;
    }

    Array(int b[]){
        this->a=b;
    }

    ~Array(){
        delete a;
    }

    void incrementSize(){
        if(size=3/4*size)
        {
            size = 3/2*size;
        }
    }

    void decrementSize(){
        if(size=size/4){
            size=size/2;
        }
    }

    void add(int element){
        this->accsize++;
        a[this->accsize]=element;
    }

    void add(int element,int l){
        size++;
        int count=0;
        for(int i=0;i<=size-1;i++){
            count++;
            if(count==l-1){
                for(int j=l;j<=size-1;j++){
                    a[j+1] = a[j];
                }
                a[l-1]=element;
            }
        }
    }

    void remove(int element){
        for(int i=0;i<=size-1;i++){
            if(a[i]==element){
                for(int j=i+1;j<=size-1;j++){
                    a[j-1]=a[j];
                }
                accsize--;

            }
        }
    }

    void removeIndex(int I){

         for(int i=0;i<=size-1;i++){

            if(i==I){
                for(int j=i+1;j<=size-1;j++){
                    a[j-1]=a[j];
                }
                accsize--;

            }
        }
    }
    int *GetsubList(int start ,int end){
        int *temp;
        for(int i=0;i<=size-1;i++){
            if(i==start){
                    int count=-1;
                while(count!=end){
                    count++;
                                        *(temp+count)=*(a+count);
                }

            }

        }
        return temp;

    }

void setElement(int element,int i)
		{
			a[i-1]=element;
		}

    int getElement(int I){
        return a[I];
        }

};
int main(){
    Array ba;
    ba.add(5);
    ba.add(4);
    ba.add(6,4);
    cout<<"HELLO "<<ba.getElement(1)<<endl;
    ba.removeIndex(1);
    ba.setElement(3,6);




    for(int i=0;i<=ba.size;i++){
        cout<<ba.a[i]<<"\n";
    }
system("pause");
return 0;
}
