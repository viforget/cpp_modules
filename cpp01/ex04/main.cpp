#include <iostream>
#include <iomanip>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2)
{
	size_t i = 0;

	i = line.find(s1);
	while(i != (size_t)-1)
	{
		line.erase(i, s1.length());
		line.insert(i, s2);
		i = line.find(s1);
	}
	return (line);
}

int 	main(int ac, char **av)
{
	std::string	s1; 
	std::string	s2;
	std::string	line;
	std::string	line2;

	if (ac < 4 || !av[1])
		return (1);

	std::ifstream ifs(av[1]);
	std::ofstream ofs((std::string)av[1] + ".replace");

	s1 = av[2];
	s2 = av[3];
	if (!ifs.is_open())
		return (1);
	while(getline(ifs, line))
	{
		line2 = replace(line, s1, s2);
		ofs << line2 << std::endl;
	}
	ifs.close();
	ofs.close();
}