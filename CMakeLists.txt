cmake_minimum_required(VERSION 3.16)
project(ModernCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 单文件示例：<name>.cpp -> 可执行文件 <name>
set(EXAMPLES
  01_nullptr_test
  02_constexpr_test
  03_initializer_list
  04_structured_bindings
)

foreach(name IN LISTS EXAMPLES)
  add_executable(${name} ${name}.cpp)
endforeach()
