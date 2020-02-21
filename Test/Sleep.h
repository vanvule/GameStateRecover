#pragma once
#include "Activity.h"

//lớp con mô tả hành động Sleep kế thừa từ lớp cơ sở Activity
class Sleep :public Activity
{
public:

	//override lại các phương thức virtual từ lớp cơ sở
	void Do();
	Activity* Clone();

	//copy constructor của lớp Sleep
	Sleep(const Sleep &rhs);
	Sleep();
	~Sleep();
};

