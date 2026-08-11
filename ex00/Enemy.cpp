#include "Enemy.hpp"

Enemy::Enemy(const std::string& name, int hp)
	: Entity(name)
	, m_hp(hp)
{
}

Enemy::~Enemy(void)
{
}

std::string	Enemy::describe(void) const
{
	return ("Enemy " + m_name + " (hp " + std::to_string(m_hp) + ")");
}
