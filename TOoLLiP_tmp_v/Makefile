.PHONY: clean

TOoLLiP_tmp_v.so: TOoLLiP_emulator_tmp_v.o TOoLLiP_tmp_v.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm TOoLLiP_emulator_tmp_v.o TOoLLiP_tmp_v.o TOoLLiP_tmp_v.so
