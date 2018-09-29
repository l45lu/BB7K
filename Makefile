CXX=g++
CXXFLAGS= -Wall -MMD 
OBJECTS =  main.o building.o coopfee.o dctimsline.o gameboard.o goose.o gototim.o NH.o OSAP.o player.o SLC.o tuition.o academic.o controller.o dice.o residences.o gyms.o
OPENDS = ${OBJECTS:.o=.d}
EXEC = bb7k
${EXEC}: ${OBJECTS} 
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}
-include ${DEPENDS}
.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
