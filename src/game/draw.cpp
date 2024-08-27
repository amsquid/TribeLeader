#include "game.hpp"
#include "tiles/tile.hpp"

void tribeleader::Game::draw() {
	sf::VertexArray vertices(sf::Quads, tiles.size() * 4);

	float aspect = window.getSize().x / window.getSize().y;

	std::vector<tribeleader::Tile>::iterator it;
	int i = 0;

	for (it = tiles.begin(); it < tiles.end(); it++) {
		sf::Vector2i pos = it->position;

		sf::Vector2f scaledPos = sf::Vector2f(
			(pos.x - camera.position.x) * (camera.zoom * aspect),
			(pos.y - camera.position.y) * (camera.zoom * aspect)
		);

		vertices[(i * 4) + 0].position = sf::Vector2f(
			scaledPos.x + (window.getSize().x / 2),
			scaledPos.y + (window.getSize().y / 2)
		);

		vertices[(i * 4) + 1].position = sf::Vector2f(
			scaledPos.x + (window.getSize().x / 2) + (camera.zoom * aspect),
			scaledPos.y + (window.getSize().y / 2)
		);

		vertices[(i * 4) + 2].position = sf::Vector2f(
			scaledPos.x + (window.getSize().x / 2) + (camera.zoom * aspect),
			scaledPos.y + (window.getSize().y / 2) + (camera.zoom * aspect)
		);

		vertices[(i * 4) + 3].position = sf::Vector2f(
			scaledPos.x + (window.getSize().x / 2),
			scaledPos.y + (window.getSize().y / 2) + (camera.zoom * aspect)
		);

		vertices[(i * 4) + 0].color = sf::Color::Red;
		vertices[(i * 4) + 1].color = sf::Color::Blue;
		vertices[(i * 4) + 2].color = sf::Color::Green;
		vertices[(i * 4) + 3].color = sf::Color::Yellow;

		i++;
	}

	window.clear(sf::Color(145, 219, 218, 255));

	window.draw(vertices);

	window.display();
}