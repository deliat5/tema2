#OOP project2

#💐 Flower Shop 💐

This C++ project is a simulation of a flower shop, where flowers are represented with various attributes and behaviors. The library includes classes for different types of flowers such as roses, lilies, and sunflowers, each with its own unique characteristics (ex: scent,color).

##Classes Overview:

-**🌸 'AbstractFlower':
  -Represents a generic flower with common attributes like name, family, and a unique identifier.
  -Provides virtual methods for emitting scent and describing the flower.
-**🌹 'Rose':
  -Derived from AbstractFlower,has additional attributes like color.
  -Includes methods for emitting scent, describing, and adding to a bouquet.
-**🪻 'Liliac':
  -Derived from AbstractFlower,has an additional attribute for fragrance (None, Mild, Strong).
  -Includes methods for emitting scent and printing information.
-**🌻 'Sunflower':
  -Derived from AbstractFlower,has an additional attribute for the number of seeds.
  -Includes methods for emitting scent, printing sunflower information, and controlling the seed data.
-**💐 'Bouquet':
  -Represents a collection of roses.
  -Allows adding roses to the bouquet and provides information about the bouquet (number of roses in the bouquet).

###Compilation:
-Clone the repository to your local machine.
-Navigate to the directory containing main.cpp.
-Edit data in main.cpp as you wish (rose-color; liliac-scent, id; sunflower-number of seeds)
-Run the code
