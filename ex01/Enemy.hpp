#pragma once

#include "Entity.hpp"
#include "Inventory.hpp"

class	Enemy : public Entity
{
	public:
		explicit Enemy(const std::string& name, int hp, std::initializer_list<std::string> loot);
		Enemy(const Enemy& other) = delete;
		Enemy&	operator=(const Enemy& other) = delete;
		~Enemy(void);

		std::string	describe() const override;
	
	private:
		const int	m_hp;
		Inventory	m_bag;
};

