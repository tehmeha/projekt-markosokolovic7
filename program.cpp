#inlude<iostream>
using namespace std;
double ohmov_zakon(double U,double R)
{
      return ohmov_zakon=U/R;
}
int main()
{
    cout<<"1.- Ohmov zakon "<<endl;
    cout<<"2.-Ukupni otpor paralelno spojenih otpora   "<<endl;
    cout<<"3.-Derivator "<<endl;
    cout<<"4.-Tezinsko zbrajalo "<<endl;
    cout<<"5.-Racunsko pojacalo u neinvertirajucoj zatvorenoj petlji "<<endl;
    cout<<"6.-Gustoca magnetskog toka(magnetska indukcija) "<<endl;
    cout<<"7.- Jakost magnetskog polja unutar ravnog vodica "<<endl;
    cout<<"8.- Stupanj iskoristivosti realnog stroja "<<endl;
    cout<<"9.- Brzina vrtnje sinkronog stroja "<<endl;
    cout<<"10.- Klizanje asinkronog motora"<<endl;
    int odabir;
    cout<<"Odaberite broj 1-10 s odgovarajucom formulom!"<<endl;
    cin>>odabir;
    int U,R,R1,R2,Ruk;
     switch(odabir)
    {
    case 1:
        cout<<"Ohmov zakon";
        cout<<"Upisite vrijednosti napona(U) "<<;
        cin>>U;
        cout<<"Upisite vrijednosti otopra(R)"<<;
        cin>>R;
        struja=ohmov_zakon(U,R)
        cout<<"Struja zadanih vrijednosti je: "<<struja<<endl;
        break;
    case 2:
         cout<<"Ukupni otpor 2 paralelno spojenih otpora  ";
         cout<<"Upisite vrijednosti dva otpornika: "<<;
        cin>>R1<<R2;
        1/Ruk=1/R1+1/R2;
        1/Ruk=Ukupni_otpor
        cout<<"Otpor zadanih vrijednosti je: "<<Ukupni_otpor<<endl;
        break;
    case 3:
         cout<<"Derivator";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u dolarima je: "<<a/7.02;
        break;
    case 4:
         cout<<"Tezinsko zbrajalo";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u eurima je: "<<(9.01*a)/7.56;
        break;
    case 5:
         cout<<"Racunsko pojacalo u neinvertirajucoj zatvorenoj petlji";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u dolarima je: "<<(9.01*a)/7.02;
        break;
    case 6:
         cout<<"Gustoca magnetskog toka(magnetska indukcija)";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u dolarima je: "<<(a*7.02)/7.56;
        break;
    case 7:
         cout<<"Jakost magnetskog polja unutar ravnog vodica";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u kunama je: "<<a*9.01;
        break;
    case 8:
        cout<<"Stupanj iskoristivosti realnog stroja";
        cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u kunama je: "<<a*7.02;
        break;
    case 9:
         cout<<"Brzina vrtnje sinkronog stroja";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u kunama je: "<<a*7.56;
        break;
    case 10:
         cout<<"Klizanje asinkronog motora";
         cout<<"Upisite vrijednosti"<<;
        cin>>a;
        cout<<"Iznos u funtama je: "<<(a*7.02)/9.01;
        break;

        break;
    default:
        cout<<"Upisujes samo brojeve od 1-10 kretencino blesava"<<endl;
    }
    return 0;
}
