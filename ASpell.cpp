#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(const ASpell &s): name(s.name), effects(s.effects)
{
}

ASpell &ASpell::operator=(const ASpell &w)
{
	name = w.name;
	effects = w.effects;
	return *this;
}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects)
{
}

ASpell::~ASpell()
{
}

const std::string &ASpell::getName() const { return name; }

const std::string &ASpell::getEffects() const { return effects; }

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
