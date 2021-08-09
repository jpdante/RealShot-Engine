PSPSDK = $(shell psp-config --pspsdk-path)
PSPDIR = $(shell psp-config --pspsdk-path)

TARGET = realshot
EXTRA_TARGETS = EBOOT.PBP
OBJS = src/game/TestGame.o src/engine/RealShot.o src/engine/RGame.o src/engine/renderer/RRenderer.o src/engine/renderer/RScene.o src/main.o

CFLAGS = -O2 -G0 -Wall -g
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)
LDFLAGS = 

INCDIR = 
LIBDIR = 
LIBS = -lmikmod -lpsppower -lpspmpeg -lpspaudiocodec -lpspaudiolib -lpspaudio -lpspgum -lpspgu -lpsprtc -lm -lstdc++

PSP_EBOOT_TITLE = RealShot Engine

include $(PSPSDK)/lib/build.mak
