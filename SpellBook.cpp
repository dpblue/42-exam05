#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &sp): spells(sp.spells)
{
}

SpellBook &SpellBook::operator=(const SpellBook &sb)
{
	spells = sb.spells;
	return *this;
}

SpellBook::~SpellBook()
{
	for (spells_ite it = spells.begin(); it != spells.end(); it++)
		free(it->second);
	spells.clear();
}

void	SpellBook::learnSpell(ASpell *spell)
{
	spells[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const &spellname)
{
	spells_ite it = spells.find(spellname);
	if (it != spells.end()) {
		delete it->second;
		spells.erase(it);
	}
}

ASpell	*SpellBook::createSpell(std::string const &spellname)
{
	spells_ite it = spells.find(spellname);
	if (it != spells.end())
		return it->second;
	else
		return NULL;
	//	it->second->launch(target);
}
