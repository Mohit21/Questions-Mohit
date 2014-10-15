#include<iostream>

class Date{
public :
	int date;
	int month;
	int year;
	Date(){
		date = 1;
		month = 1;
		year = 2014;
	}

	Date(int d,int m,int y):date(d),month(m),year(y){}
	Date dateAt(int no){
		int count=0;
		while(count!=no){
			count++;
			date++;

			if(month==12&&date==32){
				month=1;
				year++;
				date=1;
				}
			//leapYear
			else if(year%4==0&&month==2&&date==30){
				date=1;
				month++;
			}

			else if(month==2&&date==29){
				date=1;
				month++;
			}
			else if(date==31&&(month==2||month==4||month==6||month==9||month==11)){
			    date=1;
			    month++;
			}
			else if(date==32&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
				month++;
				date=1;
				}

		}


	}

	Date Difference(Date &b){
		Date c;
		if(year==b.year){
		       c.year=year;
		       }
		else if(year>b.year){
			c.year=year-b.year;
			}
		else{
			c.year=b.year-year;
			}

	}

	void Display(){
		cout<<date<<"-"<<month<<"-"<<year<<endl;
	}

};

int main(){
	Date date(28,2 ,2014);
	date.Display();
	date.dateAt(6);
	date.Display();
		system("pause");
    return 0;
}
