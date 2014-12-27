#include "glm/glm.hpp"

using namespace glm;

struct BehaviorCommon
{
	IGameObject* m_pOwner;

	virtual vec3 getDesiredPosition(float deltaTime)
	{
		vec3 current_pos = m_pOwner->current_pos;
		vec3 desired_dir = normalize(m_pOwner->getTargetPosition() - current_pos);
		return current_pos + desired_dir * m_pOwner.speed;
	}

	virtual float receiveDamage(float amount)
	{
		m_pOwner
	}


};