#include <bits/stdc++.h>
using namespace std;

struct Hesab
{
    string adam;
    unsigned int Hazineh_naqdi;
    unsigned int Hazineh_online;
    unsigned int DarAmad_naqdi;
    unsigned int DarAmad_online;
    unsigned int Aqsat;
    int time_qest;
}Shaftaloo;

class Karbar
{
    public:
        void Get_Karbar(string U)
        {
            //cout << "Username:"<<endl;
            //cin >> P;
            //cout <<"Password:"<<endl;
            cin >> U;
            //Main_Password = P;
            Main_User = U;
        }
        void Money_cash()
        {
            unsigned int n;
            cin >> n;
            cash = n;
        }
        void Money_Notcash()
        {
            unsigned int w;
            cin >> w;
            Notcash = w;
        }
        void NoMoney_cash()
        {
            unsigned int h;
            cin >> h;
            Hazienh_cash = h;
        }
        void NoMoney_Notcash()
        {
            unsigned int j;
            cin >> j;
            Hazineh_Notcash = j;
        }
        void Loan()
        {
            unsigned int L;
            cin >> L;
            Bedehi = L;
        }
        void Teem()
        {
            int k;
            cin >> k;
            timee = k;
        }
        unsigned int put_cash()
        {
            return cash;
        }
        unsigned int put_qeircash()
        {
            return Notcash;
        }
        unsigned int put_hazineh_cash()
        {
            return Hazienh_cash;
        }
        unsigned int put_hazineh_no_cash()
        {
            return Hazineh_Notcash;
        }
        unsigned int put_bedehi()
        {
            return Bedehi;
        }
        int time_loan()
        {
            return timee;
        }
    protected:
        string Main_User;
        unsigned int cash;
        unsigned int Notcash;
        unsigned int Hazienh_cash;
        unsigned int Hazineh_Notcash;
        unsigned int Bedehi;
        int timee;
        //unsigned int Main_Password;
}User;

class Info:private Karbar
{
    public:
        void Info_get(string Us_er)
        {
            username = Us_er;
        }
        int Ch()
        {
            if(username == Main_User)
            {
                return 1;
            }
            
            else
            {
                return 0;
            }
        }
        string print_name()
        {
            return username;
        }
    protected:
        string username;
}information;

class printing
{
    public:
        void menu()
        {
            Print_menu_entry();
        }
        void user_entry_print()
        {
            Print_user_entry();
        }
        void OPin()
        {
            Enter_options();
        }
        void printuser()
        {
            print_username();
        }
        void NEw_user()
        {
            New_karbar();
        }
        void user_been_used()
        {
            Print_used_user();
        }
        void to_hesab_f_sign()
        {
            continue_to_hesabdary_from_sign_up();
        }
        void signed_up()
        {
            sign_up_complete();
        }
        void Income_entry()
        {
            Darmamad_new();
        }
        void period()
        {
            period_qest();
        }
        void naqd()
        {
            Cash();
        }
        void Uncash()
        {
            Qeircash();
        }
        void Exp_cash()
        {
            Nocash();
        }
        void Exp_uncash()
        {
            NoQeirnaqd();
        }
        void loan()
        {
            qest();
        }
        void time_qest()
        {
            period_qest();
        }
        void make_choice()
        {
            choice();
        }
        void Exppp()
        {
            Hazineh_new();
        }
        void tot_inc()
        {
            print_daramad_total();
        }
        void inc_cash()
        {
            print_daramad_cash();
        }
        void inc_nocash()
        {
            print_daramad_nocash();
        }
        void tot_ex()
        {
            print_expenses_total();
        }
        void exp_cash()
        {
            print_expenses_cash();
        }
        void exp_no_cash()
        {
            print_expenses_nocash();
        }

    private:
        void Print_menu_entry()
        {
            cout << "Welcome to Mini Holoo which is called Shaftaloo UwU"<< endl;
            cout <<"In shaftaloo we represent what ever you need to not think about your income and expensses." << endl;
            cout <<"Let's get started by your account."<< endl;
            cout <<"If you don't have one sign up today... it's free ;)"<< endl;
        }
        void Print_user_entry()
        {
            cout <<"\n\nEnter your Username below"<<endl;
        }
        void Enter_options()
        {
            cout << "1-Log In" << endl;
            cout << "2-Sign Up" << endl;
            cout << "3-Exit"<< endl;
        }
        void Hesabdary()
        {
            cout <<"";
        }
        void print_username()
        {
            cout << endl <<"\nUsername: ";
        }
        void New_karbar()
        {
            cout << "Enter a username: ";
        }
        void Print_used_user()
        {
            cerr <<"This user has been used before, please try again!"<< endl;
        }
        void continue_to_hesabdary_from_sign_up()
        {
            cout <<"Do you wish to go to do your income and expenses now?" << endl;
        }
        void sign_up_complete()
        {
            cout <<"Sign up was complete!"<< endl;
        }
        void Darmamad_new()
        {
            cout<<"How much money do you make a month?"<<endl;
        }
        void Cash()
        {
            cout <<"Enter Daramade cash:";
        }
        void Qeircash()
        {
            cout <<"Enter bank account income:";
        }
        void Hazineh_new()
        {
            cout<<"what are your monthly expenses?"<<endl;
        }
        void Nocash()
        {
            cout <<"Enter hazineh cash:";
        }
        void NoQeirnaqd()
        {
            cout <<"Enter hazineh qeirnaqd:";
        }
        void qest()
        {
            cout <<"Enter how much you have to pay monthly for qest:"<<endl;
        }
        void period_qest()
        {
            cout <<"Enter how long you have to pay your qests:";
        }
        void choice()
        {
            cout << "what do you like to do?"<<endl;
            cout << "1-Daramad\n2-Kharj\n3-qest\n4-Gozaresh\n5-exit"<<endl;
        }
        void print_daramad_total()
        {
            cout <<"Your total income is:";
        }
        void print_daramad_cash()
        {
            cout << "Your cash income is:";
        }
        void print_daramad_nocash()
        {
            cout <<"Your bank's income is:";
        }
        void print_expenses_total()
        {
            cout <<"Your total expenses is:";
        }
        void print_expenses_cash()
        {
            cout << "Your cash expenses is:";
        }
        void print_expenses_nocash()
        {
            cout <<"Your bank balance is:";
        }
        void pay_loan()
        {
            cout << "you still owe the following to the bank:"<<endl;
        }
        /*void print_password()
        {
            cout << endl << "\nPassword:";
        }*/
}Menu;

class options
{
    public:
        void login()
        {
            get_login_signup_op();
        }   
        int putlogin()
        {
            return put_login_signup_op();
        }
        int options_sign()
        {
            return stay_for_sign_up();
        }
    private:
        void get_login_signup_op()
        {
            int number;
            cin >> number;
            option = number;
        }
        int put_login_signup_op()
        {
            return option;
        }
        int stay_for_sign_up()
        {
            char Op;
            cin >> Op;
            if(Op == 'Y')
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int option;
}Opi;

void get_username()
{
    string user;
    Menu.printuser();
    cin >> user;
    User.Get_Karbar(user);
} 

int check()
{
    get_username();
    bool logged = 0;
    string name;
    ifstream myfile;
    myfile.open("Users.txt", ios::in);
    if(!myfile)
    {
        cerr << "There are no users!" << endl;
        cerr<< "please sign up"<<endl;
        return 0;
    }
    do
    {
        getline(myfile, name);
        information.Info_get(name);
        if(information.Ch())
        {
            myfile.close();
            return 1;
        }
    } while (!myfile);
    return 0;
}

int hesab_choice()
{
    int n;
    Menu.make_choice();
    cin >> n;
    return n;
}

int Hesabdary(string name)
{
    int x;
    bool in = 1;
    bool flag = 1;
    bool flag2 = 1;
    fstream myfile;
    myfile.open("Hesabdari.dat", ios::in);
    if(!myfile)
    {
        Shaftaloo.adam = name;
        do
        {
            switch (hesab_choice())
            {
            case 1:
                Menu.Income_entry();
                Menu.naqd();
                User.Money_cash();
                Menu.Uncash();
                User.Money_Notcash();
                Shaftaloo.DarAmad_naqdi = User.put_cash();
                Shaftaloo.DarAmad_online = User.put_qeircash();
                break;
            case 2:
                Menu.Exppp();
                Menu.Exp_cash();
                User.NoMoney_cash();
                Menu.Exp_uncash();
                User.NoMoney_Notcash();
                Shaftaloo.Hazineh_naqdi = User.put_hazineh_cash();
                Shaftaloo.Hazineh_online = User.put_hazineh_no_cash();
                break;
            case 3:
                Menu.loan();
                User.Loan();
                Menu.time_qest();
                User.Teem();
                Shaftaloo.Aqsat = User.put_bedehi();
                Shaftaloo.time_qest = User.time_loan();
                break;
            case 4:
                Menu.tot_inc();
                cout <<Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi;
                Menu.inc_cash();
                cout << Shaftaloo.DarAmad_naqdi;
                Menu.inc_nocash();
                cout << Shaftaloo.DarAmad_online;
                Menu.tot_ex();
                cout << (Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi) - (Shaftaloo.Hazineh_naqdi + Shaftaloo.Hazineh_online + Shaftaloo.Aqsat);
                Menu.exp_cash();
                cout << Shaftaloo.Hazineh_naqdi;
                Menu.exp_no_cash();
                cout << Shaftaloo.Hazineh_online + Shaftaloo.Aqsat;
                cout <<"Do you like to know how much you will have in x months?"<<endl;
                cin >> x;
                cout << "in the next" <<x<< "months you will have" << (x * (Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi)) - (( Shaftaloo.time_qest * (Shaftaloo.Hazineh_naqdi)) + (x * (Shaftaloo.Hazineh_online + Shaftaloo.Aqsat)));
                break;
            case 5:
                flag = 0;
                break;
            default:
                break;
            }
           
        } while (flag == 1);
        
        myfile.open("Hesabdari.dat", ios::out);
        myfile.write(reinterpret_cast<char*>(&Shaftaloo), sizeof(Shaftaloo));
        myfile.close();
    }
    else
    {
        myfile.open("Hesabdari.dat", ios::in | ios::app);
        myfile.read(reinterpret_cast<char*>(&Shaftaloo), sizeof(Shaftaloo));
        myfile.close();
         do
        {
            switch (hesab_choice())
            {
            case 1:
                Menu.Income_entry();
                Menu.naqd();
                User.Money_cash();
                Menu.Uncash();
                User.Money_Notcash();
                Shaftaloo.DarAmad_naqdi = User.put_cash();
                Shaftaloo.DarAmad_online = User.put_qeircash();
                break;
            case 2:
                Menu.Exppp();
                Menu.Exp_cash();
                User.NoMoney_cash();
                Menu.Exp_uncash();
                User.NoMoney_Notcash();
                Shaftaloo.Hazineh_naqdi = User.put_hazineh_cash();
                Shaftaloo.Hazineh_online = User.put_hazineh_no_cash();
                break;
            case 3:
                Menu.loan();
                User.Loan();
                Menu.time_qest();
                User.Teem();
                Shaftaloo.Aqsat = User.put_bedehi();
                Shaftaloo.time_qest = User.time_loan();
                break;
            case 4:
                Menu.tot_inc();
                cout <<Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi;
                Menu.inc_cash();
                cout << Shaftaloo.DarAmad_naqdi;
                Menu.inc_nocash();
                cout << Shaftaloo.DarAmad_online;
                Menu.tot_ex();
                cout << (Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi) - (Shaftaloo.Hazineh_naqdi + Shaftaloo.Hazineh_online + Shaftaloo.Aqsat);
                Menu.exp_cash();
                cout << Shaftaloo.Hazineh_naqdi;
                Menu.exp_no_cash();
                cout << Shaftaloo.Hazineh_online + Shaftaloo.Aqsat;
                cout <<"Do you like to know how much you will have in x months?"<<endl;
                cin >> x;
                cout << "in the next" <<x<< "months you will have" << (x * (Shaftaloo.DarAmad_online + Shaftaloo.DarAmad_naqdi)) - (( Shaftaloo.time_qest * (Shaftaloo.Hazineh_naqdi)) + (x * (Shaftaloo.Hazineh_online + Shaftaloo.Aqsat)));
                break;
            case 5:
                flag2 = 0;
                break;
            default:
                break;
            }
           
        } while (flag2 == 1);
        myfile.open("Hesabdari.dat", ios::out);
        myfile.write(reinterpret_cast<char*>(&Shaftaloo), sizeof(Shaftaloo));
    }

    return 0;
}


int karbar_log_in()
{
    if(check())
    {
       Hesabdary(information.print_name());
    }
    return 0;
}

int create_user(string username)
{
    ofstream myfile;
    myfile.open("Users.txt", ios::app);
    if(!myfile)
    {
        cerr<<"file could not open!"<<endl;
        return 0;
    }
    myfile << username;
    myfile.close();
    return 0;
}
int Sign_up_Karbar()
{
    bool flag = 1;
    Menu.NEw_user();
    do
    {
        get_username();
        if(information.Ch())
        {
            Menu.user_been_used();
        }
        else
        {
            
            Menu.signed_up();
            flag = 0;
        }
    } while (flag == 1);
    create_user(information.print_name());
    Menu.to_hesab_f_sign();
    if(Opi.options_sign())
    {
        Hesabdary(information.print_name());
    }
    return 0;
}

int choice_main()
{
    bool flag = 1;
    do
    {
        Menu.OPin();
        Opi.login();
        switch (Opi.putlogin())
        {
            case 1:
                karbar_log_in();
                break;

            case 2:
                Sign_up_Karbar();
                break;

            case 3:
                flag = 0;
                break;

            default:
                break;
        }
    } while (flag == 1);
    return 0;
} 

void run()
{
    Menu.menu();
    choice_main(); 
}

int main()
{
    run();
    return 0;
}