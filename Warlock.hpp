#pragma once

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <string>
#include <iostream>
#include <map>

class Warlock
{
public:
	typedef std::map<std::string, ASpell *>	spells_t;
	typedef spells_t::iterator				spells_ite;

private:
	std::string	name;
	std::string	title;
	//spells_t	spells;
	SpellBook	spellsBook;
	
	Warlock();
	Warlock(const Warlock &);
	Warlock &operator=(const Warlock &);
public:
	Warlock(std::string name, std::string title);
	~Warlock();
	const std::string &getName() const;
	const std::string &getTitle() const;
	void	setTitle(const std::string &);
	void	introduce() const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string const &spellname);
	void	launchSpell(std::string const &spellname, ATarget &target);
};
