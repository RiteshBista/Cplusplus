#include <iostream>

using namespace std;


int main(){
    int n;
    int *iptr;
    iptr = new int[5];
    cout<<"Enter the no of values that you want to enter"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter value "<<endl;
        cin>>iptr[i];
    }
      cout<<"The entered values are "<<endl;
    for(int i=0;i<n;i++){
      
        
        cout<<iptr[i]<<'\t';
    }
    
}