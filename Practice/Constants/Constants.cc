//Constants Practice
#include <iostream>
#include <string>
using namespace std;

#define BAR "bar" //You can use #define, too. It's just like replacing the word "bar" with the value of bar.

//Constants are sorta like variables, but they can't be changed. They're constant. Just like the name implies. There are obvious advantages here.
const char tab('\t');
const string foo("foo");

int main(){
    cout << foo << endl;
    cout << tab << "This is tabbed" << endl;
    cout << foo << BAR << endl;
}
