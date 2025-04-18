#include "stack.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    string input("");
    int numInput;
    int size;

    while (true){

        cout << "Welcome To DS Controls" << endl;
        cout << "Type what you want to try" << endl << endl;
        cout << "s  : stack control" << endl;
        cout << "q  : queue control" << endl;
        cout << "l  : linked list control" << endl;
        cout << "ls : linked stack control" << endl;
        cout << "lq : linked queue control" << endl;
        cout << "t  : tree control" << endl;
        cout << "ex : end program" << endl;

        getline(cin, input);

        if (input == "s"){
            cout << "You choose stack. PLZ input size. >> ";
            
            cin >> size;
            cin.ignore();
            Stack myStack(size);

            while (true){
                cout << "push | pop | print | top | reverse | quit >> ";
                cin >> input;

                if (input == "push"){
                    cin >> numInput;
                    myStack.push(numInput); 
                }
                else if (input == "pop"){
                    cout << myStack.pop() << " is popped" << endl; 
                }
                else if (input == "print"){
                    myStack.printAll(); 
                }
                else if (input == "reverse"){
                    myStack.reverseStack(); 
                    cout << "complete" << endl;
                }
                else if (input == "top"){
                    cout << myStack.topNum() << " is top" << endl;; 
                }

                else if (input == "quit"){
                    cout << "Stack quit" << endl;
                    break;
                }
                else{
                    cout << "input invalid PLZ try again" << endl;
                }
            }
        } 
        else if (input == "ex"){
            cout << "program ended bye!";
            break;
        }
    }


 


    return 0;
}