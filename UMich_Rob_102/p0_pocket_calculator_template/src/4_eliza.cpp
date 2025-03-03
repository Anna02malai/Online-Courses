#include<iostream>
#include<string>
using namespace std;

int main() {

    string name, response;

    cout << "Hello, I am Eliza. I\'ll be your therapist today." << "\n";
    cout << "Tell me, what is your name?" << "\n"; 
    getline(cin, name);

    cout << "Nice to meet you, " << name << ", how can I help you today?" << "\n";
    cout << "What is bothering you?" << "\n";
    getline(cin, response);

    cout << "\"" << response << "\"? Please tell me more. How does that make you feel?" << "\n";
    getline(cin, response);

    cout << "Intresting intreseting........ well would you look at the time I am afriad we will have to end the session here." << "\n";
    cout << "Have a good rest of your day, " << name << ", I hope to see you again soon!" << "\n";

}