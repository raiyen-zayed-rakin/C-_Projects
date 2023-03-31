#include <iostream>

using namespace std;

int main()
{
   int returnTotalBill(void);
   int totalBill=returnTotalBill();
   cout<<"your total bill amount is "<<totalBill<<endl;
   cout<<"Thank you for your order"<<endl;
}

int returnTotalBill(){
    char c;
    char item;
    char vegItem;
    char nonvegItem;
    int billAmount=0;
    char selectAgain;
    cout<<"--------Welcome to online Food order--------"<<endl;
    cout<<"--------Please follow bellow instructions--------"<<endl;
    cout<<"Step 1 : Please press s to start your order"<<endl;
    cout<<"Step 2 : You can order both veg and non-veg items"<<endl;
    cout<<"Step 3 : Please press a to select veg item"<<endl;
    cout<<"Step 4 : Please press b to select non-veg item"<<endl;
    cout<<"Step 5 : You will get your final BILL after your order"<<endl;
    start:
    cin>>c;
    if(c=='s' || c=='S'){
       items:
       cout<<"Please select your choice"<<endl;
       cout<<"(a)Veg items           (b)Non-veg items"<<endl;
       cin>>item;
       if(item=='a' || item=='A'){
            vegItemlist:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)Paneer   : Price : TK-250"<<endl;
            cout<<"(2)Burger   : Price : TK-50 "<<endl;
            cout<<"(3)Pizza    : Price : TK-100"<<endl;
            cout<<"(4)Chowmin  : Price : TK-150"<<endl;
            cout<<"(5)Veg roll : Price : TK-100"<<endl;
            cin>>vegItem;
            if(vegItem=='1'){
               billAmount+=250;
            }
            else if(vegItem=='2'){
                billAmount+=50;
            }
            else if(vegItem=='3'){
                billAmount+=100;
            }
            else if(vegItem=='4'){
                billAmount+=150;
            }
            else if(vegItem=='5'){
                billAmount+=100;
            }
            else{
                cout<<"You have entered wrong value, please try again."<<endl;
                goto vegItemlist;
            }
         cout<<"Do you want to add more items, y or n?"<<endl;
         cin>>selectAgain;
         if(selectAgain=='y' || selectAgain=='Y'){
            goto items;
         }
         else{
            return billAmount;
         }
       }
       else if(item=='b' || item=='B'){
         nonvegItemlist:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)Chicken   : Price : TK-350"<<endl;
            cout<<"(2)Burger   : Price : TK-100"<<endl;
            cout<<"(3)Pizza    : Price : TK-150"<<endl;
            cout<<"(4)Chowmin  : Price : TK-200"<<endl;
            cout<<"(5)Non veg roll : Price : TK-200"<<endl;
            cin>>nonvegItem;
            if(nonvegItem=='1'){
               billAmount+=350;
            }
            else if(nonvegItem=='2'){
                billAmount+=100;
            }
            else if(nonvegItem=='3'){
                billAmount+=150;
            }
            else if(nonvegItem=='4'){
                billAmount+=200;
            }
            else if(nonvegItem=='5'){
                billAmount+=200;
            }
            else{
                cout<<"You have entered wrong value, please try again."<<endl;
                goto nonvegItemlist;
            }
         cout<<"Do you want to add more items, y or n?"<<endl;
         cin>>selectAgain;
         if(selectAgain=='y' || selectAgain=='Y'){
            goto items;
         }
         else{
            return billAmount;
         }
       }
       else{
            cout<<"You have entered wrong value, please try again."<<endl;
            goto items;
       }
    }
    else{
        cout<<"You have entered wrong value, please press s."<<endl;
        goto start;
    }

    return billAmount;

}
