#include <iostream>

using namespace std;

int main()
{
    //**********if statement*********//
    
    /*if (a < 10) {
        cout << "this is true" << endl;
    }
    else if (a >= 10 && a <= 15) {
        cout << "this may be nearly true" << endl;
    }
    else {
        cout << "this isn't true" << endl;
    }*/


    //**********conditional operator*********//

    /*int a;
    cin >> a;
    a = (a < 10) ? 5:-5;
    cout << a;*/


    //**********for loop*********//

    //int n;
    //cin >> n;
    ////cout << n++ << endl;
    ////cout << ++n << endl;
    //for (int i = 0; i <= n; i+=2) {
    //    cout << i << endl;
    //}
    //cout << "End!" << endl;


    //**********while loop*********//

    /*int n;
    cin >> n;
    int i = 7;
    while (i <= n) {
        cout << i << endl;
        ++i;
    }
    cout << "End!" << endl; */


    //**********do while loop*********//

    /*int n;
    cin >> n;
    int i = 7;
    do {
        cout << "True" << endl;
        cout << i << endl;
        ++i;
    } while (i <= n);
    cout << "End!" << endl;*/


    //**********switch statement*********//

    /*int a;
    cin >> a;
    switch (a) {
    case 1:
        cout << "This is one " << endl;
        break;
    case 2:
        cout << "This is two " << endl;
        break;
    case 3:
        cout << "This is three " << endl;
        break;
    case 4:
        cout << "This is four " << endl;
        break;
    case 5:
        cout << "This is five " << endl;
        break;
    default:
        cout << "You type wrong number" << endl;
        
    cout << "Haha" << endl;
    }*/

    //**********break statement*********//

    /*for (int i = 0; i <= 10; i++) {
        cout << i << endl;
        if (i == 7) {
            break;
        }
    }
    cout << "End" << endl;*/

    //**********continue statement*********//

    /*for (int i = 0; i <= 10; i++) {
        if (i == 7) {
            continue;
        }
        cout << i << endl;
    }
    cout << "End" << endl;*/

    //**********goto statement*********//
    
    for (int i = 0; i <= 10; i++) {
        if (i == 7) {
            goto name;
        }
        cout << i << endl;
    }
cout << "Before Goto" << endl;
name:
    cout << "Because of Goto" << endl;
cout << "After Goto" << endl;
    return 0;
}



