#include <iostream>
#include <fstream>


using namespace std;
class student{
    private:
    int roll;
    char name[50];
    int phone_number;
    public:
    void get_info(){
        cout<<"Enter roll"<<endl;
        cin>>roll;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter phone number"<<endl;
        cin>>phone_number;
        
    }  
    void show_info(){
        cout<<"name is "<<endl;
        cout<<name<<endl;
        cout<<"roll is "<<roll<<endl;
        cout<<"PHone number is"<<phone_number<<endl;
    }
};
int main(){
    student s;
    ofstream out("student.txt",ios::out);
    cout<<"Enter the info of the student"<<endl;
    s.get_info();
    out.write((char *) &s,sizeof(s));
    out.close();
    ifstream infile("student.txt", ios::in);
    infile.read((char *)&s,sizeof(s));
    infile.close();
}