# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

# Build tests
add_executable(tests
  tests.cpp)
target_link_libraries(tests
  ${GLFW_LIBRARIES})


# Build vec2
add_executable(vec2
  vec2.cpp)
target_link_libraries(vec2
  ${GLFW_LIBRARIES})

# Build mat2
add_executable(mat2
  mat2.cpp)
target_link_libraries(mat2
  ${GLFW_LIBRARIES})