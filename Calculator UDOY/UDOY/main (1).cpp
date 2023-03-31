#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    float calculator(void);
    calculator();
}

float calculator(){

    char c,again;
    int oper;
    float a,b,result;
    char selector;
    int power;

    cout<<"Welcome to the calculator application!"<<endl;
    cout<<"Press s to start."<<endl;
    start1:
    cin>>c;
    if(c=='s' || c=='S'){
        start11:
        cout<<"Please, enter an Serial number to use the following operator."<<endl;
        start2:
        cout<<"1. + "<<endl<<"2. - "<<endl<<"3. / "<<endl<<"4. * "<<endl<<"5. ln "<<endl<<"6. ex "<<endl<<"7. sinX "<<endl<<"8. cosX "<<endl<<"9. tanX "<<endl<<"10. X^pow "<<endl;
        cin>>oper;

        switch(oper){
            case 1:
                cout<<"Enter 1st value: ";
                cin>>a;
                cout<<"Enter 2nd value: ";
                cin>>b;
                result=a+b;
                cout<<"End result of addition is "<<result<<endl;
                cout<<"do you want to try again? y or n?"<<endl;
                cin>>again;
                if(again=='y' || again=='Y'){
                    goto start11;
                }
                else{return 0;}
                break;
            case 2:
                cout<<"Enter 1st value: ";
                cin>>a;
                cout<<"Enter 2nd value: ";
                cin>>b;
                result=a-b;
                cout<<"End result of subtraction is "<<result<<endl;
                cout<<"do you want to try again? y or n?"<<endl;
                cin>>again;
                if(again=='y' || again=='Y'){
                    goto start11;
                }
                else{return 0;}
                break;
            case 3:
                cout<<"Enter 1st value: ";
                cin>>a;
                cout<<"Enter 2nd value: ";
                cin>>b;
                result=a/b;
                cout<<"End result of division is "<<result<<endl;
                break;
            case 4:
                cout<<"Enter 1st value: ";
                cin>>a;
                cout<<"Enter 2nd value: ";
                cin>>b;
                result=a*b;
                cout<<"End result of multiplication is "<<result<<endl;
                break;
            case 5:
                cout<<"Enter a or b: ";
                start3:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    result=log(a);
                    cout<<"End result of log(a) is "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    result=log(b);
                    cout<<"End result of log(b) is "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start3;
                }
                break;
            case 6:
                cout<<"Enter a or b: ";
                start4:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    result=exp(a);
                    cout<<"End result e^a is "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    result=exp(b);
                    cout<<"End result of e^b is "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start4;
                }
                break;
            case 7:
                cout<<"Enter a or b: ";
                start6:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    result=sin(a);
                    cout<<"End result of sin(a) = "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    result=sin(b);
                    cout<<"End result of sin(b) = "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start6;
                }
                break;
            case 8:
                cout<<"Enter a or b: ";
                start7:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    result=cos(a);
                    cout<<"End result of cos(a) = "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    result=cos(b);
                    cout<<"End result of cos(b) = "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start7;
                }
                break;
            case 9:
                cout<<"Enter a or b: ";
                start8:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    result=tan(a);
                    cout<<"End result of tan(a) = "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    result=tan(b);
                    cout<<"End result of tan(b) = "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start8;
                }
                break;
            case 10:
                cout<<"Enter a or b: ";
                start5:
                cin>>selector;
                if(selector=='a'){
                    cout<<"Enter value for a: "<<endl;
                    cin>>a;
                    cout<<"Enter power: "<<endl;
                    cin>>power;
                    result=pow(a,power);
                    cout<<"End result of X^pow is "<<result<<endl;
                }
                else if(selector=='b'){
                    cout<<"Enter value for b: "<<endl;
                    cin>>b;
                    cout<<"Enter power: "<<endl;
                    cin>>power;
                    result=pow(b,power);
                    cout<<"End result of X^pow is "<<result<<endl;
                }
                else{
                    cout<<"Access denied, please enter a or b."<<endl;
                    goto start5;
                }
                break;
            default:
                cout<<"You have entered wrong value, Please enter a valid one."<<endl;
                goto start2;
        }
    }
    else{
        cout<<"You entered the wrong value, please enter s."<<endl;
        goto start1;
    }

}
