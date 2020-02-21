#include "Activity.h"



Activity::Activity()
{
}


Activity::~Activity()
{
}

Activity::Activity(const Activity& rhs)
{
	_chr = rhs._chr;
}

void Activity::setChr(Character* chr)
{
	_chr = chr;
}

Activity* Activity::Clone()
{
	return new Activity(*this);
}
