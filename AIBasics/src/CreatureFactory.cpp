#include "Blackboard.h"
#include "CreatureFactory.h"

int Creature::m_counter = 0;

Creature::Creature() :
m_pos(vec2f(rand() % 100, rand() % 100)),
m_speed(rand() % 10)
{
	std::cout << "New creature created at " << m_pos << " with speed of" << m_speed << std::endl;
	++m_counter;
}

void Creature::identifyTarget(Blackboard* _global_blackboard)
{
	float min_dist = FLT_MAX;
	float current_dist = 0;
	for (auto i : _global_blackboard->m_creature_list)
	{
		current_dist = m_pos.dist(i->m_pos);
		if (current_dist != 0 && current_dist < min_dist)
		{
			min_dist = current_dist;
			m_target = i;
		}
	}
	std::cout << m_name << " targeted " << m_target->m_name << std::endl;
}

RedCreature::RedCreature()
{
	m_name = "RedCreature" + std::to_string(m_counter);
	std::cout << "Its name is " << m_name << std::endl;
}

GreenCreature::GreenCreature()
{
	m_name = "GreenCreature" + std::to_string(m_counter);
	std::cout << "Its name is " << m_name << std::endl;
}

BlueCreature::BlueCreature()
{
	m_name = "BlueCreature" + std::to_string(m_counter);
	std::cout << "Its name is " << m_name << std::endl;
}

Creature* CreatureFactory::getCreature(std::string _Creature_type)
{
	if (_Creature_type == "RED")
	{
		return new RedCreature;
	}
	else if (_Creature_type == "GREEN")
	{
		return new GreenCreature;
	}
	else if (_Creature_type == "BLUE")
	{
		return new BlueCreature;
	}
}

int getCreatureType(Creature* _creature)
{
	if (static_cast<RedCreature*>(_creature))
	{
		return RED;
	}
	else if (static_cast<GreenCreature*>(_creature))
	{
		return GREEN;
	}
	else
	{
		return BLUE;
	}
}