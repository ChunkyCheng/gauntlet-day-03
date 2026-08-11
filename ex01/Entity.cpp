#include "Entity.hpp"
#include <iostream>

Entity::Entity(const std::string& name)
	: m_name(name)
{
	std::cout << "+ Entity\t" << m_name << std::endl;
}

Entity::~Entity(void)
{
	std::cout << "- Entity\t" << m_name << std::endl;
}
