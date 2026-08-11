#include "Player.hpp"

Player::Player(const std::string& name)
	: Entity(name)
{
}

Player::~Player(void)
{
}

std::string	Player::describe(void) const
{
	return ("Player " + m_name);
}
