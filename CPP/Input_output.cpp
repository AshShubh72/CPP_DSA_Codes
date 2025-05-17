#include <iostream>
#include <string>
using namespace std;




int main(){

    /*
    int age{21};
    int year{2005};

    cout << "Enter you age plz"<< age << endl;

    cout << "Entert the age through cin " << endl;


    // also possible Cin >> age >> name;


    cin >> age;
    
    string name;
    cout << "Enter you name plz :" << endl;
    cin >> name;

    cout << "Your name is :" << name << " and your are " << age << "year old " << endl;


    */

    // Data with spaces

    string full_name;

    cout << "Plz enter you full name with spaces " << endl;

    getline(cin, full_name);
    int age;

    cin >> age;

    cout << "Your name is :" << full_name << " and your are " << age << "year old " << endl;


    return 0;
}