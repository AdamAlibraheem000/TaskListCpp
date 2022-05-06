#include "Current.h"
#include <iostream>
#include <vector>

using namespace std;

void Current::Display(){
    //Check if current list is empty
    if(currentList.empty()){
        cout << "List is empty" << endl;
    }else{
        //Loop and display current tasks
        int static counter = 1;
        for(auto& items: currentList){
        cout << counter << ") " << items  << endl;
        counter++;
        }
        counter = 0;
    }
    
    
}

string Current::UpdateList(){
    cout << "Enter new task: ";
    string input = "";
    getline(cin, input);
    cout << " '" << input << "' was added!"<< endl;
    currentList.push_back(input);
}

