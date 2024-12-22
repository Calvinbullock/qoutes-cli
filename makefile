
# target: the name of your executable file
target = runMe

# c++ compiler
cxx = g++

# c++ compiler flags (optimize for speed)
cxxflags = -o2 -Wall

# source files (cpp)
srcs = main.cpp

# object files (created from source files)
objs = $(srcs:.cpp=.o)

# header files (include for compilation)
hdrs = qoute.h

# rule to compile a source file (.cpp) into an object file (.o)
%.o: %.cpp $(hdrs)
	$(cxx) $(cxxflags) $(includes) -c $< -o $@

# rule to link object files into the final executable
$(target): $(objs)
	$(cxx) $(cxxflags) $(objs) -o $(target) $(ldflags)

# rule to clean up object files and the executable
clean:
	#rm -f $(objs) $(target)
	rm -f $(objs)

