//Functions
#include <iostream>
#include <string>
using namespace std;
//const double pi(3.14159265359);

/*
int countdown(int x){ //The variable type is to signify what the function will return. For example, this function returns an integer.
    for(int i = x; i != 0; i--){
        cout << i << endl;
    }
    cout << "...And done!" << endl << endl;
}

void print(string message){ //Using voud signifies that the functin doesn't return anything! You can even put void in the parameters to show there aren't any needed!
    cout << message;
}
*/

/*
void timesPi(double& m){ //The & sign sets the parameter to be a reference. This means that it modifies the variable directly. Since it's not making a copy, this makes the code more efficient.
    m*=pi;
}
*/

inline string namegen(const string& col, const string& anim){ //By setting the parameters to be constants, you tell the code it won't have to modify them. THis also helps the efficiency.
    return col+anim; //Also, using inline helps with efficiency in shorter functions. Essentially, it just inserts the code into wherever it's called.
}

int main(){
    /*int y;
    cout << "Set a numerical value for y. ";
    cin >> y;
    countdown(y);
    string a;
    print("Write a message to print using print()! ");
    cin >> a;
    print(a);
    */
    /*
    double f;
    cout << "Set a value for f. It'll be multiplied by pi. ";
    cin >> f;
    timesPi(f);
    cout << f;
    */

    cout << "Crappy Username Generator: V.1" << endl;
    string x;
    string y;
    cout << "Enter your favourite colour, then animal." << endl;
    cin >> x >> y;
    cout << namegen(x, y);


    return 0;
}
