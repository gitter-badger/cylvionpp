PROJECT(cylvionppcore)

INCLUDE_DIRECTORIES(include)
AUX_SOURCE_DIRECTORY(src cylvionppcore_SOURCES)

ADD_LIBRARY(${PROJECT_NAME} SHARED ${cylvionppcore_SOURCES})
INSTALL(TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION lib
)
