//size of datatypes
#include <iostream>
using namespace std;
int main()
{
    int intvar;
    float floatvar;
    double doublevar;
    char charvar;
    string stringvar;
    bool boolvar;
    cout<<"enter integer variable:";
    cin>> intvar;
    cout<<"size of integer:"<<sizeof(intvar)<<endl;
    cout<<"enter float variable:";
    cin>> floatvar;
    cout<<"size of float:"<<sizeof(floatvar)<<endl;
    cout<<"enter double variable:";
    cin>> doublevar;
    cout<<"size of double:"<<sizeof(doublevar)<<endl;
    cout<<"enter char variable:";
    cin>> charvar;
    cout<<"size of char:"<<sizeof(charvar)<<endl;
    cout<<"enter string variable:";
    cin>> stringvar;
    cout<<"size of string:"<<sizeof(stringvar)<<endl;
    cout<<"enter boolean variable:";
    cin>> boolvar;
    cout<<"size of boolean:"<<sizeof(boolvar);
}
/* OUTPUT:
enter integer variable:2
size of integer:4
enter float variable:2.4
size of float:4
enter double variable:2.54
size of double:8
enter char variable:a
size of char:1
enter string variable:ame
size of string:32
enter boolean variable:1
size of boolean:1
    */
