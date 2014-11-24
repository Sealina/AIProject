#include "CreatureFactory.h"
#include "Blackboard.h"

void Blackboard::addCreature(Creature* _new_creature)
{
	m_creature_list.push_back(_new_creature);
}

