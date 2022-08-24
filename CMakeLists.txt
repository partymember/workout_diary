cmake_minimum_required(VERSION 3.10)
project(workout_diary)

set(EXECUTABLE_OUTPUT_PATH "bin")

set(CMAKE_ECLIPSE_VERSION "4.24.0")

add_executable(${CMAKE_PROJECT_NAME}
    main.cpp
    Workout.cpp
    Utils.cpp
)