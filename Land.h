#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"

class Land:public Property{
	private:
		float size;
	public:
		Land();
		Land(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],float sze);
		void setDetails();
		void updateDetails();
		void removeDetails();
		void displayDetails();
		~Land();
};

