#pragma once
#include "Activity.h"

//lớp con mô tả hành động Fight kế thừa từ lớp cơ sở Activity
class Fight : public Activity
{
protected:
	int _gainedAP;
public:
	void setGainedAP(int gainedAP);
	
	//override lại các phương thức virtual từ lớp cơ sở
	void Do();
	Activity* Clone();

	//copy constructor của lớp Fight
	Fight(const Fight& rhs);
	Fight();	
	~Fight();
};

