#include <iostream>
#include <cstring>
using namespace std;

int CheckPassword(char str[], int n) {
    if (n < 4)
        return 0;
    if (str[0] >= 48 && str[0] <= 57)
        return 0;

    bool nflag = false;
    bool cflag = false;
    bool slashSpaceNegative = true;

    for (int i = 0; i < n; i++) {
        if (str[i] >= 48 && str[i] <= 57)
            nflag = true;
        if (str[i] >= 65 && str[i] <= 90)
            cflag = true;
        if (str[i] == 32 || str[i] == '/')
            slashSpaceNegative = false;
    }

    if (nflag && cflag && slashSpaceNegative)
        return 1;
    else
        return 0;
}
int main() {
    string strx;
    cout<<"Enter the password"<<endl;
    cin>>strx;
    int n = strx.length();
    char *str=new char[n+1];
    strcpy(str,strx.c_str());
    int result = CheckPassword(str, n);
    cout << result << endl;
    return 0;
}
