
CXX := g++
CXXFL := -g -Wall -O2
LDFL := -g -Wall -O2 -lgtest

code:	main.cc
	$(CXX) $(CXXFL) $^ -o $@
	
test:	test.o
	$(CXX) $(LDFL) $^ -o $@
	
test.o: test.cc 
# test.d
	$(CXX) $(CXXFL) -c $^ -o $@
	
# test.d:	test.cc
# 	$(CXX) $< -MM $(CXXFLAGS) -MT $@ -o $@
	
clean:
	@$(RM) *.o *.d code test
