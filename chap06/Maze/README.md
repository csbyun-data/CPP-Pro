### Maze Game
* Maze
  * [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/main.cpp)
  * [Map.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Map.h)
  * [Map.c](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Map.cpp)
  * [Game.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Game.h)
  * [Game.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Game.cpp)
  * [Direction.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Direction.h)
  * [ConsoleController.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/ConsoleController.h)
  * [ConsoleController.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/ConsoleController.cpp)
  ```
  void ConsoleController::goTo (int xPosition , int yPosition){
    static HANDLE h = NULL;
    if (!h){
      h = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    COORD c = {xPosition, yPosition};
    SetConsoleCursorPosition(h, c);
  }
  
  void ConsoleController::clearScreen(){
    system("cls");
  }
  
  void ConsoleController::setCursorVisibility(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
  }
  ```
  * [Avatar.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Avatar.h)
  * [Avatar.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Maze/Avatar.cpp)  
  ![image](https://github.com/user-attachments/assets/37ba3f75-ff4a-4426-91ae-23487400e62f)

    
* [참조 : [https://github.com/AL4AL/Maze/tree/master](https://github.com/AL4AL/Maze/tree/master)]
