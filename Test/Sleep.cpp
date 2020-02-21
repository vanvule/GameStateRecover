#include "Sleep.h"



Sleep::Sleep()
{
}


Sleep::~Sleep()
{
}

//copy constructor của lớp con Sleep
Sleep::Sleep(const Sleep &rhs) 
	: Activity(rhs) // gọi copy constructor của lớp cơ sở
{

}

//override lại phương thức Clone() của lớp cơ sở
Activity* Sleep::Clone()
{
	//cấp phát vùng nhớ của lớp Sleep bằng cách tạo bản copy 
	//của chính đối tượng đang gọi thực hiện phương thức Clone()
	return new Sleep(*this);
}


//override lại phương thức Do() của lớp cơ sở
void Sleep::Do()
{
	int currAP = _chr->getAP();
	
	if (currAP > _chr->getAPPerLevel())
	{
		_chr->changeHP(_chr->getHPPerLevel());
		_chr->changeLevel();
		_chr->changeAP(-(currAP - _chr->getAPPerLevel()));
	}
}
