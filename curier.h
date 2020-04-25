

#include <iostream>
#include <math.h>       /* sqrt */
#include <cmath>
using namespace std;

class Colet
{
private:
    float masa,volum;
    int x,y;
    int dx,dy;
    int tiprece;
    int dl;
    int tipDl;
    int preluat=0;
public:
    Colet operator=(const Colet &c){
    masa=c.masa;
    volum=c.volum;
    x=c.x;
    y=c.y;
    tipDl=c.tipDl;
    tiprece=c.tiprece;
    dx=c.dx;
    dy=c.dy;


    }
    Colet(){}

    Colet(float m,float v,int xx,int yy,int dxx,int dyy,int tr,int d,int tdl)
    {
        masa=m;
        volum=v;
        x=xx;
        y=yy;
        dx=dxx;
        dy=dyy;
        tiprece=tr;
        dl=d;
        tipDl=tdl;

    }

    Colet(const Colet &c)
    {
        masa=c.masa;
        volum=c.volum;
        x=c.x;
        y=c.y;
        dx=c.dx;
        dy=c.dy;
        tiprece=c.tiprece;
        dl=c.dl;
        tipDl=c.tipDl;

    }
    ~Colet()
    {
        cout<<"";

    }
    int returndl()
    {
        return dl;

    }
    int retm()
    {
        return masa;

    }
    int retv()
    {
        return volum;

    }
    void acceptat()
    {
        preluat=1;
    }
    int retStd()
    {
        return preluat;
    }
    int checkTlist(float masa_liber,float vol_liber,int tip)
    {
            if(tiprece==1)
            {
                if(tip!=1)
                    return 0;
                if(masa_liber<masa)
                    return 0;
                if(vol_liber<volum)
                    return 0;

            }
            else
            {
                if(masa_liber<masa)
                    return 0;
                if(vol_liber<volum)
                    return 0;

            }
            return 1;
            cout<<masa_liber<<' '<<vol_liber<<' '<<tip<<endl;


    }
    int checkTimp(int vx,int vy,int tip,int vit)
    {
        if(tip==3)
            return (sqrt((vx-x)*(vx-x)+(vy-y)*(vy-y)))/vit;
        else
            return (abs(vx-x)+abs(vy-y))/vit;

    }
        int checkAprop(int vx,int vy,int tip,int vit)
    {
        if(tip==3)
            return sqrt((vx-x)*(vx-x)+(vy-y)*(vy-y));
        else
            return abs(vx-x)+abs(vy-y);

    }
    int checkDurata(int vit,int t)
    {

        if(t==3)
            return sqrt((x-dx)*(x-dx)+(y-dy)*(y-dy))/vit;
        else
            return abs(dx-x)+abs(dy-y)/vit;

    }
    int returnX()
    {
        return x;

    }
    int returnY()
    {
        return y;

    }
    int returndX()
    {
        return dx;

    }
    int returndY()
    {
        return dy;

    }
    void afisare()
    {
//        float masa,volum;
//        int x,y;
//        int dx,dy;
//        int tiprece;
        cout<<"Masa : "<<masa<<endl;
        cout<<"Volum : "<<volum<<endl;
        cout<<"Coordonate Gps"<<endl<<"x="<<x<<' '<<"y="<<y<<endl;
        cout<<"Coordonate Destinatie"<<endl<<"x="<<dx<<' '<<"y="<<dy<<endl;
        cout<<"Tip Rece:"<<tiprece<<endl<<endl;



    }





};

