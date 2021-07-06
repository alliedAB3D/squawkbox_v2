#include <iostream>

using namespace std;

int main()
{
    string boiler;
    cout << "What Model boiler is installed?\n";
    cin >> boiler;
    cout << "Customer Boiler Is: " << boiler << endl;
    if(boiler == "Hurst")
{
        cout << "bad choice these suck" << endl;
    }
    else
{
        cout << "Good Choice these are awesome" << endl;
    }



}
return 0;
}
