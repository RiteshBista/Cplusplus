#include <iostream>

using namespace std;
class student{
    private:
    int roll;
    public:
    student(int r){
        roll =r;
    }
    void display()const{
        cout<<roll<<endl;
    }
};
int main(){
    const student s1(40);
    s1.display();
}