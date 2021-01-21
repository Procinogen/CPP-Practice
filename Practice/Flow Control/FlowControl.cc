//Statements and Flow Control
#include <iostream>
#include <string>
using namespace std;

int main(){
    /*For loops
    for(int i(10); i >= 0; i--){
        if (i == 0){
            cout <<endl << "blastoff!";
        }else{
            cout << i << endl;
        }
    }*/

    /*While Loops
    int f(0);
    while(f != 42){
        cout << "f currently equals "<< f << endl;
        cout << "Give f a value of 42 to stop the loop. ";
        cin >> f;
    }*/

    //Switches & Cases
    int x;
    cout << "Give x a value. ";
    cin >> x;
    switch(x){ //Switches are used for checking the value of a variable. For more compex comparison (i.e range), use an if/else statement. Switches only use int.
    case 1:
        cout << "x is equal to 1!";
        break;
    case 2:
        cout << "x is equal to 2!";
        break;
    case 3:
        cout << "x is equal to 3!";
        break;
    default:
        cout << "x is neither 1, 2, or 3!";
        break;
    }
return 0;
}


