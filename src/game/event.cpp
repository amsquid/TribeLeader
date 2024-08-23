#include "game.hpp"

void tribeleader::Game::pollEvents() {
	for (sf::Event event = sf::Event{}; window.pollEvent(event);) {
		if (event.type == sf::Event::Closed) {
			stopGame();
		}
	}
}