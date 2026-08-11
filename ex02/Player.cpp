#include "Player.hpp"
#include <iostream>

Player::Player(const std::string& name, int hp, int armor)
	: Entity(name, hp)
	, m_armor(armor)
{
}

Player::~Player(void)
{
}

void	Player::takeDamage(int amount)
{
	int reduced = std::max(1, amount - m_armor);

	std::cout << m_name << "'s armor soaks " << (amount - reduced) << '\n';
	Entity::takeDamage(reduced);
}

std::string	Player::describe(void) const
{
	std::string	out =
		"Player " + m_name
		+ " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp())
		+ ", armor " + std::to_string(m_armor) + ")";
	if (!isAlive())
		out += " [dead]";
	return (out);
}
