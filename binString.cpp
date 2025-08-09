#include <iostream> 
using namespace std; 
 
int binCalculator(string str) 
{ 
    cout << "Entered string is " << str << endl; 
    if (str.empty()) 
    { 
        return -1; 
    } 
 
    int k;     if (str[1] == 'A') 
    { 
        k = (str[0] - '0') & (str[2] - '0'); 
    } 
    else if (str[1] == 'B') 
    { 
        k = (str[0] - '0') | (str[2] - '0'); 
    } 
    else if (str[1] == 'C') 
    { 
        k = (str[0] - '0') ^ (str[2] - '0'); 
    } 
 
    for (int i = 3; i < str.length(); i += 2) 
    { 
        if (str[i] == 'A') 
        { 
            k = k & (str[i + 1] - '0'); 
        } 
        else if (str[i] == 'B') 
    { 
        k = k | (str[i + 1] - '0'); 
        } 
        else if (str[i] == 'C') 
        { 
            k = k ^ (str[i + 1] - '0'); 
        } 
    } 
 
    return k; 
} 
 
int main() 
{ 
    string str;     cout << "Enter the string: ";     cin >> str;     int x = binCalculator(str); 
    cout << "Answer is: " << x << endl; 
} 
