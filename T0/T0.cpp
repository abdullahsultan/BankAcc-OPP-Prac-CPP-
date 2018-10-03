#include<iostream>
//#include<string>
using namespace std;
//T0
class Account
{
public:
Account()
{
  
}
Account (double initalbalance)
{
  balance = initalbalance;
}
void credit (double amount)
{
  balance=amount+balance;
}
double getBalance(double x)
{
  return balance;
}
double withdraw(double paisa)
{
  if(paisa<=balance)
  {
    balance=balance-paisa;
    return balance;
  }
  else
   return 0;
}

private:
double balance;
};
//T1

//T3

// Main
int main ()
{
Account acct1(45),acct2; //T0
  //T1
//T0
double withdraw;
std::cout<<"Account 1 Balance is: "<<acct1.getBalance(200)<<"\n";
acct1.credit(2323) ;
std::cout<<"Account1Balanceis:"<<acct1.getBalance(200)<<"\n";
std::cout << "Enter amount to withdraw" << '\n';
cin>>withdraw;
withdraw=acct1.withdraw(withdraw);
if(withdraw == 0)
cout<<"\n Amount exceeded than balance \n";
else
cout<<"Your remaining balance = "<<withdraw<<'\n';
//T1


//T3


return 0;

}
