/*
    PROGRAMMING PLAYGROUND -- SORTING ALGORITHMS
	QuickSort and MergeSort
	Victor Luiz da Silva
*/

#include "Sort.h"
#include <iostream>
#include <vector>

using namespace std; 

std::vector<int> numbers; 
std::vector<int> numbersCopy;

void menuHelper()
{
    cout << "\n----------------------\nPlease enter a selection: \n";
    cout << "\n1.Add number\n2.Remove number\n3.View list\n4.QUICK Sort\n5.MERGE Sort\n6.Exit\nSelection: ";
}

bool remove(int x)
{
    for (int i = 0; i < numbers.size(); i++)
	if(numbers.at(i) == x)
	{
            numbers.erase(numbers.begin() + i); 
            numbersCopy.erase(numbers.begin() + i); 
            return 1;
        }
    return 0;
}

void print()
{
    cout << "\nElements in list:\n";
    for(int a = 0; a < numbers.size(); a++)
        cout << numbersCopy.at(a) << " ";
}

int main()
{
    int selection, toAdd, toRemove;
	
    Sort* mySorter = new Sort();

    do
    {
        menuHelper();   
        cin >> selection;
        switch(selection)
        {
            case 1: 
                cout << "Enter number to add to list: \n";
                cin >> toAdd;
                numbers.push_back(toAdd);
                numbersCopy.push_back(toAdd);
                break;            
            case 2:
                if(numbers.size() == 0)
                cout << "List is empty, cannot remove." << endl;
                else
                {
                    cout << "Enter number to remove from list: (will only remove 1st instance of it)\nSelection: ";
                    cin >> toRemove;
                    if(remove(toRemove))
                        cout << "First instance of " << toRemove << " successfully removed." << endl;
                    else 
                        cout << toRemove << " not found, could not remove. " << endl;		
                }
                break;
            case 3: 
                if(numbers.size() == 0) 
                    cout << "List is empty, nothing to print." << endl;
                else print();
                break;
            case 4: 
                if(numbers.size() == 0) 
                    cout << "List is empty, nothing to sort." << endl;
                else 
                    mySorter->quick(numbers);
                break;
            case 5:
                if(numbers.size() == 0) 
                    cout << "List is empty, nothing to sort." << endl;
                else mySorter->merge(numbers);
                break;
            case 6:
                cout <<"Bye bye.\n";
                break;
            default: 
                cout <<"Wrong input, try again. \n";
        }
    }
    while(selection!=6);
	
    delete mySorter;
    return 0;
}
