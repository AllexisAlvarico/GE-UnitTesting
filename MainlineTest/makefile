BUILD_DIR	:= ./bin
SRC_DIR		:= ./src
PROD_DIR	:= ./src/ProductionTest.cpp

OUTPUT_NAME	:= UNITCPP_Test
COMP_FILES	:= ${SRC_DIR}/* ${PROD_DIR}

INCLUDE		:= ${SDL_SDK}\include
LIB			:= ${SDL_SDK}\lib
DLL			:= "-lcppunit"

MSG_START	:= "Build Started"
MSG_END		:= "Build Complete"
MSG_CLEAN	:= "Cleaning up"

all			:= build

build:
	@echo ${MSG_START}

	#remove directory if it exits and then create directory
	rm -rf ${BUILD_DIR} || true

	#create bin directory
	mkdir ${BUILD_DIR}

	g++ -o ${BUILD_DIR}/${OUTPUT_NAME} ${COMP_FILES} -I${INCLUDE} -L${LIB} $(DLL)
	@echo ${MSG_END}