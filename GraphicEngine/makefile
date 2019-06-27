#########################
#		MAKEFILE		#
#########################

CC = g++
SRCDIR := src
BUILDDIR := build
TARGET := bin/graphicengine


SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -g # -Wall

LIB = -lGL -lGLU -lglut
INC := -I include

 

all: $(OBJECTS)
	@echo " Linking..."
	mkdir -p bin
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<";$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR)/* $(TARGET)";$(RM) -r $(BUILDDIR)/* $(TARGET)




.PHONY: clean