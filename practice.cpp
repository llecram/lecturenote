#include<iostream>
using namespace std;
class integer{
  protected:
    int valor;
  public:
  integer(const int valor=0){
    this->valor=valor;
    cout<<"value created"<<valor<<endl;};
  void setVal(const int valor){
    this->valor=valor;
    cout<<"value created"<<valor<<endl;
  }
};
/*class integrwrapper{
  public:
  integer valorx;
  integrwrapper(){cout<<"integerwrapper default constructor"<<endl;};
};*/
int main(){
 integer a[]={integer(3),integer(6)};
  integer j;
  j.setVal(8);

  return 0;
}
