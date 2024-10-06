# GameEventSystem
I used the Singleton Design Pattern for the GameEngine class. There is only one instance of thee GameEngine 
being used throughout the whole program, and this instance is accessed using a static method. The GameEngine is
useed to control the game events and player actions.

## Benefits
1. Reduced Namespace Pollution: avoids the creation of multiple instances of a class, which prevents the use of
   many variables and functions, promoting a cleaner-looking code.
2. Makes it easy to change your mind and allow the use of more than one instance.
3. Allows extension by subclassing: This pattern can be used in a way that allows subclasses to inherit from
   the singleton class.

## Consequences
1. Same drawbacks of a global variable if misused: This makes it harder to manage dependencies and test
   individual components in isolation.
2. Implementation may be less efficient than a global variable.
3. Concurrency Pitfalls: In a multi-threaded system, issues with the Singleton pattern generation and initialization may arise. Race situations
   can occur when multiple threads attempt to generate the Singleton at the same time.
