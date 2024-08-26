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

		tribeleader::Camera camera;

	private:
		void loop();
		void update();
		void draw();
		void pollEvents();
	};
}