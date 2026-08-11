#include "Inventory.hpp"
#include <iostream>

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items)
	: m_owner(owner)
	, m_count(items.size())
{
	std::string*	temp = new std::string[m_count];
	std::copy(items.begin(), items.end(), temp);
	m_items = temp;
	std::cout << "+ Inventory\t" << m_owner << " ";
	printItems();
	std::cout << std::endl;
}

Inventory::~Inventory(void)
{
	std::cout << "- Inventory\t" << m_owner << " ";
	printItems();
	std::cout << std::endl;
	delete[] m_items;
}

void	Inventory::printItems(void) const
{
	std::cout << "(";
	for (size_t i = 0; i < m_count; ++i)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << m_items[i];
	}
	std::cout << ")";
}
