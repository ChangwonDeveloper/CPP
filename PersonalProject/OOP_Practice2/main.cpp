#include <iostream>
#include <vector>
#include "Teacher.h"

void display(Teacher t){
    std::cout << "Teacher's name is: " << t.get_name() << std::endl;
    std::cout << "Teacher's age is: " << t.get_age() << std::endl;
}

int main(){
    
    Teacher teacher1;
    display(teacher1);
    Teacher teacher2 {"Chris"};
    display(teacher2);
    Teacher teacher3 {"Ben", 23};
    display(teacher3);
    std::cout << "========================" << std::endl;
    std::vector<Teacher> teachers;
    teachers.push_back(Teacher{40});
    return 0;
    
}