#include <iostream>
#include "cell.h"
#include"List.h"
using namespace std;




void menu (List <int> & L)
{







    int option;

    // cin >> option;



    while ( option!=6)
    {
        cout <<"\n\n";
        cout << "1. push new element on the beginning of the List" << endl;
        cout << "2.insert element somewhere into the list"<< endl;
        cout << "3. delete an element of your choosing "<< endl;
        cout << "4. clear the List "<< endl;
        cout << "5. show the list"<< endl;
        cout << "6. EXIT" << endl;
        cout << "choose option :\n "<< endl;
        cin >> option;
        cout << "\n";

        switch (option)
        {
            case 1 : // dodaj element na początku.
                L.push();
                break;
            case 2 :
                L.insert();
                break;
            case 3:
                L.del();
                break;
            case 4:
                L.delAll();
                break;

            case 5:
                L.show();
                break;

            case 6:
                break;
        }
    }

}



int main()
{

    return 0;
}