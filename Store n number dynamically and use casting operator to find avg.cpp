#include <iostream>
using namespace std;


int main(){
    int *arr, tot =0, avg;
    int n;
    arr = new int[n];
    cout<<"ENter number of elements"<<endl;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        tot += arr[i];
    }
    avg = static_cast<float>(tot/n);
    cout<<"The aveage of the number is "<<avg<<endl;
    
}