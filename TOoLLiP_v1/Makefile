.PHONY: clean

TOoLLiP_v1.so: TOoLLip_emulator_v1.o TOoLLiP_v1.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm TOoLLiP_emulator_v1.o TOoLLiP_v1.o TOoLLiP_v1.so
