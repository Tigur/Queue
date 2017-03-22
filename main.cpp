#include <iostream>
#include "cell.h"
#include"List.h"
using namespace std;




void menu (List <int> & L)
{







    int option;

    // cin >> option;



    while ( option!=5)
    {
        cout <<"\n\n";
        cout << "1. push new element on the beginning of the Queue" << endl;
        cout << "2.pull element from Queue"<< endl;

        cout << "3. clear the Queue "<< endl;
        cout << "4. show the Queue"<< endl;
        cout << "5. EXIT" << endl;
        cout << "choose option :\n "<< endl;
        cin >> option;
        cout << "\n";

        switch (option)
        {
            case 1 : // dodaj element na początku.
                L.push();
                break;
            case 2 :
               cout << L.pull() <<endl;
                break;


            case 3:
                L.delAll();
                break;

            case 4:
                L.show();
                break;

            case 5:
                break;


        }
    }

}



int main()
{

    List <int> L;
    menu(L);


    return 0;
}