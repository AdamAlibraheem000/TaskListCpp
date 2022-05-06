#include "Menu.h"
#include "Current.h"
#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void Menu::MainMenu(){
    int input = 0;
    Current c;
    
    do{
    cout << "\n*********MAIN MENU*************"<< endl;
    cout << "1)Display Current Tasks" << endl;
    cout << "2)Current Task List" << endl;
    cout << "3)Master List" << endl;
    cout << "4)Goal List" << endl;
    cout << "5)Exit Program" << endl;
    
   input = InputValid();
    
    switch(input){
        case 1: 
        c.Display();
        break;
        case 2:
        c.CurrentMenu();
        break;
        case 3:
        cout << "Master"<< endl;
        break;
        case 4:
        cout << "Goal List" << endl;
        break;
        case 5:
        break;
        default:
        cout << "Error from switch. Try again!\n\n" << endl;
        cout << "1)Display Current Tasks" << endl;
        cout << "2)Current Task List" << endl;
        cout << "3)Master List" << endl;
        cout << "4)Goal List" << endl;
        cout << "5)Exit Program" << endl;
        
    }
    
    }while(input != 5);
    
    cout << "Buh-Bye" << endl;
    exit(0);
}

int Menu::InputValid(){
    int num = 0;
    while(true){
    cin >> setw(1) >> num;
    if(cin.fail()){
        cout << "Invalid input. Try again" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }else{
        break;
        }
    }
    return num;
    
}
