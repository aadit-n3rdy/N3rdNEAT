cmake_minimum_required(VERSION 3.10)

project(N3rdNEAT VERSION 0.1)

add_library(N3rdNEAT include/N3rdNEAT/N3rdNEAT.h src/node.cpp src/connector.cpp src/neural_network.cpp)

