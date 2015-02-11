OBJS := $(patsubst src/%.cpp,obj/%.o,$(wildcard src/*))



all:lib/libMapKeys.a lib/libMapKeys.so

lib/libMapKeys.a:${OBJS}
	@echo ${OBJS}
	ar cr lib/libMapKeys.a ${OBJS}

lib/libMapKeys.so:$(OBJS)
	g++ --shared -o lib/libMapKeys.so $(OBJS)

obj/%.o:src/%.cpp
	g++ -c -I./include $? -o $@

clean:
	rm -rf obj/* lib/*


