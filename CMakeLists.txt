cmake_minimum_required(VERSION 4.0)
project(Classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Classes main.cpp
        Length.cpp
        Length.h
        Point.cpp
        Point.h
        Array.cpp
        Array.h
        Widget.cpp
        Widget.h
        TextBox.cpp
        TextBox.h
        Shape.cpp
        Shape.h
        Rectangle.cpp
        Rectangle.h
        CheckBox.cpp
        CheckBox.h
        FileReader.cpp
        FileReader.h
        FileWriter.cpp
        FileWriter.h
        FileIO.cpp
        FileIO.h
        AccountLocked.cpp
        AccountLocked.h)
