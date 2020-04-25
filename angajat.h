#include <iostream>
using namespace std;


class Angajat{
    int nrang;
    int ore_zi;
    int salariu;
public:
    Angajat(){
    }
    Angajat(int na,int oz,int sal)
    {
        nrang=na;
        ore_zi=oz;
        salariu=sal;

    }
};
class Manager:public Angajat{
    int actiune;
    int acces=1;
    public:
        Manager(int act,int na,int oz,int sal):Angajat(na,oz,sal){

        actiune=act;
        }
        int returntipacces()
        {
            return acces;

        }



};
class Sofer:public Angajat{
    int actiune;
    public:
        Sofer():Angajat(){
        }

        Sofer(int act,int na,int oz,int sal):Angajat(na,oz,sal){
        actiune=act;
        }
        void modificaAct(int nr)
        {
            if(nr>3 || nr<=0)
                throw 1;
            else
            actiune=nr;

        }


};
