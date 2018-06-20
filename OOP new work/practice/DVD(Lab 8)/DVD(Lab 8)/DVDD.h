#include <iostream>
#include <string>
using namespace std;

class Dvdd
{
public:
    Dvdd()
    {
        this->name= "Windows 10";
        this->company= "Microsoft";
        this->cost=150;
    }

    Dvdd(string name, string company, int cost)
    {
        this->name= name;
        this->company= company;
        this->cost= cost;
    }

    Dvdd(Dvdd &copy_dvd)
    {
        this->name= copy_dvd.name;
        this->company= copy_dvd.company;
        this->cost= copy_dvd.cost;

    }

    string getname()
    {
        return this->name;
    }
    string getcompany()
    {
        return this->company;
    }

    int getcost()
    {
        return this->cost;
    }

    void setname(string name)
    {
        this->name= name;
    }

    void setcompany(string company)
    {
        this->company= company;
    }

    void setcost()
    {
        this->cost= cost;
    }

friend ostream& operator << (ostream& out, Dvdd & d )
{
    out<<"\nThe details of the DVD are: "<<d.getname()<<endl<<d.getcompany()<<endl<<d.getcost()<<endl;
    return out;
}
private:
    string name;
    string company;
    int cost;


};


