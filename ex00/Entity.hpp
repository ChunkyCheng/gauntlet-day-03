#pragma once

#include <string>

class	Entity
{
	protected:
		explicit Entity(const std::string& name);
		Entity(const Entity& other) = delete;
		Entity&	operator=(const Entity& other) = delete;
	public:
		virtual ~Entity(void);

	public:
		virtual std::string	describe() const = 0;

	protected:
		const std::string	m_name;
};

