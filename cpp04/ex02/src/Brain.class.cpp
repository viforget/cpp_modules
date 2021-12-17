#include "Brain.class.hpp"

Brain::Brain( void )
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++ )
		this->ideas[i] = "I wanna eat that PIE";
	std::cout << "I'm ALIVE" << std::endl;
	return;
}

Brain::Brain( Brain & src )
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++ )
		this->ideas[i] = src.ideas[i];
	std::cout << "Who Am I ?" << std::endl;
	return;
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "I'm DEAD" << std::endl;
}

std::string *	Brain::get_idea()
{
	return(this->ideas);
}