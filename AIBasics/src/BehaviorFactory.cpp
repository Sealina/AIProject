#include <iostream>
#include "CreatureFactory.h"
#include "Blackboard.h"
#include "BehaviorFactory.h"


void Approach::execute()
{
	vec2f move_vec = (m_target_position - m_pOwner->m_pos).getUnitVec() * m_pOwner->m_speed;
	m_pOwner->m_pos += move_vec;
	std::cout << m_pOwner->m_name << " moved to " << m_pOwner->m_pos << std::endl;
}

void Flee::execute()
{
	vec2f move_vec = (m_target_position - m_pOwner->m_pos).getUnitVec() * m_pOwner->m_speed;
	m_pOwner->m_pos -= move_vec;
	std::cout << m_pOwner->m_name << " moved to " << m_pOwner->m_pos << std::endl;
}
