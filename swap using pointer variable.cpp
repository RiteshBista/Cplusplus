#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp =*a;
    *a =*b;
    *b =temp;
    
}

int main(){
    int a,b;
    
    cout<<"Enter the value for a and b"<<endl;
    cin>>a;
    cin>>b;
    
    swap(&a, &b);
    cout<<"The value of a after swapping "<<a<<endl;
    cout<<"The value of b after swapping "<<b<<endl;
}