cmake_minimum_required(VERSION 3.16)

find_package(Git)

function(add_external name)
	if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${name}/CMakeLists.txt")
		message("${name} not found, initialazing")
  		execute_process(COMMAND ${GIT_EXECUTABLE} submodule init
    			WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    		)
	endif()

	add_subdirectory(${name})

endfunction(add_external)

add_external(cxxopts)
add_external(googletest)
