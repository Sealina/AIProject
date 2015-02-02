#include <vector>

struct BB_Individual_Worker : public IBlackboard
{
	BB_Individual_Worker()
	{
		// Init members here
	}

	std::vector<GameObject*> m_visibleEnemy;
	std::vector<GameObject*> m_visibleAlly;
};
