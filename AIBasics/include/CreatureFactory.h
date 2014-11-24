#pragma once

#include <string>
#include <iostream>
#include "vec2f.h"

#define RED		0
#define BLUE	1
#define GREEN	2

struct Blackboard;

struct Creature
{
	public:
	Creature();

	void identifyTarget(Blackboard* _global_blackboard);

	~Creature() {}

	vec2f m_pos;
	float m_speed;
	Creature* m_target;
	std::string m_name;
	static int m_counter;

};

class RedCreature : public Creature
{
	public:
	RedCreature();
	~RedCreature() {}

	private:

};

class GreenCreature : public Creature
{
	public:
	GreenCreature();
	~GreenCreature() {}

	private:

};

class BlueCreature : public Creature
{
	public:
	BlueCreature();
	~BlueCreature() {}

	private:

};

class CreatureFactory
{
	public:
	CreatureFactory() {}
	~CreatureFactory() {}

	Creature* getCreature(std::string _Creature_type);

	private:

};