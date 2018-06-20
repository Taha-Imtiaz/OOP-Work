
class AdjTableLamp:public TableLamp
{
public:
AdjTableLamp()
{
	this->brightness=1.0;
}
void dim()
{
if(brightness>0.1)
	brightness -=0.1;

}
void Print(ostream &O)
{
O<<"With brightness"<<brightness<<endl;

}
private:
	float brightness;

};
