#ifndef _TEACHER_H_
#define _TEACHER_H_
#include <string>
class Teacher
{
private:
    std::string name;
    int *age;
public:
    std::string get_name() const{ return name;}
    int get_age() const {return *age;}
    Teacher(std::string name = "None", int age = 0); // constructor
    Teacher(const Teacher &source); // copy constructor
    Teacher(Teacher &&source); // move constructor
    ~Teacher(); // destructor 

};

#endif // _TEACHER_H_
