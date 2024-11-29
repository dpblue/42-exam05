#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(const ATarget &t): type(t.type)
{
}

ATarget &ATarget::operator=(const ATarget &t)
{
	type = t.type;
	return *this;
}

ATarget::ATarget(std::string type): type(type)
{
}

ATarget::~ATarget()
{
}

const std::string &ATarget::getType() const { return type; }

void ATarget::getHitBySpell(const ASpell &s) const
{
	std::cout << type << " has been " << s.getEffects() << std::endl;
}
