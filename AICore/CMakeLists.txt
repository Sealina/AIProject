cmake_minimum_required( VERSION 2.8 )

SET( DEFINE )
SET( INCLUDE
${CMAKE_SOURCE_DIR}/glm/glm
)
SET( LINK
glm
)

create_project(STATIC "${DEFINE}" "${INCLUDE}" "${LINK}")
