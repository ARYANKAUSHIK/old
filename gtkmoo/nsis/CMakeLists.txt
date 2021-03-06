#
# NSIS builder
#

# Output file name
SET(NSIS_OUTPUT_FILE "${PROJECT_NAME}.exe")

# NSIS is only available for Win32 builds (native or cross compilation)
IF(WIN32)
    SET(NSIS_OUTPUT_DIR "${CMAKE_BINARY_DIR}/bin/")
    # Check contribs existence
    IF(EXISTS "${CMAKE_SOURCE_DIR}/contribs/")
        MESSAGE(STATUS "Contribs found!")
        # Copy necessary libraries required at runtime
        FILE(COPY "${CMAKE_SOURCE_DIR}/contribs/bin/"
             DESTINATION ${NSIS_OUTPUT_DIR}
             FILES_MATCHING PATTERN "*.dll")
        MESSAGE(STATUS "Configuring NSIS")
        # Copy and configure the nsis script file
        CONFIGURE_FILE(installer.nsi "${NSIS_OUTPUT_DIR}/installer.nsi" @ONLY)
        ADD_CUSTOM_TARGET(installer
            ${CMAKE_COMMAND} -E remove "${NSIS_OUTPUT_DIR}${NSIS_OUTPUT_FILE}"
            COMMAND makensis "${NSIS_OUTPUT_DIR}/installer.nsi"
            WORKING_DIRECTORY "${NSIS_OUTPUT_DIR}"
            )
        ADD_DEPENDENCIES(installer gtkmoo)
    ELSE(EXISTS "${CMAKE_SOURCE_DIR}/contribs/")
        MESSAGE(WARNING "Contribs not available, you won't be able to create an installer.")
    ENDIF(EXISTS "${CMAKE_SOURCE_DIR}/contribs/")
ENDIF(WIN32)
