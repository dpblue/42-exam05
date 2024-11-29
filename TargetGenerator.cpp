#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator(const TargetGenerator &sp): targets(sp.targets)
{
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &sb)
{
	targets = sb.targets;
	return *this;
}

TargetGenerator::~TargetGenerator()
{
	for (targets_ite it = targets.begin(); it != targets.end(); it++)
		free(it->second);
	targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	targets[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const &targetType)
{
	targets_ite it = targets.find(targetType);
	if (it != targets.end()) {
		delete it->second;
		targets.erase(it);
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &targetType)
{
	targets_ite it = targets.find(targetType);
	if (it != targets.end())
		return it->second;
	else
		return NULL;
	//	it->second->launch(target);
}
