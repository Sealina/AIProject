#pragma once

#include "BB_Interface.h"

struct BB_Group_Warrior : public IBlackboard
{
	BB_Group_RBC() :
		m_alliance_warrior_count(0),
		m_horde_warrior_count(0),
	{}

	virtual void Serialize(ISimpleSerializer *pSerializer)
	{
		AU_ASSERT(pSerializer);
		SERIALIZE(group_size);
	}

	// Members

	int m_alliance_warrior_count;
	int m_horde_warrior_count;
};