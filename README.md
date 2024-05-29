# OOP project2

# 💐 Flower Shop 💐

This C++ project is a simulation of a flower shop, where flowers are represented with various attributes and behaviors. It includes classes for different types of flowers such as roses, lilies, and sunflowers, each with its own unique characteristics (ex: scent,color).

## Classes Overview:

* 🌸'AbstractFlower':
   - _Represents a generic flower with common attributes like name, family, and a unique identifier._
   - _Provides virtual methods for emitting scent and describing the flower._
* 🌹'Rose':
   - _Derived from AbstractFlower,has additional attributes like color._
   - _Includes methods for emitting scent, describing, and adding to a bouquet._
* 🪻'Liliac':
   - _Derived from AbstractFlower,has an additional attribute for fragrance (None, Mild, Strong)._
   - _Includes methods for emitting scent and printing information._
* 🌻'Sunflower':
   - _Derived from AbstractFlower,has an additional attribute for the number of seeds._
   - _Includes methods for emitting scent, printing sunflower information, and controlling the seed data._
* 💐'Bouquet':
   - _Represents a collection of roses._
   - _Allows adding roses to the bouquet and provides information about the bouquet (number of roses in the bouquet)._
     
### Compilation:
   - Clone the repository to your local machine.
   - Navigate to the directory containing main.cpp.
   - Edit data in main.cpp as you wish (rose-color; liliac-scent, id; sunflower-number of seeds).
   - Run the code.
     

