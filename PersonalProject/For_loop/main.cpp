#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main(){
    
    vector <int> vec {1,2,3,4,5};
    int arr[] {1,2,3,4,5};
    vector<int> *vecptr {&vec};
    // vec[i]와 i의 차이 
    cout << vecptr << endl;
    cout << (*vecptr).at(1) << endl;
     for(int i : vec){
        i = 0;
        cout << vecptr << endl;
        cout << (*vecptr).at(i) << endl;
        cout << i << endl;
    }   
    
    cout << "======================================" << endl;
    
     for(int i : vec){
        cout << i << endl;
    }       
    
    cout << "======================================" << endl;
    
    for(int i : arr){
        i = 0;
        cout << i << endl;
    }
    
    cout << "======================================" << endl;
    
    for(int i : arr){
        cout << i << endl;
    }
    
    cout << "======================================" << endl;
    for(int i = 0; i < 5; i++){
        arr[i] = 0;
        cout << arr[i] << endl;;
    }
    cout << "=====================================" << endl;
    
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;;
    }
    cout << "=====================================" << endl;
    
    for(auto i : arr){
        cout << i << endl;
    }
    
    return 0;
    
}