#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=0&&a<=6)
    {
        switch (a)
        {
        case 0:
           cout<<"Chu Nhat";
            break;
        
        case 1:
         cout<<"Thu Hai";
         break;
        case 2:
        cout<<"Thu Ba";
        break;
        case 3:
        cout<<"Thu Tu";
        break;
        case 4:
        cout<<"Thu Nam";
        break;
        case 5:
        cout<<"Thu Sau";
        break;
        case 6:
        cout<<"Thu Bay";
        break;

        default:
            break;
        }
    }
    else
    {
        cout<<"F";
    }
}