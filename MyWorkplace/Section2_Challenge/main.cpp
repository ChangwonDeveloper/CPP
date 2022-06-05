#include <iostream>

int main(){
    int small_room {0};
    int large_room {0};
    int small_room_charge {25};
    int large_room_charge {35};
    double tax_rate {0.06};
    int valid_date {30};
    
    std::cout << "Chris's Carpet Cleaning Service" << std::endl;
    std::cout << "How many small rooms would you like cleaned? : ";
    std::cin >> small_room;
    std::cout << "How many large rooms would you like cleaned? : ";
    std::cin >> large_room;
    std::cout << "\nEstimate for carpet cleaning service" << std::endl;
    std::cout << "\nNumber of small room: " << small_room << std::endl;
    std::cout << "\nNumber of small room: " << large_room << std::endl;
    std::cout << "\nPrice per small room: $" << small_room * small_room_charge << std::endl;
    std::cout << "\nPrice per large room: $" << large_room * large_room_charge << std::endl;
    std::cout << "Total cost is : $" << small_room * small_room_charge + large_room * large_room_charge << std::endl;
    std::cout << "Tax : $"<< (small_room * small_room_charge + large_room * large_room_charge) * tax_rate << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Total estimate : $" << (small_room * small_room_charge + large_room * large_room_charge) * (1+tax_rate) << std::endl;
    std::cout << "This estimate is valid for " << valid_date << "days" << std::endl;
    return 0;
    
}