CC = gcc
CFLAGS =
LDFLAGS =
MAIN = .\\main.c
OUT = .\\out\\main.out

.SILENT:
all: $(MAIN)
	if [ ! -d .//out ]; then mkdir .//out; fi
	$(CC) $(CFLAGS) -o $(OUT) $(MAIN) $(LDFLAGS)

run: all
	$(OUT)

clean:
	rm -f $(OUT)
