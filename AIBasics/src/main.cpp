#include "BehaviorFactory.h"
#include "Blackboard.h"
#include "CreatureFactory.h"

#define Initial_RedCreature_Count		5
#define Initial_GreenCreature_Count		5
#define Initial_BlueCreature_Count		5

Blackboard Global_BB;
CreatureFactory creature_factory;
Approach approach;
Flee flee;

void initScene();
void update();

extern int getCreatureType(Creature* _creature);

int main()
{
	initScene();

	for (int i = 0; i < 100; ++i)
	{
		update();
	}
	return 0;
}

void initScene()
{
	for (int i = 0; i < Initial_RedCreature_Count; ++i)
	{
		Global_BB.addCreature(creature_factory.getCreature("RED"));
	}

	for (int i = 0; i < Initial_GreenCreature_Count; ++i)
	{
		Global_BB.addCreature(creature_factory.getCreature("GREEN"));
	}

	for (int i = 0; i < Initial_BlueCreature_Count; ++i)
	{
		Global_BB.addCreature(creature_factory.getCreature("BLUE"));
	}
}

void update()
{
	// BB Update

	// Creature Update
	for (auto i : Global_BB.m_creature_list)
	{
		i->identifyTarget(&Global_BB);

		if (getCreatureType(i) == (getCreatureType(i->m_target) + 1)%3)
		{
			flee.m_pOwner = i;
			flee.m_target_position = i->m_target->m_pos;
			flee.execute();
		}
		else
		{
			approach.m_pOwner = i;
			approach.m_target_position = i->m_target->m_pos;
			approach.execute();
		}
	}
}