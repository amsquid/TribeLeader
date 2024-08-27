#include "game.hpp"

#include <iostream>

void tribeleader::Game::update() {
	if (keysDown[sf::Keyboard::Up])   camera.zoom += 0.1f;
	if (keysDown[sf::Keyboard::Down]) camera.zoom -= 0.1f;

	float horizontal = 0.0f;

	if (keysDown[sf::Keyboard::A]) horizontal += -player.speed;
	if (keysDown[sf::Keyboard::D]) horizontal +=  player.speed;

	player.velocity = sf::Vector2f(horizontal, player.velocity.y);

	std::vector<tribeleader::Entity>::iterator it;

	for (it = entities.begin(); it < entities.end(); it++) {
		it->move();
	}

	player.move();

	std::cout << player.position.x << "\n";

	camera.position = player.position;
}