/*Write a program to display N number of characters using default 
arguments for both parameters. Assume that the function takes two arguments for one character 
to be printed and other number of character to be printed

*/


#include <iostream>
using namespace std;
void display(char c ='a', int i =5){
    for(int j =0;j<i;j++){
        cout<<c<<endl;
        
    }
}
int main(){
    cout<<"on passing no paramter in function call we get"<<endl;
 display();
 cout<<"on passing  paramter in function call we get"<<endl;
 display('h',3);
}