#include "header.h"
#include <vector>
int main()
{
    QCoreApplication a(argc, argv);
    vector<AccountManagement> Clients;

    AccountManagement client1("John Greene",1000);


    char opt = 'y';
    while(opt == 'y')
    {
        String name;
        double bal;
        cout<< "Enter the Clients Name.   " << endl;
        cin >> name;
        cout << "Enter the Clients Balance.  " << endl;
        cin >> bal;

        AccountManagement client(name,bal);

        cout << "do you want to enter any other clients? Press n if no and y if yes. " << endl;
        cin >> opt;
    }

}

