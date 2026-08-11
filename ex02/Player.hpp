#pragma once

#include "Entity.hpp"

class	Player : public Entity
{
	public:
		explicit Player(const std::string& name, int hp, int armor);
		Player(const Player& other) = delete;
		Player&	operator=(const Player& other) = delete;
		~Player(void);

		void		takeDamage(int amount) override;	
		std::string	describe(void) const override;

	private:
		const int	m_armor;
};

