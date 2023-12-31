#include <iostream>
using namespace std;

int main(){
    int look; 
    int playerChoice;
    int nestedChoice;
    bool findkey = true;
    cout << "You awaken in darkness. You have no memory as to how you got there.\n\n";
    cout << "What will you do?\n\n";
    cout << "1. Look\n";

    cin >> look;

    if(look = 1){
        cout << "You see that you are in a dark, damp cell. There is a rusty iron door ahead.\n\n";
    }
    while (findkey){
    cout << "1. Try door\n";
    cout << "2. Search for key\n";

    cin >> playerChoice;

    switch(playerChoice){
        case 1:
            cout << "You don't have the key\n\n";
            break;
        case 2:
            cout << "Where will you search?\n\n";
            cout << "1. Under the bed\n";
            cout  << "2. In the matress\n";
            cin >> nestedChoice;
            if (nestedChoice == 1){
                cout << "You don't find anything.\n\n";
            }
            else if (nestedChoice == 2){
                cout << "Rippin open the matress, you find a small bronze key inside\n\n. You use it to excape the cell. Congraduations.\n\n";
                findkey = false;
            }
    }
    }





}
