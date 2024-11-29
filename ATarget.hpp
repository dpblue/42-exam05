#pragma once

#include "ASpell.hpp"
#include <string>
#include <iostream>

class ATarget
{
protected:
	std::string type;
		
public:
	ATarget();
	ATarget(const ATarget &);
	ATarget &operator=(const ATarget &);
	ATarget(std::string type);
	virtual ~ATarget();
	const std::string &getType() const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(const class ASpell &s) const;
};
