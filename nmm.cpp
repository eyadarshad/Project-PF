#include <iostream>
using namespace std;

char fun1()
{
    char w;
    cout<<"Wrong answer! Type 'H' for Hint and 'R' to Retry without Hint : ";
    cin>>w;
    return w;
}
int main()
{
    int i, j, n;
    for(i = 1; i<=1; i++)
    {
        while(true)
        {
            if(i == 1)
            {   
                string store;
                string one = "SupraMan",two = "Clark Dent",three = "Duckler",four = "Man of stainless steel";
                cout<<"\t\t\t\tQuestion "<<i<<endl;
                cout<<"Who was Hitler The Great? "<<endl;
                cout<<"A) "<<one<<endl;
                cout<<"B) "<<two<<endl;
                cout<<"C) "<<three<<endl;
                cout<<"D) "<<four<<endl;
                cout<<"Enter Answer (A/B/C/D) : ";
                cin>> store;
                if(store == "C")
                {
                    cout<<"correct answer";
                    break;
                }
                else if (store == "A", "B", "D")
                {
                    char w = fun1();
                    if( w =='H')
                    {
                        char a;
                        cout<<" Hint : Donald Duck\n Enter any alphabet to continue to Question "<< i << " : ";
                        cin>>a;
                        continue;
                    }
                    else if(w == 'R')
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"Invalid key pressed!";
                    }

                }
                else
                {
                    cout<<"Wrong Keyword! Try Again."<<endl;
                    continue;
                }
            }
            // if(i == 2)
            // {   
            //     string store;
            //     string one = "SupraMan",two = "Clark Dent",three = "Duckler",four = "Man of stainless steel";
            //     cout<<"\t\t\t\tQuestion "<<i<<endl;
            //     cout<<"Who was Hitler The Great? "<<endl;
            //     cout<<"A) "<<one<<endl;
            //     cout<<"B) "<<two<<endl;
            //     cout<<"C) "<<three<<endl;
            //     cout<<"D) "<<four<<endl;
            //     cout<<"Enter Answer (A/B/C/D) : ";
            //     cin>> store;
            //     if(store == "C")
            //     {
            //         cout<<"correct answer";
            //         break;
            //     }
            //     else if (store == "A", "B", "D")
            //     {
            //         char w;
            //         cout<<"Wrong answer! Type 'H' for Hint and 'R' to Retry without Hint : ";
            //         cin>>w;
            //         if( w =='H')
            //         {
            //             char a;
            //             cout<<" Hint : Donald Duck\n Enter any alphabet to continue to Question "<< i << " : ";
            //             cin>>a;
            //             continue;
            //         }
            //         else if(w == 'R')
            //         {
            //             continue;
            //         }
            //         else
            //         {
            //             cout<<"Invalid key pressed!";
            //             break;
            //         }

            //     }
            // }
        }
    }
    return 0;
}