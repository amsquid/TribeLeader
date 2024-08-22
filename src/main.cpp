#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window = sf::RenderWindow{ { 1920u, 1080u }, "Tribe Leader" };
	window.setFramerateLimit(144);

	while (window.isOpen()) {
		for (sf::Event event = sf::Event{}; window.pollEvent(event);) {
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.display();
	}
}