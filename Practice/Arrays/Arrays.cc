//Arrays
#include <iostream>
#include <string>
using namespace std;

int main(){
    int foo[3]; //Creating an array. The number in the square brackets indicates how many objects are in it.
    int bar[3] = {1, 2, 3}; //Use the braces to initialize the variable.
    int lorem[] {41, 42, 43, 44, 45}; //If you leave the sqare brackets empt when initializing it'll automatically scale to however many objects are inside.
    //You also don't need an equal sign when declaring an array.

    //cout << bar[1]; //To access a value of the array, use the square brackets and the numerical place of the value. (Remember, computers start with 0.)

    for(int i = (sizeof(bar)/sizeof(bar[0]) - 1); i > -1; i--){
        cout << i << ": " << bar[i] << endl;

    }
    return 0;
}
