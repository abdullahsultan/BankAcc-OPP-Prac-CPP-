#include<iostream>
using namespace std;
class Account
{
public:
Account (double initalbalance)
{/∗Add Code here∗/}
/∗add amount to  the  balance∗/
voidc redit (double amount)
{/∗Add Code here∗/}
/∗Return  the  account  Balance∗/
double getBalance()
{return balace;}

private:
double balance;
// data member ( attribute )  that  stores  the  balance
}
;
int
main (inta rgc ,char const∗argv[ ] )
{
Account acct1(45);
std::cout<<”Account 1 Balance is: ”<<acct1.getBalance( )<<’\n ’ ;
acct1.credit( 2323 ) ;
std::cout<<”Account1Balanceis:”<<
acct1.getBalance( )<<’\n’;
return 0;
}
