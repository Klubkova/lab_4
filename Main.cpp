#include <iostream>
#include <cstdlib>
#include "FigureArray.cpp"
int main()
{
	int x = 6;
	int i;
	FigureArray <Pentagon, Rhombus, Trapeze> figure_array(10);
	std::cout << "[1] - insert, [2] - get, [3] - delete, [4] - print, [0] - exit" << std::endl;
	while (x != 0)
	{
		std::cout << "enter command: ";
		std::cin >> x;
		if (x == 1)
		{
			char figure_name;
			std::cout << "enter figure name ([p]-pentagon, [r]-rhombus, [t]-trapeze): ";
			std::cin >> figure_name;
			std::cout << "enter index: ";
			std::cin >> i;
			if (figure_name == 'p') figure_array.Insert(std::shared_ptr<Pentagon>(new Pentagon(std::cin)), i);
			else if (figure_name == 'r') figure_array.Insert(std::shared_ptr<Rhombus>(new Rhombus(std::cin)), i);
			else if (figure_name == 't') figure_array.Insert(std::shared_ptr<Trapeze>(new Trapeze(std::cin)), i);	
		}
		else if (x == 2)
		{
			std::cout << "enter index: ";
			std::cin >> i;
			if (figure_array.IsPentagon(i)) std::cout << *figure_array.GetPentagon(i) << std::endl;
			else if (figure_array.IsRhombus(i)) std::cout << *figure_array.GetRhombus(i) << std::endl;
			else if (figure_array.IsTrapeze(i)) std::cout << *figure_array.GetTrapeze(i) << std::endl;
			else std::cout << "Empty element" << std::endl;
		}
		else if (x == 3)
		{
			std::cout << "enter index: ";
			std::cin >> i;
			figure_array.Delete(i);
		}
		else if (x == 4) std::cout << "figure array:\n" << figure_array;
	}
	return 0;
}