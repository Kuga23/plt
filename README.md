# Projet Logiciel Transversal 

> This project is to make a video game in C++ for our final year in ENSEA "Informatique et systèmes" specialization

[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

## Livraison 3.1

## Get Started

Clone the repository
```sh 
$ git clone https://github.com/BillyDin/plt.git
```

## Build

```sh
$ cd plt
$ mkdir build
$ cd build
$ cmake .. && make
```

## Print

```sh
$ ./bin/client hello
```

## Test

```sh
$ cd ./plt/build
$ make code-coverage
```

## Print a rendering

```sh
$ ./bin/client render
```

## Run the engine

```sh
$ ./bin/client engine
```

## Play vs Random AI

```sh
$ ./bin/client random_ai
```
## Play vs Heuristic AI

```sh
$ ./bin/client heuristic_ai
```
## Random AI vs Random AI

```sh
$ ./bin/client raivsrai
```

## Release History

* 2.final
    * Report 2.final
    * AI diagram
    * Implemented code for the Random AI
    * Player vs Random AI
    * Random AI vs Random AI

* 2.2
    * Report 2.2
    * Engine diagram
    * Implemented code for the game engine
    * Print different renderings of state by calling the game engine 

* 2.1
    * Report 2.1
    * Render diagram
    * Implemented code to print a rendering of state

* 1.final
    * State diagram 
    * State implementation
    * Test code coverage
    * Report 1.final

* 1.1
    * Implement the code to print a message
    * Report 1.1
