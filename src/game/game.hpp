#include <SFML/Graphics.hpp>

namespace tribeleader {
    class Game {
        public:
        void startGame();
        void stopGame();

        sf::RenderWindow window;

        private:
        void loop();
        void update();
        void draw();
        void pollEvents();
    };
}