#include <iostream>
#include <math.h>       /* sqrt */
#include <cmath>


using namespace std;


class Vehicul{
private:
    float volum,masa;
    int viteza;
    int x,y;
    int tip;
   // int portbagaj[100];
public:
    Vehicul();
    Vehicul(float vol=0,float mass=0,int xx=0,int yy=0,int t=0)
    {   if(vol<0 || mass<0 || t>4 || t<0)
            throw 1;

        volum=vol;
        masa=mass;
        x=xx;
        y=yy;
        tip=t;


    }

        Vehicul(const Vehicul &v)
    {
        volum=v.volum;
        masa=v.masa;
        x=v.x;
        y=v.y;
        tip=v.tip;
        tip=v.viteza;


    }
    ~Vehicul()
    {
        cout<<"Si a terminat lucrul.";

    }
    void setViteza(int vitez)
        {
            viteza=vitez;
        }
    int returnX()
        {
            return x;

        }
    int returnY()
        {
            return y;

        }
    int returnViteza()
        {
            return viteza;
        }
     int returntip()
    {
        return tip;
    }
     int returnMasa()
    {
        return masa;
    }
    int returnVolum()
    {
        return volum;
    }
    void modifica_MVD(float v,float m)
    {
        masa-=m;
        volum-=v;

    }
    void modifica_XY(int xnou,int ynou)
    {
        x=xnou;
        y=ynou;

    }
//    void adaugaObj(int nr_Obj)
//    {
//        portbagaj[portbagaj[0]+1]=nr_Obj;
//        portbagaj[0]++;
//
//    }
//    int returnNR_OBJ()
//    {
//        return portbagaj[0];
//
//    }
    void afisare()
    {

       // cout<<volum<<' '<<masa<<' '<<viteza<<' '<<'\n';
        cout<<"Volum : "<<volum<<endl;
        cout<<"Masa: "<<masa<<endl;
        cout<<"Viteza: "<<viteza<<endl;
        cout<<"Tip: ";
        switch (tip)
{
    case 1: cout<<"Duba Rece\n\n";
        break;
    case 2: cout<<"Duba\n\n";
        break;
    case 3: cout<<"Scuter\n\n";
        break;
    default: cout<<"Masina\n\n";

}
    }
    float calcTimpDist(int dx,int dy)
    { if(tip==3)
            return (sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y)))/viteza;
        else
            return (abs(dx-x)+abs(dy-y))/viteza;
    }
    virtual void afiss()
    {
        cout<<"este masina";
    }
    friend ostream& operator<<(ostream& os, const Vehicul &V);
    friend istream& operator>> (istream& in, Vehicul &v);


};
ostream& operator<<(ostream& os, const Vehicul& V)
{

    os<<"Volum : "<<V.volum<<endl;
        os<<"Masa: "<<V.masa<<endl;
        os<<"Viteza: "<<V.viteza<<endl;
        os<<"Tip: ";
        switch (V.tip)
{
    case 1: os<<"Duba Rece\n\n";
        break;
    case 2: os<<"Duba\n\n";
        break;
    case 3: os<<"Scuter\n\n";
        break;
    default: os<<"Masina\n\n";

}
    return os;
}
istream& operator>> (istream& in, Vehicul &v)
{
    cout<<"\n Introdu masa disponibila : ";in>>v.masa;
    cout<<"\n Introdu volumul disponibil : ";in>>v.volum;
    cout<<"\n Introdu coordonata x : ";in>>v.x;
    cout<<"\n Introdu coordonata y : ";in>>v.y;
    cout<<"\n Introdu tipul masini : ";in>>v.tip;



    return in;

}


class Duba:public Vehicul{
private:

public:
    Duba(float vol=0,float mass=0,int xx=0,int yy=0,int t=1):Vehicul(vol,mass,xx,yy,t){
        Vehicul::setViteza(5);
        }
    void afiss()
        {
            cout<<"Este duba";

        }
//    friend ostream& operator<<(ostream& os, const Duba &D);
//    friend istream& operator>> (istream& in, Duba &D);

};


class Scuter:public Vehicul{
private:

public:
    Scuter(int xx=0,int yy=0,float vol=0,float mass=0,int t=3):Vehicul(vol,mass,xx,yy,t){
        Vehicul::setViteza(20);


        }
//    friend ostream& operator<<(ostream& os, const Scuter &S);
//    friend istream& operator>> (istream& in, Scuter &S);
};
class Masina:public Vehicul{
private:

public:
    Masina(int xx=0,int yy=0,float vol=0,float mass=0,int t=4):Vehicul(vol,mass,xx,yy,t){
        Vehicul::setViteza(10);


        }
//    friend ostream& operator<<(ostream& os, const Masina &M);
//    friend istream& operator>> (istream& in, Masina &M);
};


