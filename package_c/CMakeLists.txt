cmake_minimum_required(VERSION 3.5)
project(package_c)

find_package(ament_cmake REQUIRED)
find_package(pluginlib REQUIRED)
find_package(package_a REQUIRED)

add_executable(plugin_loader src/main.cpp)
ament_target_dependencies(plugin_loader package_a pluginlib)

install(TARGETS plugin_loader DESTINATION lib/${PROJECT_NAME})

ament_package()
