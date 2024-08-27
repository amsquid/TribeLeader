#include <SFML/Graphics.hpp>

#include "tiles/tile.hpp"
#include "entities/entity.hpp"

namespace tribeleader {
	class Game {
	public:
		void startGame();
		void stopGame();

		sf::RenderWindow window;

		std::vector<tribeleader::Tile> tiles;
		std::vector<tribeleader::Entity> entities;

		bool keysDown[sf::Keyboard::KeyCount] = { false };

		tribeleader::Camera camera;
		tribeleader::Player player;

	private:
		void loop();
		void update();
		void draw();
		void pollEvents();
	};
}