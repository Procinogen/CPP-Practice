//Inputs and Outputs
#include <iostream>
#include <string>
using namespace std;

int main (){
    string str;
    int integer;
    int foo;
    int bar;

    cout << "Set a string" << endl;
    cin >> str; //cin, stands for C-in
    cout << endl;

    cout << "Set an integer" << endl;
    cin >> integer; //As you can c (badum tss), cin works for all sorts of types of variables. They just have to match up with the initialized one.
    cout << endl;

    cout << "Set two integers" << endl;
    cin >> foo >> bar; //You can string them together, too. However, they need to be the same type.

   /* string str2;
    cout << "What's your name? ";
    getline (cin, str2); */

    cout << endl << "This is a string! " << str << endl;
    cout << "This is an integer!" << integer << endl;
    cout << foo << "+" << bar << endl;
    //cout << str2;
    return 0;
}
