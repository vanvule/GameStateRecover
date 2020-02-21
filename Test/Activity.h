#pragma once
#include "Character.h"

//lớp cơ sở mô tả hành động
class Activity
{
protected:
	//nhân vật thực hiện hành động
	Character* _chr;
public:	
	void setChr(Character* chr);

	//phương thức virtual dùng để tạo 1 bản sao đối tượng.
	virtual Activity* Clone();
	//phương thức virtual dùng để thực thi hành động
	virtual void Do() {};

	Activity();
	//copy constructor của lớp cơ sở
	Activity(const Activity& rhs);
	~Activity();
};

