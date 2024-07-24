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