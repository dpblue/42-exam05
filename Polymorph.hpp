// Polymorph (Name: "Polymorph", Effects: "turned into a critter")

#include "ASpell.hpp"

class Polymorph: public ASpell
{
public:
	Polymorph();
	~Polymorph();
	ASpell *clone() const;
};
