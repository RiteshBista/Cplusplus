#include <iostream>

using namespace std;

class date{
    private:
    int day, month, year;
    public:
    date(){
        day =0;
        month =0;
        year=0;
    }
    
    date(int d, int m, int y){
        day =d;
        month =m;
        year =y;
    }
    date operator-(date e){
        date temp;
        temp.day =day-e.day;
        if(temp.day<0){
            temp.day= 30+day - e.day;
            temp.month =-1;
        }
        temp.month = month -e.month +temp.month;
        if(temp.month<0){
            temp.month = 12+ month-e.month;
            temp.year =-1;
            
        }
        temp.year = temp.year +year -e.year;
        return temp;
    }
    date operator+( date e){
         date temp;
        temp.day =day +e.day;
        if(temp.day>=30){
            temp.month = temp.day /30;
            temp.day = temp.day%30;
        }
        temp.month = month +e.month +temp.month;
        if(temp.month>=12){
            temp.year = temp.month /12;
            temp.month = temp.month %12;
        }
        temp.year = year+e.year +temp.year;
        return temp;
    }
    void print(){
        cout<<"day "<<day<<endl;
        cout<<"month "<<month<<endl;
        cout<<"year "<<year<<endl;
    }
    
};
int main(){
  date d1(12,05, 2000);
  date d2(18,12,2003);
  date e = d1+d2;
  e.print();
  date f = d1 -d2;
  f.print();
}