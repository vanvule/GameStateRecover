#include "Cook.h"



Cook::Cook()
{
}


Cook::~Cook()
{
}

//copy constructor của lớp con Cook
Cook::Cook(const Cook& rhs) 
	: Activity(rhs) // gọi copy constructor của lớp cơ sở
{
	//copy các thuộc tính chỉ có lớp con có mà lớp cơ sở không có
	_gainedAP = rhs._gainedAP;
}

void Cook::setGainedAP(int gainedAP)
{
	_gainedAP = gainedAP;
}

//override lại phương thức Clone() của lớp cơ sở
Activity* Cook::Clone()
{
	//cấp phát vùng nhớ của lớp Cook bằng cách tạo bản copy 
	//của chính đối tượng đang gọi thực hiện phương thức Clone()
	return new Cook(*this);
}

//override lại phương thức Do() của lớp cơ sở
void Cook::Do()
{
	if (_chr->getName() == IGNIS_CHR_NAME)
		_chr->changeAP(_gainedAP);
}


