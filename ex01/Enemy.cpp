#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(const std::string& name, int hp, std::initializer_list<std::string> loot)
	: Entity(name)
	, m_hp(hp)
	, m_bag(name, loot)
{
	std::cout << "+ Enemy\t\t" << m_name << std::endl;
}

Enemy::~Enemy(void)
{
	std::cout << "- Enemy\t\t" << m_name << std::endl;
}

std::string	Enemy::describe(void) const
{
	return ("Enemy " + m_name + " (hp " + std::to_string(m_hp) + ")");
}
