#include "game.hpp"
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>

void tribeleader::Game::loop() {
	while (window.isOpen()) {
		pollEvents();
		update();
		draw();
	}
}

void tribeleader::Game::stopGame() {
	window.close();
}

void tribeleader::Game::startGame() {
	window.create(
		sf::VideoMode(1280, 768),
		"Tribe Leader",
		sf::Style::Titlebar | sf::Style::Close
	);

	window.setFramerateLimit(60);

	window.setPosition(sf::Vector2i(0, 0));

	for (int x = 0; x < 20; x++) {
		tribeleader::Tile tile;

		tile.position.x = x;

		tiles.push_back(tile);
	}

	loop();
}