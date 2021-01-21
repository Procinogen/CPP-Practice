#include <iostream>
#include <string>
using namespace std;

class user{
public:
    string name;
    bool isLoser;
};

int main(){
    user OP;
    OP.name = "OP";
    OP.isLoser = true;
    cout << OP.name << " " << OP.isLoser;
    return 0;
}
