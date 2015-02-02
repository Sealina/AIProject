#pragma once
#include <vector>
#include "IGameObject.h"
#include "GlobalParams.h"

class IGameObject;

class GameMap
{
	public:
	GameMap() : m_mapWidth(0), m_mapLength(0) {}

	GameMap(float _width, float _length) : m_mapWidth(_width), m_mapLength(_length)
	{
		m_areaCountWidth = ceil(_width / (m_cAreaScale));
		m_areaCountLength = ceil(_length / (m_cAreaScale));
		m_mapObject = std::vector<std::vector<IGameObject*> >(m_areaCountWidth * m_areaCountLength);
	}

	void addObject(IGameObject* _object)
	{
		m_mapObject[ceil(_object->m_position.y / m_cAreaScale) * m_areaCountWidth + ceil(_object->m_position.x / m_cAreaScale)].push_back(_object);
	}

	void removeObject(IGameObject* _object)
	{
		std::vector<IGameObject*>* group = &m_mapObject[ceil(_object->m_position.y / m_cAreaScale) * m_areaCountWidth + ceil(_object->m_position.x / m_cAreaScale)];
		std::vector<IGameObject*>::iterator iter = std::find(group->begin(), group->end(), _object);
		if (iter != group->end())
		{
			group->erase(iter);
		}
	}

	private:
	std::vector<std::vector<IGameObject*> > m_mapObject;
	int m_areaCountWidth;
	int m_areaCountLength;
	float m_mapWidth;
	float m_mapLength;
	const int m_cAreaScale = 2 * VISIBILITY_RANGE;

};