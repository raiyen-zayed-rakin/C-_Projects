#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float sum(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    if(a>b) return a-b;
    else if(b>a) return b-a;
    else return 0;
}
float multi(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
float power(float a, float b){
    return pow(a,b);
}
float sinX(float a, float b){
    cout<<"sinX result for a is "<<sin(a)<<endl;
    cout<<"sinX result for b is "<<sin(b)<<endl;
}
float cosX(float a, float b){
    cout<<"cosX result for a is "<<sin(a)<<endl;
    cout<<"cosX result for b is "<<sin(b)<<endl;
}
float tanX(float a, float b){
    cout<<"tanX result for a is "<<sin(a)<<endl;
    cout<<"tanX result for b is "<<sin(b)<<endl;
}
float exp(float a, float b){
    cout<<"Exponent result for a is "<<exp(a)<<endl;
    cout<<"Exponent result for b is "<<exp(b)<<endl;
}
int main()
{
    float a,b;
    cout<<"Enter the 1st number : "<<endl;
    cin>>a;
    cout<<"Enter the 2nd number : "<<endl;
    cin>>b;
    char oper;
    cout<<"Your operators are: +, -, *, /, ^, s(sinx), c(cosx), t(tanx), e(e^x)."<<endl<<endl;;
    cout<<"Enter a operator from above to process : "<<endl;
    cin>>oper;

    switch(oper)
    {
        case '+':
            cout<<"Sum result is "<<sum(a,b)<<endl;
            break;
        case '-':
            cout<<"Subtract result is "<<subtract(a,b)<<endl;
            break;
        case '*':
            cout<<"Multiplication result is "<<multi(a,b)<<endl;
            break;
        case '/':
            cout<<"Division result is "<<div(a,b)<<endl;
            break;
        case '^':
            cout<<"Power result is "<<power(a,b)<<endl;
            break;
        case 's':
            cout<<sinX(a,b)<<endl;
            break;
        case 'c':
            cout<<cosX(a,b)<<endl;
            break;
        case 't':
            cout<<tanX(a,b)<<endl;
            break;
        case 'e':
            cout<<exp(a,b)<<endl;
        default:
            cout<<"Invalid Operator, please try again."<<endl;
    }



    return 0;
}


