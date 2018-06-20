
class SuperManager:public Manager
{
public:
	SuperManager(string n):Manager(10,n)
{


}

	void Paycut(float amount)
	{
		this->salary=this->salary*2;
	}
};