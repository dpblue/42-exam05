#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>

class ASpell
{
protected:
	std::string name;
	std::string effects;
	
public:
	ASpell();
	ASpell(const ASpell &);
	ASpell &operator=(const ASpell &);
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();
	const std::string &getName() const;
	const std::string &getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(const class ATarget &) const;
};
