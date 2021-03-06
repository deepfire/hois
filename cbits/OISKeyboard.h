#ifndef CGEN_OISKEYBOARD_H
#define CGEN_OISKEYBOARD_H

#include <OIS/OIS.h>

extern "C"
{

using namespace OIS;



#ifdef CGEN_HS
enum KeyCode {
    KC_UNASSIGNED = 0,
    KC_ESCAPE = 1,
    KC_1 = 2,
    KC_2 = 3,
    KC_3 = 4,
    KC_4 = 5,
    KC_5 = 6,
    KC_6 = 7,
    KC_7 = 8,
    KC_8 = 9,
    KC_9 = 10,
    KC_0 = 11,
    KC_MINUS = 12,
    KC_EQUALS = 13,
    KC_BACK = 14,
    KC_TAB = 15,
    KC_Q = 16,
    KC_W = 17,
    KC_E = 18,
    KC_R = 19,
    KC_T = 20,
    KC_Y = 21,
    KC_U = 22,
    KC_I = 23,
    KC_O = 24,
    KC_P = 25,
    KC_LBRACKET = 26,
    KC_RBRACKET = 27,
    KC_RETURN = 28,
    KC_LCONTROL = 29,
    KC_A = 30,
    KC_S = 31,
    KC_D = 32,
    KC_F = 33,
    KC_G = 34,
    KC_H = 35,
    KC_J = 36,
    KC_K = 37,
    KC_L = 38,
    KC_SEMICOLON = 39,
    KC_APOSTROPHE = 40,
    KC_GRAVE = 41,
    KC_LSHIFT = 42,
    KC_BACKSLASH = 43,
    KC_Z = 44,
    KC_X = 45,
    KC_C = 46,
    KC_V = 47,
    KC_B = 48,
    KC_N = 49,
    KC_M = 50,
    KC_COMMA = 51,
    KC_PERIOD = 52,
    KC_SLASH = 53,
    KC_RSHIFT = 54,
    KC_MULTIPLY = 55,
    KC_LMENU = 56,
    KC_SPACE = 57,
    KC_CAPITAL = 58,
    KC_F1 = 59,
    KC_F2 = 60,
    KC_F3 = 61,
    KC_F4 = 62,
    KC_F5 = 63,
    KC_F6 = 64,
    KC_F7 = 65,
    KC_F8 = 66,
    KC_F9 = 67,
    KC_F10 = 68,
    KC_NUMLOCK = 69,
    KC_SCROLL = 70,
    KC_NUMPAD7 = 71,
    KC_NUMPAD8 = 72,
    KC_NUMPAD9 = 73,
    KC_SUBTRACT = 74,
    KC_NUMPAD4 = 75,
    KC_NUMPAD5 = 76,
    KC_NUMPAD6 = 77,
    KC_ADD = 78,
    KC_NUMPAD1 = 79,
    KC_NUMPAD2 = 80,
    KC_NUMPAD3 = 81,
    KC_NUMPAD0 = 82,
    KC_DECIMAL = 83,
    KC_OEM_102 = 86,
    KC_F11 = 87,
    KC_F12 = 88,
    KC_F13 = 100,
    KC_F14 = 101,
    KC_F15 = 102,
    KC_KANA = 112,
    KC_ABNT_C1 = 115,
    KC_CONVERT = 121,
    KC_NOCONVERT = 123,
    KC_YEN = 125,
    KC_ABNT_C2 = 126,
    KC_NUMPADEQUALS = 141,
    KC_PREVTRACK = 144,
    KC_AT = 145,
    KC_COLON = 146,
    KC_UNDERLINE = 147,
    KC_KANJI = 148,
    KC_STOP = 149,
    KC_AX = 150,
    KC_UNLABELED = 151,
    KC_NEXTTRACK = 153,
    KC_NUMPADENTER = 156,
    KC_RCONTROL = 157,
    KC_MUTE = 160,
    KC_CALCULATOR = 161,
    KC_PLAYPAUSE = 162,
    KC_MEDIASTOP = 164,
    KC_VOLUMEDOWN = 174,
    KC_VOLUMEUP = 176,
    KC_WEBHOME = 178,
    KC_NUMPADCOMMA = 179,
    KC_DIVIDE = 181,
    KC_SYSRQ = 183,
    KC_RMENU = 184,
    KC_PAUSE = 197,
    KC_HOME = 199,
    KC_UP = 200,
    KC_PGUP = 201,
    KC_LEFT = 203,
    KC_RIGHT = 205,
    KC_END = 207,
    KC_DOWN = 208,
    KC_PGDOWN = 209,
    KC_INSERT = 210,
    KC_DELETE = 211,
    KC_LWIN = 219,
    KC_RWIN = 220,
    KC_APPS = 221,
    KC_POWER = 222,
    KC_SLEEP = 223,
    KC_WAKE = 227,
    KC_WEBSEARCH = 229,
    KC_WEBFAVORITES = 230,
    KC_WEBREFRESH = 231,
    KC_WEBSTOP = 232,
    KC_WEBFORWARD = 233,
    KC_WEBBACK = 234,
    KC_MYCOMPUTER = 235,
    KC_MAIL = 236,
    KC_MEDIASELECT = 237
};


enum TextTranslationMode {
    Off = 0,
    Unicode = 1,
    Ascii = 2
};


enum Modifier {
    Shift = 1,
    Ctrl = 16,
    Alt = 256
};


#endif

KeyEvent* OIS_KeyEvent_new(Object* obj, KeyCode kc, unsigned int txt);
void OIS_KeyEvent_delete(KeyEvent* this_ptr);
void OIS_KeyListener_delete(KeyListener* this_ptr);
bool OIS_KeyListener_keyPressed(KeyListener* this_ptr, const KeyEvent* arg);
bool OIS_KeyListener_keyReleased(KeyListener* this_ptr, const KeyEvent* arg);
void OIS_Keyboard_delete(Keyboard* this_ptr);
bool OIS_Keyboard_isKeyDown(const Keyboard* this_ptr, KeyCode key);
void OIS_Keyboard_setEventCallback(Keyboard* this_ptr, KeyListener* keyListener);
const KeyListener* OIS_Keyboard_getEventCallback(const Keyboard* this_ptr);
void OIS_Keyboard_setTextTranslation(Keyboard* this_ptr, Keyboard::TextTranslationMode mode);
Keyboard::TextTranslationMode OIS_Keyboard_getTextTranslation(const Keyboard* this_ptr);
bool OIS_Keyboard_isModifierDown(const Keyboard* this_ptr, Keyboard::Modifier mod);

}

#endif

