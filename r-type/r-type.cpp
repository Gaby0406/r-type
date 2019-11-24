// r-type.cpp : définit le point d'entrée de l'application.
//

#include <SFML/System.hpp>
#include <iostream>

int main()
{
	sf::Clock Clock;
	while (Clock.GetElapsedTime() < 5.f)
	{
		std::cout << Clock.GetElapsedTime() << std::endl;
		sf::Sleep(0.5f);
	}

	return 0;
}