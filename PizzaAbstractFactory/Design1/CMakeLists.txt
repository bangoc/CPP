cmake_minimum_required(VERSION 3.0)
project(pizza)
set(CMAKE_CXX_STANDARD 14)
set(CXX_STANDARD ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(pizza
  pizza_main.cc
  pizza.cc
  chicago_pizza_store.cc
  chicago_style_cheese_pizza.cc
  chicago_style_clam_pizza.cc
  chicago_style_pepperoni_pizza.cc
  chicago_style_veggie_pizza.cc
  ny_pizza_store.cc
  ny_style_cheese_pizza.cc
  ny_style_clam_pizza.cc
  ny_style_pepperoni_pizza.cc
  ny_style_veggie_pizza.cc)