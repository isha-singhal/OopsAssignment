#include<iostream>
#include <string>
using namespace std;

class Date
{
    private:
        int month;
        int day;
        int year;

    public:
        Date( int m, int d, int y)
        {
            if(m>=1&&m<=12){
                month=m;
            }
            else
            {
                month=1;
            }
            day=d;
            year=y;
        }
        void setMonth( int m)
        {
            if(m>=1&&m<=12)
                month=m;
            else
            {
                month=1;
            }
        }
        void setDay(int d )
        {
            day = d;
        }
        void setYear(int y )
        {
            year=y;
        }
        int getMonth()
        {
            return month;
        }
        int getDay()
        {
            return day;
        }
        int getYear()
        {
            return year;
        }
        void displayDate()
        {
            cout<<month<<"/"<<day<<"/"<<year<<endl;

        }
};
int main()
{
 Date Date1(7,30,2020);
 cout<<"Date in the format month/day/year is: ";
 Date1.displayDate();
 Date1.setMonth(0);
 cout<<"Date in the format month/day/year when month is not in the given range(1<=m<=12) is: ";
 Date1.displayDate();
 return 0;

}
