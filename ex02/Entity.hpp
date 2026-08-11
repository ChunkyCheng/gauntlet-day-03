#pragma once

#include <string>

class	Entity
{
	protected:
		explicit Entity(const std::string& name, int maxHp);
		Entity(const Entity& other) = delete;
		Entity&	operator=(const Entity& other) = delete;
	public:
		virtual ~Entity(void);

		virtual void		takeDamage(int amount);
		void				heal(int amount);
		bool				isAlive(void) const;
		int					currentHp(void) const;
		int					maxHp(void) const;
		virtual std::string	describe() const = 0;

	protected:
		const std::string	m_name;

	private:
		const int	m_maxHp;
		int			m_currentHp;
};

