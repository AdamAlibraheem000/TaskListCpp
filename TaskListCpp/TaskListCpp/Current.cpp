#include "Current.h"
#include "Menu.h"
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

void Current::CurrentMenu(){
        //Menu for current tasks
        int choice {0};
        
        do{
            cout << "\n\n***********CURRENT TASKS MENU*************"<< endl;
            cout << "1)Display Current Tasks"<< endl;
            cout << "2)Add New Task"<<endl;
            cout << "3)Update Task status" <<endl;
            cout << "4)Clear Current Task list"<<endl;
            cout << "5)Return to Main Menu"<<endl;
            
                //Accept user input; Inheritance from Menu class
                choice = Menu::InputValid();
                
                switch(choice){
                    case 1:
                    cout << "Display"<< endl;
                    break;
                    case 2:
                    cout << "Add"<<endl;
                    break;
                    case 3:
                    cout << "Update"<< endl;
                    break;
                    case 4:
                    cout << "Clear"<< endl;
                    break;
                    case 5:
                    cout << "Main menu" <<endl;
                    break;
                    default:
                    cout << "Error from switch. Incorrect input"<<endl;
                    cout << "1)Display Current Tasks"<< endl;
                    cout << "2)Add New Task"<<endl;
                    cout << "3)Update Task status" <<endl;
                    cout << "4)Clear Current Task list"<<endl;
                    cout << "5)Return to Main Menu"<<endl;
                }
    
                
                
        }while(choice != 5);
}

void Current::UpdateList(){
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Enter new task: ";
    string input = "";
    getline(cin, input);
    cout << " '" << input << "' was added!"<< endl;
    currentList.push_back(input);
}

