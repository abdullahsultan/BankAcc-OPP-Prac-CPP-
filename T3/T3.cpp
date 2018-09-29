#include<iostream>
#include<string>
using namespace std;
class Invoice
{
public:
  Invoice(string num,string des,int qty,double pr){
    number=num;description=des;quantity=qty;price=pr;
  }
  double getInvoiceAmount()
  {return (quantity*price);}
  string getnum(){return number;}
  string getdes(){return description;}
  int getqty(){return quantity;}
  double getprice(){return price;}
private:
  string number;
  string description;
  int quantity;
  double price;
};
int main()
{
  Invoice tea("1","Tea",2,250),soap("2","Soap",5,50),cookies("3","cookies",3,20);
   cout<<"Item    Description   Quantity    Price"<<'\n';
   cout<<tea.getnum()<<"    "<<tea.getdes()<<"    "<<tea.getqty()<<"    "<<tea.getprice()<<'\n';
   cout<<soap.getnum()<<"    "<<soap.getdes()<<"    "<<soap.getqty()<<"    "<<soap.getprice()<<'\n';
   cout<<cookies.getnum()<<"    "<<cookies.getdes()<<"    "<<cookies.getqty()<<"    "<<cookies.getprice()<<'\n';
   double grand_total=tea.getInvoiceAmount()+soap.getInvoiceAmount()+cookies.getInvoiceAmount();
   cout<<"Grand total = "<<grand_total<<endl;
}
