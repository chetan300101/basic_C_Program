// inheritance 

#include<iostream>
using namespace std;

class animal
{
	public:
		void  breath()
		{
			cout<<"Breathing\n";
		}
	};
	
	class dog : public animal
	{
		public:
			void bark()
			{
				cout<<"Barking";
			}
	};
	main()
	{
		dog d1;
		d1.breath();
		d1.bark();
	}

