#include <iostream>
#include <cstring>
using namespace std;
class book{
  private:
  char *title;
    char *author;
    char *publisher;
    int price;
  public:
    book(){
        int length =0;
        title = new char[length+1];
        author = new char[length+1];
        publisher = new char[length +1];
        price =0;
        
    }
    book(char *t, char *a, char *p , float p1){
        int length;
        length =strlen(t);
        title = new char[length];
        strcpy(title, t);
        length = strlen(p);
        author = new char[length];
        strcpy(author,a);
        length = strlen(publisher);
        publisher = new char[length];
        strcpy(publisher, p);
        price =p1;
        }
        book(book &b){
            author =b.author;
            title = b.title;
            publisher = b.publisher;
            price = b.price;
            
        }
        void display(){
            cout<<"The title of the book"<<title<<endl;
            cout<<"Author of the book "<<author<<endl;
            cout<<"Price of the book is "<<price<<endl;
            
        }
        ~book(){
            cout<<"Object is about to get destroyed"<<endl;
            delete[]author;
            delete[]title;
            delete[]publisher;
            
        }
};

int main(){
    book b2("c++", "random", "publication", 350);
    b2.display();
    book b3(b2);
    b3.display();
    
}