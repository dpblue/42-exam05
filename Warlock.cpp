#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(const Warlock &w): name(w.name), title(w.title)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock &Warlock::operator=(const Warlock &w)
{
	name = w.name;
	title = w.title;
	return *this;
}

Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

const std::string &Warlock::getName() const { return name; }

const std::string &Warlock::getTitle() const { return title; }

void	Warlock::setTitle(const std::string &title) { this->title = title; }

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void	Warlock::learnSpell(ASpell *spell)
{
	//spells[spell->getName()] = spell;
	spellsBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const &spellname)
{
	/*spells_ite it = spells.find(spellname);
	if (it != spells.end())
		spells.erase(it);*/
	spellsBook.forgetSpell(spellname);
}

void	Warlock::launchSpell(std::string const &spellname, ATarget &target)
{
	/*spells_ite it = spells.find(spellname);
	if (it != spells.end())
		it->second->launch(target);*/
	ASpell *spell = spellsBook.createSpell(spellname);
	if (spell)
		spell->launch(target);
}
