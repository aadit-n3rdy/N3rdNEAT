cmake_minimum_required(VERSION 3.10)

project(N3rdNEAT VERSION 0.1)

add_subdirectory(godot-cpp)
add_library(N3rdNEAT SHARED src/GodotLibrary.cpp src/N3rdNEAT.cpp src/node.cpp src/connector.cpp src/neural_network.cpp)
target_link_libraries(N3rdNEAT PUBLIC godot-cpp)
target_include_directories(N3rdNEAT
	PUBLIC
	$<INSTALL_INTERFACE:include>
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src
	)

