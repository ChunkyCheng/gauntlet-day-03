#include "Enemy.hpp"

Enemy::Enemy(const std::string& name, int hp)
	: Entity(name, hp)
{
}

Enemy::~Enemy(void)
{
}

std::string	Enemy::describe(void) const
{
	std::string	out =
		"Enemy " + m_name
		+ " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ")";
	if (!isAlive())
		out += " [dead]";
	return (out);
}
