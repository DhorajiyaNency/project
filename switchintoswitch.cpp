//switch into switch...
#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
    cout<<"\n\n ENTER : ";
    cin>>n;
    switch (n)
    {
        int s;
        if(n=1)
        {
            case 1:
            cout<<"\n SAVING ACCOUNT"; 
            do{
                cout<<"\n\n Enter in case1 : ";
                cin>>s;
                switch (s)
                {
                case 5:
                    cout<<"\n Saving ac.~~~~~~~~~~~~1";
                    break;
                case 6:
                    cout<<"\n Saving detail~~~~~~~~~2";
                    break;
                case 7:
                    cout<<"\n Saving detail~~~~~~~~~3";
                    break;
                case 10:
                    cout<<"\n Exit";
                    break;
                default:
                    cout<<"\n Wrong";
                    break;
                }
            }while (s!=10);       
            break;                
        }
        else if(n=2)
        {
            case 2:
            cout<<"\n CURRENT ACCOUNT"; 
            do
            {
                cout<<"\n\n Enter in case2 : ";
                cin>>s;
                switch (s)
                {
                case 15:
                    cout<<"\n Current ac.~~~~~~~~~~1";
                    break;
                case 16:
                    cout<<"\n Current detail~~~~~~~2";
                    break;
                case 17:
                    cout<<"\n Current detail~~~~~~~3";
                    break;
                case 20:
                    cout<<"\n Exit";
                    break;
                default:
                    cout<<"\n Wrong";
                    break;
                }
            }while(s!=20);
            break;
        }
        case 0:
            cout<<"\n EXIT ALL";
            break;
        
        default:
            cout<<"\n WRONG";
            break;
    }
    }while(n!=0);
}

/*   //output

ENTER : 1

SAVING ACCOUNT

    Enter in case1 : 4

    Wrong

    Enter in case1 : 5

    Saving ac.~~~~~~~~~~~~1

    Enter in case1 : 6

    Saving detail~~~~~~~~~2

    Enter in case1 : 7

    Saving detail~~~~~~~~~3

    Enter in case1 : 8

    Wrong

    Enter in case1 : 10

    Exit

ENTER : 2

CURRENT ACCOUNT

    Enter in case2 : 15

    Current ac.~~~~~~~~~~1

    Enter in case2 : 16

    Current detail~~~~~~~2

    Enter in case2 : 17

    Current detail~~~~~~~3

    Enter in case2 : 18

    Wrong

    Enter in case2 : 20

    Exit

ENTER : 3

WRONG

ENTER : 0

EXIT ALL

*/
