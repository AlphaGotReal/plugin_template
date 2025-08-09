cmake_minimum_required(VERSION 3.5)
project(package_b)

find_package(ament_cmake REQUIRED)
find_package(pluginlib REQUIRED)
find_package(package_a REQUIRED)

add_library(${PROJECT_NAME} SHARED
  src/my_plugin.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC include)
ament_target_dependencies(${PROJECT_NAME} package_a pluginlib)

# Install plugin library
install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install plugin description XML
pluginlib_export_plugin_description_file(package_a my_plugin.xml)

ament_package()
