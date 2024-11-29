#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>
#include <map>

class TargetGenerator
{
public:
	typedef std::map<std::string, ATarget *>	targets_t;
	typedef targets_t::iterator				targets_ite;

private:
	targets_t	targets;
	
	TargetGenerator(const TargetGenerator &);
	TargetGenerator &operator=(const TargetGenerator &);
public:
	TargetGenerator();
	~TargetGenerator();
	void	learnTargetType(ATarget *target);
	void	forgetTargetType(std::string const &targetType);
	ATarget* createTarget(std::string const &targetType);
};
