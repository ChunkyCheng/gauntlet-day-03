#pragma once

#include "Entity.hpp"

class	Player : public Entity
{
	public:
		explicit Player(const std::string& name);
		Player(const Player& other) = delete;
		Player&	operator=(const Player& other) = delete;
		~Player(void);

		std::string	describe(void) const override;
};

