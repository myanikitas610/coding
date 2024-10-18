#include <iostream>
using namespace std;

int main(){
    string username = "mya"; 
    string password = "skye"; 

    cout << "Username: ";
    cin >> username;
    cout << "Passwrod: ";
    cin >> password;


    if (username == "mya" && password == "skye")
        cout << "You logged in successfully";
    else
        cout << "Wrong information try again";
}