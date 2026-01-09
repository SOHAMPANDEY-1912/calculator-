#include<bits/stdc++.h>
using namespace std;
double calculate(char c,double a,double b)
{
 switch(c)
 {
    case '+':
    return a+b;
    break;
    case '-':
    return a-b;
    break;
    case '*':
    return a*b;
    break;
    case '/':
    return (double)a/b;
    break;
    default:
    cout<<"exit";
 }
 return 0.0;
}
int main()
{
    double a;
    double b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"press + for adding numbers:"<<endl;
    cout<<"press - for subtracting numbers:"<<endl;
     cout<<"press * for multiplying numbers:"<<endl;
      cout<<"press / for dividing numbers:"<<endl;
      cout<<"press any other character to exit:"<<endl;
      char c;
      cin>>c;
      cout<<calculate(c,a,b);
 return 0;

}