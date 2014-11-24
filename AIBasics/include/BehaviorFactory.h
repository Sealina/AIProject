#pragma once

#include <cstdlib>
#include <cfloat>
#include "vec2f.h"

struct Creature;
struct Blackboard;

struct Behavior
{
	Behavior() :
		m_target_position(vec2f()), m_pOwner(NULL)
	{

	}

	virtual void execute() = 0;

	virtual ~Behavior() {}

	vec2f m_target_position;
	Creature* m_pOwner;

};

class Approach : public Behavior
{
	public:
	
	Approach() {}

	virtual void execute();

	~Approach() {}
};

class Flee : public Behavior
{
	public:

	Flee() {}

	virtual void execute();

	~Flee() {}
};