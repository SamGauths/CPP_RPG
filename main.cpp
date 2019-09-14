#include "constants.h"
#include "Scenes.h"
#include "EventHandler.h"
#include "Window.h"

using namespace std;

int main(int argc, char **argv)
{
    INIT()

    Window game_window("Hello World!", 640, 480);
    game_window._init_();
    game_window.update();

    CLEAR()

    return 0;
}
