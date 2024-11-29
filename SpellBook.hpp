#pragma once

#include "ASpell.hpp"
#include <string>
#include <iostream>
#include <map>

class SpellBook
{
public:
	typedef std::map<std::string, ASpell *>	spells_t;
	typedef spells_t::iterator				spells_ite;

private:
	spells_t	spells;
	
	SpellBook(const SpellBook &);
	SpellBook &operator=(const SpellBook &);

public:
	SpellBook();
	~SpellBook();
	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string const &spellname);
	ASpell* createSpell(std::string const &spellname);
};
