cmake_minimum_required(VERSION 3.0)
project(AbstractFactory)
set(CMAKE_CXX_STANDARD 14)
set(CXX_STANDARD ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_executable(pizza pizza_main.cc
    black_olives.cc
    cheese_pizza.cc
    chicago_pizza_ingredient_factory.cc
    chicago_pizza_store.cc
    clams_pizza.cc
    egg_plant.cc
    fresh_clams.cc
    frozen_clams.cc
    garlic.cc
    ingredient.cc
    marinara_sauce.cc
    mozzarella_cheese.cc
    mushroom.cc
    ny_pizza_ingredient_factory.cc
    ny_pizza_store.cc
    onion.cc
    pizza.cc
    pizza_store.cc
    plum_tomato_sauce.cc
    red_pepper.cc
    reggiano_cheese.cc
    sliced_pepperoni.cc
    spinach.cc
    thick_crust_dough.cc
    thin_crust_dough.cc)