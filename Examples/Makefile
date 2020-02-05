CC = gcc
CCFLAGS = -W -Wall

# Comment following line to disable parser debug messages
CCFLAGS += -DCONFIGURATION_HEX_PARSER_ENABLE_DEBUG_MESSAGES

HEX_PARSER_INCLUDES_PATH = ../Includes
HEX_PARSER_SOURCES_PATH = ../Sources

BINARY = hex-parser-example

all:
	$(CC) $(CCFLAGS) -I$(HEX_PARSER_INCLUDES_PATH) $(HEX_PARSER_SOURCES_PATH)/Hex_Parser.c Main.c -o $(BINARY)

clean:
	rm -f $(BINARY)
