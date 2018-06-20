
class TableLamp
{
	enum state{On,Off};
public:
	TableLamp()
	{
		this->On_Off=Off;
	}
	void PressSwith()
	{
	On_Off=(On_Off==On)?Off:On;
	}
	friend ostream& operator<<(ostream &o,const TableLamp &t)
	{
		return o<<"The Lamp is"<<t.On_Off<<"now"<<endl;
	}
private:
state On_Off;
};