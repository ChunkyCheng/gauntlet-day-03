#include "Entity.hpp"
#include <iostream>

Entity::Entity(const std::string& name, int maxHp)
	: m_name(name)
	, m_maxHp(maxHp)
	, m_currentHp(maxHp)
{
	if (maxHp < 0)
	{
		std::cerr << "Entity initialised with invalid maxHp" << std::endl;
		throw ;
	}
}

Entity::~Entity(void)
{
}

void	Entity::takeDamage(int amount)
{
	int	newHp = std::max(m_currentHp - amount, 0);

	std::cout << m_name << " takes " << amount << " damage (" << m_currentHp << " -> " << newHp << " hp)" << std::endl;
	m_currentHp = newHp;
}

void	Entity::heal(int amount)
{
	int newHp = std::min(m_currentHp + amount, m_maxHp);

	//std::cout << m_name << " heals " << amount << " HP (" << m_currentHp << " -> " << newHp << " hp)" << std::endl;
	m_currentHp = newHp;
}

bool	Entity::isAlive(void) const { return (m_currentHp > 0); }
int		Entity::currentHp(void) const { return (m_currentHp); }
int		Entity::maxHp(void) const { return (m_maxHp); }
