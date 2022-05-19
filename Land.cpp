#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"Land.h"

Land::Land(){
			propertyID=0;
			strcpy(propertyType," ");
			strcpy(province," ");
			strcpy(town," ");
			price=0;
			strcpy(status," ");
			size=0;
		}
		
Land::Land(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],float sze):Property(pID,pType,prv,twn,p,s){
		    size=sze;
		    
		    cout<<"\n\nProperty ID: "<<pID<<" Land object created";
		}
		
void Land::setDetails(){}
void Land::updateDetails(){}
void Land::removeDetails(){}
void Land::displayDetails(){}

Land::~Land(){
			cout<<"\n\nProperty ID: "<<propertyID<<" Land object deleted";
		}
