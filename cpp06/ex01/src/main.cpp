#include "Data.hpp"

Data*		deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

int main()
{
	Data		data("Je suis une data mutafukaz");
	Data *		ret;
	uintptr_t	ser;

	ser = serialize(&data);
	std::cout << ser << std::endl;
	ret = deserialize(ser);
	std::cout << ret->getVal() << std::endl;
}