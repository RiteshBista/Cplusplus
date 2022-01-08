#include <iostream>

using namespace std;
class objects{
    private:
    static int count;
    public:
    objects(){
        count++;
    }
    void display_counter(){
        cout<<count<<endl;
    }
};
int objects::count =0;
int main(){
   objects a1,a2,a3,a4;
   a1.display_counter();
   a2.display_counter();
   a3.display_counter();
   a4.display_counter();
   
}