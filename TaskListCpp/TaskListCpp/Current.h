#pragma once
#include <vector>
#include <string>

using namespace std;

class Current
{
private:
    vector <string> currentList = {"Bob", "Joe", "Cows"};
    vector <string> completedList;
    
public:
    void Display();
    void CurrentMenu();
    void AddTask();
    void UpdateTaskMenu();
    void ClearTaskList();

};

