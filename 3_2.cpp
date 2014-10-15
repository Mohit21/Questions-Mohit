#include<iostream>

using namespace std;



class Student {
private :
    char *name;
    int rollNo;
    int semester;

public :
    Student():name("Mohit"),rollNo(1),semester(3){};
    Student(char *name,int roll ,int sem=1)  :rollNo(roll),semester(sem){
    this->name = name;}
    Student(Student &ob){
        this->name=ob.name;
        this->rollNo=ob.rollNo;
        this->semester=ob.semester;
    }
    void setSemester(int semester){
        this->semester = semester;
    }
    int getSemester(){
        return semester;
    }

    void setRollNo(int no){
        rollNo=no;
    }

    int getRollNo(){
        return rollNo;
    }

    void setName(char *name){
        this->name = name;
    }

    char *getName(){
        return name;
    }


};

void check(Student &ob1,Student &ob2){
        if(ob1.getName()==ob2.getName()&&ob1.getRollNo()==ob2.getRollNo()&&ob1.getSemester()==ob2.getSemester()){
            cout<<"Both objects are same ";
        }
        else
            cout<<"Both objects are not same ";
    }

int main(){
    Student s1("abc",221,3);
    s1.setSemester(4);

    Student s3 = s1;

    Student arr[3];
    arr[0].setName("Rohan\n");
    cout<<arr[0].getName();

    check(s1,s3);
    
    system("pause");
return 0;

}
