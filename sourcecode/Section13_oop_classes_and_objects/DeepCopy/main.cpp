// Section 13
// Copy Constructor - Deep Copy
#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
    cout << "constructor is operated" << endl;
}

Deep::Deep(const Deep &source)
    : Deep {*source.data} {
    cout << "Copy constructor  - deep copy" << endl;
}
// deconstrucot is called when the object is out of local scope
Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

// destructor is called when program is out of the function
void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}

int main() {
    
    Deep obj1 {100};
    cout << "======================" << endl;
    display_deep(obj1);
    cout << "======================" << endl;
    
    Deep obj2 {obj1};
    cout << "======================" << endl;
    
    obj2.set_data_value(1000);
    cout << "======================" << endl;
    cout << obj2.get_data_value() << endl;
  
    return 0;
}

