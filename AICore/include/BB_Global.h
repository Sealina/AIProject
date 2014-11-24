#pragma once

#include "BB_Interface.h"

struct BB_Global : public IBlackboard
{
	BB_Global()
	{
		gameTimeElapsed = 0.0f;
		m_alliance_unit_count = 0;
		m_horde_unit_count = 0;
		m_alliance_team_resource = 0;
		m_horde_team_resource = 0;
	}

	virtual void Serialize(ISimpleSerializer *pSerializer)
	{
		AU_ASSERT(pSerializer);
		SERIALIZE(gameTimeElapsed);
		SERIALIZE(immune_count);
		SERIALIZE(infection_count);
		SERIALIZE(immune_team_strength);
		SERIALIZE(infection_team_strength);
	}

	// Members

	float gameTimeElapsed;
	int m_alliance_unit_count;
	int m_horde_unit_count;
	float m_alliance_resource;
	float m_horde_resource;
};