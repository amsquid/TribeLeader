#include "game.hpp"

void tribeleader::Game::pollEvents() {
	for (sf::Event event = sf::Event{}; window.pollEvent(event);) {
		if (event.type == sf::Event::Closed) {
			stopGame();
		}

		if (event.type == sf::Event::KeyPressed) {
			keysDown[event.key.code] = true;
		}

		if (event.type == sf::Event::KeyReleased) {
			keysDown[event.key.code] = false;
		}
	}
}