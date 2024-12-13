#pragma once

#include <SDL2/SDL.h>

static int vitaButtonToDirectInputKeyNum[12] = {
    0x39, //	SDL_SCANCODE_SPACE = 44, - DIK_SPACE
    0x0E, //	SDL_SCANCODE_BACKSPACE = 42, - DIK_BACK
    0xD2, //	SDL_SCANCODE_INSERT = 73, // insert on PC, help on some Mac keyboards (but does send code 73, not 117) - DIK_INSERT
    0x0F, //	SDL_SCANCODE_TAB = 43, - DIK_TAB

    0x50, //	SDL_SCANCODE_KP_2 = 90, - DIK_NUMPAD2    
    0x48, //	SDL_SCANCODE_KP_8 = 96, - DIK_NUMPAD8

    0x50, //	SDL_SCANCODE_KP_2 = 90, - DIK_NUMPAD2
    0x4B, //	SDL_SCANCODE_KP_4 = 92, - DIK_NUMPAD4
    0x48, //	SDL_SCANCODE_KP_8 = 96, - DIK_NUMPAD8
    0x4D, //	SDL_SCANCODE_KP_6 = 94, - DIK_NUMPAD6

    0x01, //	SDL_SCANCODE_ESCAPE = 41, - DIK_ESCAPE
    0x1C, //	SDL_SCANCODE_RETURN = 40, - DIK_RETURN
};