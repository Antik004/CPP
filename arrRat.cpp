#include <iostream> 
using namespace std; 
 
int calculator(int r, int unit, int *arr, int arr_size) 
{ 
    int c = 0, n = 0; 
 
    for (int i = 0; i < arr_size; i++) 
    { 
        while (arr[i] >= unit && r != 0) 
        { 
            arr[i] -= unit;             r--; 
        } 
 
        if (arr[i] == -1) 
        {             n++; 
        } 
        else 
        {             c++; 
        } 
 
        if (r == 0) 
        { 
            break; 
        } 
    } 
 
    if (n == arr_size) 
    { 
        return -1; 
    } 
    else if (r > 0) 
    { 
        return 0; 
    } 
else 
{         return c; 
    } 
} 
 
int main() 
{ 
    string temp; 
    cout << "Enter the number of rats: ";     getline(cin, temp); 
    int r = stoi(temp); 
 
    cout << "Enter the unit food each rat consumes: "; 
    getline(cin, temp); 
    int unit = stoi(temp); 
 
    cout << "Enter the no. of houses: ";     getline(cin, temp); 
    int n = stoi(temp); 
 
    int arr[n]; 
    for (int i = 0; i < n; i++) 
    { 
        cout << "Enter the unit of food present in house " << i + 1 << ": ";         getline(cin, temp); 
        if (temp.empty()) 
        { 
            arr[i] = -1; 
        } 
        else 
        { 
            arr[i] = stoi(temp); 
            cout << "Entered: " << arr[i] << endl; 
        } 
    } 
 
    int arr_size = sizeof(arr) / sizeof(arr[0]);     int op = calculator(r, unit, arr, arr_size); 
    cout << "No. of houses is: " << op << endl; 
} 
