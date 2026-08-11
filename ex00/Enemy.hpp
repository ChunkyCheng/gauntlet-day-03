#pragma once

#include "Entity.hpp"

class	Enemy : public Entity
{
	public:
		explicit Enemy(const std::string& name, int hp);
		Enemy(const Enemy& other) = delete;
		Enemy&	operator=(const Enemy& other) = delete;
		~Enemy(void);

		std::string	describe() const override;
	
	private:
		const int	m_hp;
};

