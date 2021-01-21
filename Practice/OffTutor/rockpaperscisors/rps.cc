#include <iostream>
#include <string>
using namespace std;

int main(){
    int usrchoice;
    int temp;
    cout << "Rock (1), paper (2), or scissors (3)? ";
    cin >> temp;
    switch(temp){
    case 1:
        cout << "You chose rock!";
        break;
    case 2:
        cout << "You chose paper!";
        break;
    default:
    case 3:
        cout << "You chose scissors!";
        break;
    default:
        cout << "You didn't choose either...";
        break;
    }

    return 0;
}
