#include <iostream>
#include <string>
class AccountManagement
{
private:
    String AccountName;
    Double Balance;

public:
    AccountManagement::AccountManagement(string name,double bal)
    {
       AccountName = name;
       if(bal > 0)
           Balance = bal;

       if(bal<0 || bal==0)
           errormessage();
    }


    void SetName(string name)
    {
        AccountName = name;
    }
    string GetName()
    {
        return AccountName;
    }
    void setBal(double amt)
    {
        if(amt>0)
            Balance = amt;

        if(amt<0 || amt==0)
            errormessage();
    }

    double getBal()
    {
        return Balance;
    }
    void errormessage()
    {
        cout<< "You have entered an incorrect Amount";
    }
                        };

