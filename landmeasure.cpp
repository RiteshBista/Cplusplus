#include <iostream>
using namespace std;

class LandMeasure{
    private:
    int ropani, ana, paisa, dam;
    public:
    
     LandMeasure(int r, int a, int p, int d){
         ropani =r;
         ana =r;
         paisa =p;
         dam =d;
         
     }
     LandMeasure(){
         ropani =0;
         ana =0;
         paisa =0;
         dam =0; 
     }
     LandMeasure add(LandMeasure l1, LandMeasure l2){
         LandMeasure temp;
         temp.dam = l1.dam +l2.dam;
         if(temp.dam>=4){
             temp.paisa  = temp.dam/4;
             temp.dam =temp.dam %4;
             
         }
         temp.paisa = l1.paisa + l2.paisa+temp.paisa;
         if(temp.paisa>=4){
             temp.ana = temp.paisa/4;
             temp.paisa = temp.paisa%4;
         }
         temp.ana = l1.ana +l2.ana +temp.ana;
         if(temp.ana>=16){
             temp.ana = temp.ana/16;
             temp.ropani = temp.ana %16;
             
         }
         temp.ropani = l1.ropani +l2.ropani +temp.ropani;
         return temp;
     }
     void show_result(){
         cout<<"Ropani is"<<ropani<<endl;
         cout<<"ana is "<<ana<<endl;
         cout<<"paisa "<<paisa<<endl;
         cout<<"dam"<<dam<<endl;
     }
};
int main(){
   LandMeasure result;
    LandMeasure l1(14,24,34,42);
     LandMeasure l2(11,21,32,43);
     result = result.add(l1, l2);
     result.show_result();
}