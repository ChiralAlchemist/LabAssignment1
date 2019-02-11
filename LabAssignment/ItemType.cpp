// The following definitions go into file ItemType.cpp. 
#include <fstream>
#include <iostream>
#include "ItemType.h"

ItemType::ItemType()
{
	value = "";
}

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
	if (value < otherItem.value)
		return LESS;
	else if (value > otherItem.value)
		return GREATER;
	else return EQUAL;
}

void ItemType::Initialize(string str)
{
	value = str;
}

void ItemType::Print(std::ostream& out) const
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
	out << value;
}