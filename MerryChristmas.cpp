#include <iostream>
#include <windows.h>

int main() {
    

    //CONSOLE OUTPUT HANDLE
    HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);

    //12 = RED COLOR
    SetConsoleTextAttribute(consolehandle, 12);

    //HAPPY 2024!
    std::cout << "$$\\                                                      $$$$$$\\   $$$$$$\\   $$$$$$\\  $$\\   $$\\                 $$\\                                      " << std::endl;
    std::cout << "$$ |                                                    $$  __$$\\ $$$ __$$\\ $$  __$$\\ $$ |  $$ |                $$ |                                    " << std::endl;
    std::cout << "$$$$$$\\   $$$$$$\\   $$$$$$\\   $$$$$$\\  $$\\   $$\\       \\__/  $$ |$$$$\\ $$ |\\__|  $$ |$$ |  $$ |       $$$$$$$\\ $$ |  $$\\ $$\\   $$\\ $$$$$$$$\  $$$$$$\\  " << std::endl;
    std::cout << "$$  __$$\\  \\____$$\\ $$  __$$\\ $$  __$$\\ $$ |  $$ |       $$$$$$  |$$\\$$\\$$ | $$$$$$  |$$$$$$$$ |      $$  _____|$$ | $$  |$$ |  $$ |\\____$$  |$$  __$$\\ " << std::endl;
    std::cout << "$$ |  $$ | $$$$$$$ |$$ /  $$ |$$ /  $$ |$$ |  $$ |      $$  ____/ $$ \\$$$$ |$$  ____/ \\_____$$ |      \\$$$$$$\\  $$$$$$  / $$ |  $$ | $$$$ _/ $$$$$$$$ |" << std::endl;
    std::cout << "$$ |  $$ |$$  __$$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |      $$ |      $$ |\\$$$ |$$ |            $$ |       \\____$$\\ $$  _$$<  $$ |  $$ | $$  _/   $$   ____|" << std::endl;
    std::cout << "$$ |  $$ |\\$$$$$$$ |$$$$$$$  |$$$$$$$  |\\$$$$$$$ |      $$$$$$$$\\ \\$$$$$$  /$$$$$$$$\\       $$ |      $$$$$$$  |$$ | \\$$\\ \\$$$$$$$ |$$$$$$$$\\ \\$$$$$$$\ " << std::endl;
    std::cout << "\\__|  \\__| \\_______|$$  ____/ $$  ____/  \\____$$ |      \\________| \\______/ \\________|      \\__|      \\_______/ \\__|  \\__| \\____$$ |\\________|  \\_______|" << std::endl;
    std::cout << "                    $$ |      $$ |      $$\\   $$ |                                                                        $$\\   $$ |                      " << std::endl;
    std::cout << "                    $$ |      $$ |      \\$$$$$$  |                                                                        \\$$$$$$  |                      " << std::endl;
    std::cout << "                    \\__|      \\__|       \\______/                                                                          \\______/                       " << std::endl;


    //13 = PINK COLOR
    SetConsoleTextAttribute(consolehandle, 13);

    //CHRISTMAS TREE
    std::cout << "                                                     |\n"
                 "                                                    -+-\n"
                 "                                                     A\n"
                 "                                                    /=\\               /\\  /\\    ___  _ __  _ __ __    __\n"
                 "                                                  i/ O \\i            /  \\/  \\  / _ \\| '__|| '__|\\ \\  / /\n"
                 "                                                  /=====\\           / /\\  /\\ \\|  __/| |   | |    \\ \\/ /\n"
                 "                                                  /  i  \\           \\ \\ \\/ / / \\___/|_|   |_|     \\  /\n"
                 "                                                i/ O * O \\i                                       / /\n"
                 "                                                /=========\\        __  __                        /_/    _\n"
                 "                                                /  *   *  \\        \\ \\/ /        /\\  /\\    __ _  ____  | |\n"
                 "                                              i/ O   i   O \\i       \\  /   __   /  \\/  \\  / _` |/ ___\\ |_|\n"
                 "                                              /===========\\         /  \\  |__| / /\\  /\\ \\| (_| |\\___ \\  _\n"
                 "                                              /  O   i   O  \\      /_/\\_\\      \\ \\ \\/ / / \\__,_|\\____/ |_|\n"
                 "                                            i/ *   O   O   * \\i\n"
                 "                                            /=================\\\n"
                 "                                                   |___|\n";


    return 0;
}
