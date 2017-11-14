# Rules of Commits

Each commit must contain the title of each section, or the next most appropriate message.

# The Set Up Phase

* Make a console project and put it in a folder called `ConsoleBuilds/VSxxxx`
  * Example: `ConsoleBuilds/VS2015/` for Visual Studio 2015
* Add a `main.cpp` file in a folder called `Source/`
  * `Source/` is to be parallel to `ConsolesBuilds/`

Add a file called `main.cpp`:
* Add the most basic `main` functionality to start a console program.
* This file must exist in the `Source/` folder.

When everything is completed, and working/compiling/running as expected, add the files to git and commit/push them.

# Step 1 - The Shape Painter

Create each one of these functions, and make them draw their shape in the console:
* `drawRectangle`
* `drawTriangle`
* `drawSquare`

How you define these functions and how they need to work is entirely up to you.

Call each of these functions in sequential order in `main()`.

When everything is completed, and working/compiling/running as expected, add the files to git and commit/push them.

# Step 2 - The Shape Painter, Less `C`

Create an [abstract class](https://en.wikipedia.org/wiki/Virtual_function#Abstract_classes_and_pure_virtual_functions) titled `Shape`:
* Add a [default constructor](http://en.cppreference.com/w/cpp/language/default_constructor) to it.
* Add a [`virtual` destructor](http://en.cppreference.com/w/cpp/language/destructor) to it.
* Add a [`virtual` method](http://en.cppreference.com/w/cpp/language/virtual) to it called `getName`.
  * It must return a `std::string`.
  * It must not be pure virtual.
* Add a *pure* `virtual` method to it called `draw`.

Create derived classes for each of the shapes from _Step 1_, and implement their methods accordingly.

To derive a class, you must use the following syntax:
```c++
class AppropriateDerivedClassName : public AppropriateBaseClassName
```

Create an instance of each of these classes in `main()`:
* Output each of their name.
* Draw each of their shape.

The order in which you output and draw is entirely up to you.

When everything is completed, and working/compiling/running as expected, add the files to git and commit/push them.
