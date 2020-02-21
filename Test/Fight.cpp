#include "Fight.h"



Fight::Fight()
{
}


Fight::~Fight()
{
}

//copy constructor của lớp con Sleep
Fight::Fight(const Fight& rhs) 
	: Activity(rhs)// gọi copy constructor của lớp cơ sở
{
	//copy các thuộc tính chỉ có lớp con có mà lớp cơ sở không có
	_gainedAP = rhs._gainedAP;
}

void Fight::setGainedAP(int gainedAP)
{ 
	_gainedAP = gainedAP; 
}

//override lại phương thức Clone() của lớp cơ sở
Activity* Fight::Clone()
{
	//cấp phát vùng nhớ của lớp Fight bằng cách tạo bản copy 
	//của chính đối tượng đang gọi thực hiện phương thức Clone()
	return new Fight(*this);
}

//override lại phương thức Do() của lớp cơ sở
void Fight::Do()
{
	int gainedAP = _gainedAP;
	
	if (_chr->getName() == IGNIS_CHR_NAME)
		gainedAP = 0;
	
	if (_chr->getName() == PROMPTO_CHR_NAME)
		gainedAP = _gainedAP / 2;
	
	_chr->changeAP(gainedAP);
}