# Ensure that we do an out of source buld

macro(MACRO_ENSURE_OUT_OF_SOURCE_BUILD MSG)
  string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_BINARY_DIR}" insource)
  get_filename_component(PARENTDIR ${CMAKE_SOURCE_DIR} PATH)
  string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${PARENTDIR}" insourcesubdir)
  if(insourcesubdir)
    message(
      FATAL_ERROR
        "${MSG} If you believe that you are attempting an out of source build be sure to make sure that you source directory does not have a CMakeCache.txt file."
    )
  endif(insourcesubdir)
  if(insource)
    message(
      FATAL_ERROR
        "${MSG} If you believe that you are attempting an out of source build be sure to make sure that you source directory does not have a CMakeCache.txt file."
    )
  endif(insource)
endmacro(MACRO_ENSURE_OUT_OF_SOURCE_BUILD)
