#pragma once
#include <vector>
#include <string>

using namespace std;

class Current
{
private:
    vector <string> currentList = {"Bob", "Joe", "Cows"};
    
public:
    void Display();
    void CurrentMenu();
    void UpdateList();

};

