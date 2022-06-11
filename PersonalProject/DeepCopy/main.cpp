#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
private:
    int *price;

public:
    // constructor
    Book(int price);
    // copy constructor
    Book(const Book &source);
    Book(Book &&source);
    
    ~Book();
    int get_price() const {
        return *price;
    }
};

Book::Book(int p){
    price = new int;
    *price = p;
    cout << "Constructor is called" << endl;
} 

Book::Book(const Book &source)
    : Book {*source.price} {
    cout << "Copy constructor is called" << endl;
}

Book::Book(Book &&source)
    : price {source.price}{
        source.price = nullptr;
        cout << "Moving constructor" << endl;
    }

Book::~Book(){
    delete price;
    cout << "Destructor is called" << endl;
}

void display(const Book &b){
    cout << b.get_price() << endl;
}

int main(){
    vector<Book> vec;
    
    Book book1(60);
    cout << "=============================" << endl;
    Book book2 = book1;
    cout << "=============================" << endl;
    Book book3 {book1};
    cout << "=============================" << endl;
//    display(B);
    cout << "=============================" << endl;
    vec.push_back(Book{40});
    cout << "=============================" << endl;
    const Book constBook(100);
    display(constBook);
    display(book1);
    return 0;
}