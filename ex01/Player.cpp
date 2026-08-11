#include "Player.hpp"
#include <iostream>

Player::Player(const std::string& name)
	: Entity(name)
{
	std::cout << "+ Player\t" << m_name << std::endl;
}

Player::~Player(void)
{
	std::cout << "- Player\t" << m_name << std::endl;
}

std::string	Player::describe(void) const
{
	return ("Player " + m_name);
}
