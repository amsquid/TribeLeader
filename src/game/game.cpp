#include "game.hpp"
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <iostream>

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
	// Window setup
	window.create(
		sf::VideoMode(1280, 768),
		"Tribe Leader",
		sf::Style::Titlebar | sf::Style::Close
	);

	window.setFramerateLimit(60);

	window.setPosition(sf::Vector2i(0, 0));

	// Entities

	// Blocks
	for (int x = -100; x < 100; x++) {
		int y = (int)std::floorf(std::sin(x * (3.1415f / 100.0f)) * 10.0f);

		while (y < 100) {
			tribeleader::Tile tile;

			tile.position.x = x;
			tile.position.y = y;

			tiles.push_back(tile);

			y++;
		}

	}

	loop();
}