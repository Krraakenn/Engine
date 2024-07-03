# Engine
The cpp engine for the games.


Compile the source code with the following command:
```bash
g++ -c main.cpp src/engine.cpp -I/opt/homebrew/Cellar/sfml/2.6.1/include
```

Create the final executable with the following command:
```bash
g++ main.o engine.o -o Engine -L/opt/homebrew/Cellar/sfml/2.6.1/lib -lsfml-graphics -lsfml-window -lsfml-system
```
