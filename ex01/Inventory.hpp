#pragma once

#include <string>

class	Inventory
{
	public:
		Inventory(const std::string& owner, std::initializer_list<std::string> items);
		Inventory(const Inventory& other) = delete;
		Inventory&	operator=(const Inventory& other) = delete;
		~Inventory(void);

		void	printItems(void) const;

	private:
		const std::string	m_owner;
		const size_t		m_count;
		const std::string*	m_items;	
};

