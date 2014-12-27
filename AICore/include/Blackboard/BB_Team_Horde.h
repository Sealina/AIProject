#pragma once

struct BB_Team_Alliance : public IBlackboard
{
	BB_Team_Alliance()
	{
		team_size = 0;
	}

	virtual void Serialize(ISimpleSerializer *pSerializer)
	{
		AU_ASSERT(pSerializer);
		SERIALIZE(team_size);
	}

	// Members

	int team_size;
};