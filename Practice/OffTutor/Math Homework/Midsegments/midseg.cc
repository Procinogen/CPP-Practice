#include <iostream>
#include <string>
using namespace std;
const char tab('\t');
const string fsp("     ");

int adddivx(const double a1, const double a2){
    double sum = a1 + a2;
    double sumdiv = sum / 2;

    cout << "M_ab = " << "(x_1 + x_2)" << endl;
    cout << fsp << "  ----------" << endl;
    cout << fsp  << fsp << " 2" << endl << endl;

    if(a2 >= 0){
        cout << "     = " << "(" << a1 << " + " << a2 << ")" << endl;
    }else{
        cout << "     = " << "(" << a1 << " - " << a2 * -1 << ")" << endl;
    }
    cout << "      ----------" << endl;
    cout << fsp <<  "     2" << endl << endl;

    cout << fsp << "=    " << sum << endl;
    cout << "      ----------" << endl;
    cout << fsp <<  "     2" << endl << endl;

    cout << fsp << "=    " << sumdiv << endl;


    return sumdiv;
}


int adddivy(const double a1, const double a2){
    double sum = a1 + a2;
    double sumdiv = sum / 2;

    cout << "M_ab = " << "(y_1 + y_2)" << endl;
    cout << fsp << "  ----------" << endl;
    cout << fsp  << fsp << " 2" << endl << endl;

    if(a2 >= 0){
        cout << "     = " << "(" << a1 << " + " << a2 << ")" << endl;
    }else{
        cout << "     = " << "(" << a1 << " - " << a2 * -1 << ")" << endl;
    }
    cout << "      ----------" << endl;
    cout << fsp <<  "     2" << endl << endl;

    cout << fsp << "=    " << sum << endl;
    cout << "      ----------" << endl;
    cout << fsp <<  "     2" << endl << endl;

    cout << fsp << "=    " << sumdiv << endl;


    return sumdiv;
}

int main(){
    bool stop(false);

    while(stop != true){
    cout << endl << endl << endl << endl << endl << endl;
    double x1;
    double x2;
    double y1;
    double y2;
    cout << "Type the value of 'x_1', 'x_2', 'y_1', and 'y_2' in that order." << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    adddivx(x1, x2);
    cout << endl << "=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
    adddivy(y1, y2);
    cout << endl << endl << "Stop Now? (Type '1' for true/Type '0' for false) ";
    cin >> stop;
    }
    return 0;
}
