#include<iostream>
using namespace std;
class employee
{
public:
  employee(double x,string y,string z){
    monthly_salary=x;
    first_name=y;
    last_name=z;
  }
  void raise_salary(){
      double temp;
      monthly_salary=monthly_salary*12;
      monthly_salary=((10*monthly_salary)/100)+monthly_salary;
  }
  string get_fst_name(){
    return first_name;
  }
  string get_lst_name(){
    return last_name;
  }
  double get_salary(){
    if(monthly_salary>=0)
    return monthly_salary;
    else
    {return 0;}
  }
private:
  string first_name,last_name;
  double monthly_salary;

};

int main()
{
  employee a1(15000,"Ali","Ahmad"),a2(20000,"Usama","Asghar");
  a1.raise_salary();a2.raise_salary();
  std::cout <<"Salary of "<< a1.get_fst_name()<<" "<<a1.get_lst_name()<<" is = "<<a1.get_salary()<<'\n';
  std::cout <<"Salary of "<< a2.get_fst_name()<<" "<<a2.get_lst_name()<<" is = "<<a2.get_salary()<<'\n';

}
