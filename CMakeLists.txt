cmake_minimum_required(VERSION 3.8)
project(radix_heap)

set(CMAKE_CXX_STANDARD 11)

#set(STXXL_INCLUDE_DIR "stxxl/include" CACHE PATH "stxxl include dir")
#install(DIRECTORY ${STXXL_INCLUDE_DIR} DESTINATION "stxxl/build")

# search for stxxl-config.cmake which contains the library's configuration
set(STXXL_DIR "/home/ndrshrzg/Documents/stxxl/build")
find_package(STXXL REQUIRED)

# print some info (this can be removed)
message(STATUS "STXXL_CXX_FLAGS: ${STXXL_CXX_FLAGS}")
message(STATUS "STXXL_INCLUDE_DIRS: ${STXXL_INCLUDE_DIRS}")
message(STATUS "STXXL_LIBRARIES: ${STXXL_LIBRARIES}")

# apply CXXFLAGS to our configuration
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${STXXL_CXX_FLAGS}")

# add STXXL include directory
include_directories(${STXXL_INCLUDE_DIRS})

# create and executable and linke with STXXL

add_executable(radix_heap main.cpp radix_heap.h test_pass_by_rvalue.h)
target_link_libraries(radix_heap ${STXXL_LIBRARIES})
