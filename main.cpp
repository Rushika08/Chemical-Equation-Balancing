#include <iostream>
using namespace std;

int main()
{
	float c, h, o;
	float ch, h2o, o2, co2;
	cout<<"Enter the number of Carbon (C) atoms in the Hydro-Carbon - ";
	cin>>c;
	cout<<"Enter the number of Hydrogen (H) atoms in the Hydro-Carbon - ";
	cin>>h;
	
	//Calculating the factors
	ch = 1;
	h2o = h/2;
	co2 = c;
	o2 = (2*co2 + h2o)/2;
	
	//Checking whether the factor of O2 is in fraction format
	int check_o2 = static_cast<int>(o2);
	
	//Then multiplying all the factors by 2 to avoid fractions
	if(o2 != check_o2)
	{
		ch *= 2;
		co2 *= 2;
		o2 *= 2;
		h2o *= 2;
	}
	
	cout<<" The balanced equation is, \n";
	cout<<"\n\t\t "<<ch<<" [C"<<c<<"H"<<h<<"]+ "<<o2<<" [O2]  =  "<<h2o<<" [H2O] + "<<co2<<" [CO2]";
	
	return 0;
}
