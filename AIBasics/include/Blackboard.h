#pragma once

#include <vector>
#include "vec2f.h"

struct Creature;

struct Blackboard
{
	Blackboard() {}
	~Blackboard() {}

	void addCreature(Creature* _new_creature);

	std::vector<Creature*> m_creature_list;
};