# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)



project(labyrinthe)

# Crée des variables avec les fichiers à compiler
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11")
    
file(
	GLOB_RECURSE
	sources_files
	Labyrinthe/*.cpp
)


add_executable(
	main_exe
	${sources_files}	
)