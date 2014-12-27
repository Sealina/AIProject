#pragma once

#include "BB_Interface.h"

struct BB_Individual_Common : public IBlackboard
{
	BB_Individual_Common()
	{
		current_health = 0;
		max_speed = 0;
		target_position.SetInfinite();
		time_to_next_attack = 0.0f;
	}

	virtual void Serialize(ISimpleSerializer *pSerializer)
	{
		AU_ASSERT(pSerializer);

		SERIALIZE(current_health);
		SERIALIZE(max_speed);
		SERIALIZE(current_velocity);
		SERIALIZE(current_position);
		SERIALIZE(target_position);
		SERIALIZE(enemy_collision_objectid);
		SERIALIZE(time_to_next_attack);
	}

	// Members

	float current_health;
	float max_speed;
	AUVec3f current_velocity;
	AUVec3f current_position;
	AUVec3f target_position;         // Infinity if none
	ObjectId target_enemy_objectid;   // 0 if none
	float time_to_next_attack;
};