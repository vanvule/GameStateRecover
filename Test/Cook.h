#pragma once
#include "Activity.h"

//lớp con mô tả hành động Cook kế thừa từ lớp cơ sở Activity
class Cook : public Activity
{
	int _gainedAP;
public:
	void setGainedAP(int gainedAP);

	//override lại các phương thức virtual từ lớp cơ sở
	void Do();
	Activity* Clone();
	
	
	//copy constructor của lớp Cook
	Cook(const Cook& rhs);
	Cook();
	~Cook();
};

