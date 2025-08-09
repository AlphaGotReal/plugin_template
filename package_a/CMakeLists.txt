cmake_minimum_required(VERSION 3.5)
project(package_a)

find_package(ament_cmake REQUIRED)
install(DIRECTORY include/ DESTINATION include)
ament_export_include_directories(include)

ament_package()
