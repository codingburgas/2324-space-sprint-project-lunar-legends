#include "Header Files/menu.h"

using namespace std;

int main() {
    //int choice;

    menu(choice);
        //cin >> choice;

        switch (choice)
        {
        case 1:
        
            cout << "Case1" << endl;
            break;
        
        case 2:
        
            cout << "Case2" << endl;
            break;
        
        case 3:
        
            cout << "Case3" << endl;
            break;
        
        case 4:
        
            cout << "End of Program" << endl;
            break;
        
        default:
            cout << "Not a Valid Choice." << endl;
            cout << "Choose again." << endl;
            break;
        }
}