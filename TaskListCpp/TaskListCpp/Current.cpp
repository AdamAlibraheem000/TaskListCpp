#include "Current.h"
#include "Menu.h"
#include <iostream>
#include <vector>

using namespace std;



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
                    Display();
                    break;
                    case 2:
                    AddTask();
                    break;
                    case 3:
                    cout << "Update"<< endl;
                    UpdateTaskMenu();
                    break;
                    case 4:
                    cout << "Clear"<< endl;
                    ClearTaskList();
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


void Current::AddTask(){
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Enter new task: ";
    string input = "";
    getline(cin, input);
    cout << " '" << input << "' was added!"<< endl;
    currentList.push_back(input);
}

void Current::ClearTaskList(){
    int input = 0;
    do{
        cout << "Do you wish to to delete all tasks? 1)Yes 2)No"<<endl;
        input = Menu::InputValid();
        
        if(input == 1){
            cout << "All tasks deleted"<<endl;
            currentList.clear();
            break;
        }else{
            break;
        }
        
    }while(true);
}

void Current::UpdateTaskMenu(){
    int choice = 0;
    
    do{
        cout << "****UPDATE TASK******"<<endl;
        cout << "1) Mark Completed" << endl;
        cout << "2) Delete Task"<<endl;
        cout << "3) Transfer to Master List"<<endl;
        cout << "4) Return to Current List Menu" <<endl;
        
        choice = Menu::InputValid();
        
        switch(choice)
        {
            case 1:
            cout << "Mark Completed" <<endl;
            break;
            case 2:
            cout << "Delete" << endl;
            break;
            case 3:
            cout << "Transfer" << endl;
            break;
            case 4:
            cout << "Return to Current Menu"<<endl;
            break;
            default:
            cout << "Incorrect Input. Try again\n\n"<<endl;
            cout << "1) Mark Completed" << endl;
            cout << "2) Delete Task"<<endl;
            cout << "3) Transfer to Master List"<<endl;
            cout << "4) Return to Current List Menu" <<endl;
        }
    }while(choice != 4);
    
    CurrentMenu();
}


void Current::MarkComplete(){
    int choice = 0;
    do{
        Display();
        cout << "Choose task to mark completed. Enter task number: ";
        choice = Menu::InputValid();
        
        string updatedTask = currentList[choice];
        
        
        
    }while();
}
