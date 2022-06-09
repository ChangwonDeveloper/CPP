// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>


int main() {
    
    char choice {};
    std::vector <int> vec {1,2,3,4,5,6,-4};
    int num {0};
    
    std::cout << "\nP - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    
    std::cout << "\nEnter your choice : ";
    std::cin >> choice;
    
    switch(choice){
        case 'p':
        case 'P':
            if(vec.size() == 0){
                std::cout << "The list is empty\n";
            }else{
                std::cout << "[ ";
                for(int i : vec){
                    std::cout <<  i << " ";
                }
                std::cout << "]";
            }
            break;
        case 'a':
        case 'A':
            std::cout << "Enter an integer to add to the list : ";
            std::cin >> num;
            vec.push_back(num);
            std::cout << num << " is successfully added to the list" << std::endl;
            break;
        case 'm':
        case 'M':
            if(vec.size() == 0){
                std::cout << "Cannot calculate mean of empty list\n";
            }else{
                double sum {0};
                double average {0};
                for(int i : vec){
                    sum += i;
                }
                average = sum / vec.size();
                std::cout << "The average of the list is : " << average << std::endl;
            }
            break;
            
        case 's':
        case 'S':
           if(vec.size() == 0){
                std::cout << "Unable to determine smallest number in the empty list";
            }else{
                double smalelst_number = vec.at(0);
                for(int i = 0; i < vec.size(); i++){
                    if(smalelst_number > vec.at(i))
                        smalelst_number = vec.at(i);
                }
                std::cout << "The smallest number on the list is " << smalelst_number << std::endl;
            }
            break;
        case 'l':
        case 'L':
            if(vec.size() == 0){
                std::cout << "Unable to determine largest number in the empty list";
            }else{
                double largest_number = vec.at(0);
                for(int i = 0; i < vec.size(); i++){
                    if(largest_number < vec.at(i))
                        largest_number = vec.at(i);
                }
                std::cout << "The largest number on the list is " << largest_number << std::endl;
            }
            
            break;
        case 'q':
        case 'Q':
            std::cout << "Goodbye...." << std::endl;
            break;
        default: 
            std::cout <<"Illigel choice" << std::endl;
            break;
    }
    
    return 0;
}

