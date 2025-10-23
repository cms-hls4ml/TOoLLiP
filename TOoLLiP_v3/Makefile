.PHONY: clean

TOoLLiP_v3.so: TOoLLiP_emulator_v3.o TOoLLiP_v3.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm TOoLLiP_emulator_v3.o TOoLLiP_v3.o TOoLLiP_v3.so
