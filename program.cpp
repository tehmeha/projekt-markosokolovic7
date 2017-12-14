#include<iostream>
#include<math.h>
using namespace std;
double ohmov_zakon(double U,double R)
{
      return U/R;
}
double snaga(double R,double I)
{
    return I*I*R;
}
void energija_rad(double P,double t,double &energija)
{
    energija= P*t;
}
void veza_napona(double U,double d, double *veza )
{
    *veza = U/d;
}
int main()
{
    cout<<"1 - Ohmov zakon "<<endl;
    cout<<"2 - Ukupni otpor paralelno spojenih otpora   "<<endl;
    cout<<"3 - Snaga "<<endl;
    cout<<"4 - Energija,rad "<<endl;
    cout<<"5 - Veza napona i jakos elektricnog polja "<<endl;

    int odabir;
    cout<<"Odaberite broj 1-5 s odgovarajucom formulom!"<<endl;
    cin>>odabir;
    double U,R,R1,R2,Ruk,I,struja,Ukupni_otpor,P,t,e_r,d,veza_napona_i_jakost,snagaP,energija;
    switch(odabir)
    {
    case 1:
        cout<<"Ohmov zakon"<<endl;
        cout<<"Upisite vrijednosti napona(U) ";
        cin>>U;
        cout<<"Upisite vrijednosti otopra(R): ";
        cin>>R;
        struja=ohmov_zakon(U,R);
        cout<<"Struja zadanih vrijednosti je: "<<struja<<endl;
        break;
    case 2:
         cout<<"Ukupni otpor 2 paralelno spojenih otpora  "<<endl;
         cout<<"Upisite vrijednosti dva otpornika: ";
        cin>>R1>>R2;
        Ruk=1/R1+1/R2;
        Ukupni_otpor=Ruk;
        Ukupni_otpor=1/Ruk;
        cout<<"Otpor zadanih vrijednosti je: "<<Ukupni_otpor<<endl;
        break;
    case 3:
         cout<<"Snaga"<<endl;
         cout<<"Upisite vrijednosti struje(I): ";
         cin>>I;
         cout<<"Upisite vrijednosti otpora(R): ";
         cin>>R;
         snagaP=snaga(R,I);
         cout<<"Izracunata snaga je: "<<snagaP;
         break;
    case 4:
         cout<<"Energija,rad"<<endl;
         cout<<"Upisite vrijednosti snage: ";
         cin>>P;
         cout<<"Upisite vrijednosti vremena u sekundama: ";
         cin>>t;
         energija_rad(P,t, energija);
        cout<<"Izracunata energija(rad) je: "<<energija;
        break;
    case 5:
        cout<<"Veza napona i jakosti elektriènog polja"<<endl;
        cout<<"Upisite vrijednosti napona(U): ";
        cin>>U;
        cout<<"Upisite vrijednosti promjera(d): ";
        cin>>d;
        veza_napona(U,d, &veza_napona_i_jakost);
        cout<<"Izracunataveza napona i jakost je: "<<veza_napona_i_jakost;
        break;
    default:
        cout<<"Upisujes samo brojeve od 1-5 kretencino blesava"<<endl;
    }
    cout<<endl;
    return 0;
}
