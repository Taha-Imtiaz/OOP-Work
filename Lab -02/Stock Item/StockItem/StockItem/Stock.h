#include <string>
#include <iostream>
using namespace std;
class StockItem
{
    public:
		StockItem()
		{
			this->Stock_level = 2;
			this->Unit_price = 340.5;

		}
	
		int getUnit_price()
		{
			return this->Unit_price;
		}
		int getstock_level()
		{
			return this->Stock_level;
		}
		void show()
		{
		    	cout << "The receipt of the stock is:" << endl;
				cout << "The present Stock level is at:"  ;
			cout << Stock_level<<endl;
			cout << "The unit price of the stock is:" ;
			cout << Unit_price<<endl;
		}

    private:
		int Stock_level;
		float Unit_price;
};