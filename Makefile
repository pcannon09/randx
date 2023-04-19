INCS = 
OBJS = main.o randnum.o randbool.o randvector.o
EXE  = main

CPPVER = 20
SRCDIR = src
INCDIR = include
OBJDIR = obj

CXXFLAGS = -Wall -Wextra -Wconversion -g -MMD -MP -std=c++$(CPPVER)
INCLUDES = -I$(INCDIR) -I$(SRCDIR)
LIBS = 

_INCS = $(patsubst %,$(INCDIR)/%,$(INCS))
_OBJS = $(patsubst %,$(OBJDIR)/%,$(OBJS))

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(_INCS)
	@echo "Compiling $@ from $<..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(INCLUDES)
	@echo

$(EXE): $(_OBJS)
	@echo "Compiling... "
	@echo "Linking $@ from $^..."
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)
	@echo

.PHONY: clean

all: $(EXE)

create:
	@echo "Creating dir 'obj'"
	@mkdir obj
	@echo "Done!"

clean:
	@echo "Cleaning..."
	@rm -f $(OBJDIR)/*
	@rm -f $(EXE)
	@echo "Done."

show_obj:
	@echo "Finding..."
	@ls obj
	@echo "Done!"

reset: clean $(EXE)
