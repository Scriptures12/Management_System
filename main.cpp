#include <iostream>
#include <fstream>
#include <string.h>


using namespace std;

void login();

void Register();

void forgotpassword();

int Qrooms=60, Qpasta=80, Qnoodles=55, Qshake=100, Qchicken=200, Qburger=120;

    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;


void signin(){
    string passwr = "amdmin123";
    string password;
    string owner;
    int okk;
    string manager = "KINGSLEY" ;
        cout<<"PLEASE MAKE SURE YOU ARE THE RIGHTFULL OWNER TO ACCESS THIS INFORMATION"<<endl;
        cout<<"please enter admin unique code";
        cin>>okk;
        cout<<"  "<<endl;
        if(okk == 123){
            cout<<"please enter your name:  ";
            cin>>owner;
            if(owner == manager){
                cout<<"please enter your password to verify that it is you:  ";
                cin>>password;
                if(password == passwr){
                 cout<<"Successfully verified"<<endl;
                 cout<<"  "<<endl;
                 cout<<"\n\t\t Details of sales and collection";
                 cout<<"\n\t\t Number of rooms we had:  "<<Qrooms;
                 cout<<"\n\t\t Number of rooms we gave out for rent:  "<<Srooms;
                 cout<<"\n\t\t Remaining rooms:  "<<Qrooms-Srooms;
                 cout<<"\n\t\t Total rooms collection for the day:  "<<Total_rooms;



                 cout<<"\n\t\t Number of pastas we had:  "<<Qpasta;
                 cout<<"\n\t\t Number or pastas we sold:   "<<Spasta;
                 cout<<"\n\t\t Remaining pasta:   "<<Qpasta-Spasta;
                 cout<<"\n\t\t Total pasta collection for the day:  "<<Total_pasta;


                 cout<<"\n\t\t Number of noodles we had:  "<<Qnoodles;
                 cout<<"\n\t\t Number or noodles we sold:   "<<Snoodles;
                 cout<<"\n\t\t Remaining noodles:   "<<Qnoodles-Snoodles;
                 cout<<"\n\t\t Total noodles collection for the day:  "<<Total_noodles;

                 cout<<"\n\t\t Number of chicken-rolls we had:  "<<Qchicken;
                 cout<<"\n\t\t Number or chicken-rolls  we sold:   "<<Schicken;
                 cout<<"\n\t\t Remaining chicken-rolls :   "<<Qchicken-Schicken;
                 cout<<"\n\t\t Total chicken-rolls  collection for the day:  "<<Total_chicken;


                 cout<<"\n\t\t Number of shakes we had:  "<<Qshake;
                 cout<<"\n\t\t Number or shakes we sold:   "<<Sshake;
                 cout<<"\n\t\t Remaining shake:   "<<Qshake-Sshake;
                 cout<<"\n\t\t Total shakes collection for the day:  "<<Total_shake;

                }else{
                    cout<<"wrong password"<<endl;
                }
            }
        }


    }

int main()
{
    int quant;
    int choice;


    //Quantity





    cout<<"\t\t\t===================================================================="<<endl;
    cout<<"\t\t\t\t      HELLO AND WELCOME TO LINKAGES HOTEL"<<endl;
    cout<<"\t\t\t===================================================================="<<endl;

    int start;
    char tellus;
    cout<<"  "<<endl;
    cout<<"\t\t\t___________________     FILL IN YOUR DETAILS     _______________\n\n\n";
    cout<<endl;


    cout<<"\t| Enter 1 to LOGIN if already have an account               |"<<endl;
    cout<<"\t| Enter 2 to REGISTER if you don not have an account        |"<<endl;
    cout<<"\t| Enter 3 if you FORGOT youR password                       |"<<endl;
    cout<<"\t| Enter 4 to Exit                                           |"<<endl;
    cout<<"\n\t\t\t please select your choice:      ";
    cin>>start;

    cout<<endl;

    switch(start)
    {
        case 1:
            login();
            break;

        case 2:
            Register();
            break;

        case 3:
            forgotpassword();
            break;

        case 4:
            cout<<"\n\t\t\t  Thank you,   ";


        default:
           system("cls");
           cout<<"\t\t\t error!!! please select from the menu below \n"<<endl;

           main();
    }

    cout<<"\n\t Quantity of items we have:   ";
    cout<<"\n  Rooms available:   "<<Qrooms;


    cout<<"\n Quantity of pasta:  "<<Qpasta;


    cout<<"\n Quantity of burger:  "<<Qburger;


    cout<<"\n Quantity of noodles:  "<<Qnoodles;


    cout<<"\n Quantity of chicken-roll:  "<<Qchicken;


    cout<<"\n Quantity of shakes:  "<<Qshake;


     m:
    cout<<"\n\t\t\t\t please select from the menu options:   ";
        cout<<"\n  1. Rooms"<<endl;
        cout<<"    2. Pasta"<<endl;
        cout<<"    3. Burger"<<endl;
        cout<<"    4. Noodles"<<endl;
        cout<<"    5. Chicken-roll"<<endl;
        cout<<"    6. Shake"<<endl;
        cout<<"  "<<endl;
        cout<<"PLEASE ONLY ADMINS ARE ALLOWED ONLY IN THEIS SECTION"<<endl;
        cout<<"  7. information regarding sales and collection"<<endl;
        cout<<"  8. Exit"<<endl;



        cout<<"please enter your choice:   ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter the number of rooms you want:  ";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"n\n\t\t "<<quant<<"These/this  rooms/room have been allocated to you"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qrooms-Srooms<<"remaining in the hotel"<<endl;
                break;

               case 2:
            cout<<"Enter pasta quantity:  ";
            cin>>quant;
            if(Qpasta-Spasta  >=quant)
            {
                Qpasta=Spasta+quant;
                 Total_pasta=Total_pasta+quant*120;
                cout<<"n\n\t\t "<<quant<<"Pasta is the order"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qpasta-Spasta <<"pastas remaining in the hotel"<<endl;
                break;


               case 3:
            cout<<"Enter burger quantity:  ";
            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Qburger=Sburger+quant;
                Total_burger=Total_burger+quant*150;
                cout<<"n\n\t\t "<<quant<<"Pasta is the order"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qburger-Sburger<<"burgers remaining in the hotel"<<endl;
                break;

            case 4:
            cout<<"Enter noodles quantity:  ";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant)
            {
                Qnoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*350;
                cout<<"n\n\t\t "<<quant<<"noodles is the order"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qnoodles-Snoodles<<"noodles remaining in the hotel"<<endl;
                break;

             case 5:
            cout<<"Enter chicken-roll quantity:  ";
            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Qchicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*450;
                cout<<"n\n\t\t "<<quant<<"chicken-rolls is the order"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qchicken-Schicken<<"chicken-rolls remaining in the hotel"<<endl;
                break;

             case 6:
            cout<<"Enter shake quantity:  ";
            cin>>quant;
            if(Qshake-Sshake >=quant)
            {
                Qshake=Sshake+quant;
                Total_shake=Total_shake+quant*450;
                cout<<"n\n\t\t "<<quant<<"shakes is the order"<<endl;

            }
            else
            {
                cout<<"\n\only "<<Qshake-Sshake<<"shakes remaining in the hotel"<<endl;
                break;

             case 7:
                 signin();

             case 8:
                exit(0);

             default:
                cout<<"please select the number mentioned above"<<endl;


            }

            }

            }

            }

            }

            }

        }
goto m;


    return 0;
}


void login()
{
    int count;
    string userid, password, id, pass;
    system("cls");
    cout<<"\t\t\t please enter the user name and password \n";
    cout<<"\t\t\t USERNAME:  ";
    cin>>userid;
    cout<<"\t\t\t  PASSWORD:  ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if(id==userid  && pass==password)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<userid<<"\n your LOGIN is successful \n  THANKS!! for logging in";

    }else
    {
        cout<<"\n LOGIN ERROR!!  \n please check your user name and password"<<endl;
        main();
    }
}

void Register()
{
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter your User name:   ";
    cin>>ruserid;
    cout<<"\t\t\t  Create your PasSword:   ";
    cin>>rpassword;


    ofstream f1("records.txt", ios::app);
    f1<<ruserid<<"  "<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t  Registration is successful ! \n";
    main();
}

void forgotpassword()
{
    int option;
    system("cls");

    cout<<"\t\t\t\ you forgot the password no worries \n";
    cout<<"press one to search id by username"<<endl;
    cout<<"press 2 to go back to the main menu  "<<endl;
    cout<<"\t\t\t Enter your choice:   ";
    cin>>option;
    switch(option)
    {
    case 1:
        {
            int count=0;
            string suserid,sid,spass;
            cout<<"\t\t\t enter the user name which you remember:  ";
            cin>>suserid;

            ifstream f2("records.txt");
            while(f2>>sid>>spass)
            {
                if(sid==suserid)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout<<"\t\t your account is found"<<endl;
                cout<<"\t\t your password is "<<spass<<endl;
                main();
            }
            else
            {
                cout<<"\t\t\t sorry your account is not found"<<endl;
                main();
            }
            break;
        }
    case 2:
        {
            main();
        }
    default:
        cout<<"\t\t\t wrong choice please try again "<<endl;
        forgotpassword();
    }

}




