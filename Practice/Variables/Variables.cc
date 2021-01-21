//Variable practice; getting used to declaring and whatnot
#include <iostream>
#include <string>
using namespace std;

int main (){
    int num = 1; //Different methods of setting initializing variables
    int num2(37); //Second method
    int num3=0; //As you can see, spaces and indentation isn't as important in C++
    int num4 (0); //You can add spaces too, but again, it doesn't change anything.
    int result{num + num2 + num3 + num4}; //Third method
    //All methods are completely viable and offer no difference whatsoever.
    cout << result << endl; //endl is used to signify the end of a line. You can also use the "<<" to print something new.

    auto foo = 124; //auto is used to automatically grab a variable's type
    decltype(foo) bar = 35; //decltype sets the new variable to the same type as the one in the parameters. Must be useful in situtations where the type is unknown.
    auto foobar = foo + bar;
    cout << foobar << endl;

    string mystring = " This is a string! "; //Strings. Nothing too different about them, they're the same as usual.
    string mystring2 = "This is also a string!";
    cout << mystring << mystring2; //Again, you can use "<<" to print something new.

    cout << endl << endl << "All together now!" << endl << result  << " " << foobar << mystring << mystring2 << endl;
    //As seen above, all the variables printed needn't be of the same type when using "<<"

    return 0; //Terminate the program.
}
