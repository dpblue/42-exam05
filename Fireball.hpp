// Fireball (Name: "Fireball", Effects: "burnt to a crisp")

#include "ASpell.hpp"

class Fireball: public ASpell
{
public:
	Fireball();
	~Fireball();
	ASpell *clone() const;
};
