#include "GlobalParams.h"
#include "vec2.hpp"

class IGameObject
{
	public:
	IGameObject();

	//internal attribute
	glm::vec2 m_position;
	glm::vec2 m_velocity;

	private:
	EGameObjectType m_type;
	EGameTeam m_team;
	//IBehaviorTree m_pBehaviorTree;
};