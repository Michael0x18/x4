#include "cedit.h"
uint8_t topaz_font[128][8][2]={
{{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },},
{{7, 240, },{8, 8, },{10, 72, },{8, 104, },{8, 104, },{10, 72, },{8, 8, },{7, 240, },},
{{7, 240, },{15, 248, },{13, 184, },{15, 152, },{15, 152, },{13, 184, },{15, 248, },{7, 240, },},
{{3, 192, },{7, 224, },{7, 240, },{3, 248, },{7, 240, },{7, 224, },{3, 192, },{0, 0, },},
{{0, 128, },{1, 192, },{3, 224, },{7, 240, },{3, 224, },{1, 192, },{0, 128, },{0, 0, },},
{{1, 192, },{1, 192, },{7, 200, },{14, 56, },{14, 56, },{7, 200, },{1, 192, },{1, 192, },},
{{1, 128, },{3, 192, },{7, 200, },{15, 248, },{15, 248, },{7, 200, },{3, 192, },{1, 128, },},
{{0, 0, },{0, 0, },{0, 192, },{1, 224, },{1, 224, },{0, 192, },{0, 0, },{0, 0, },},
{{63, 255, },{63, 255, },{63, 63, },{62, 31, },{62, 31, },{63, 63, },{63, 255, },{63, 255, },},
{{0, 0, },{1, 224, },{3, 48, },{2, 16, },{2, 16, },{3, 48, },{1, 224, },{0, 0, },},
{{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 112, },{0, 248, },{1, 136, },{11, 136, },{14, 248, },{12, 112, },{15, 0, },{0, 0, },},
{{0, 0, },{7, 32, },{15, 160, },{8, 248, },{8, 248, },{15, 160, },{7, 32, },{0, 0, },},
{{0, 24, },{0, 56, },{15, 248, },{15, 240, },{10, 0, },{10, 0, },{14, 0, },{14, 0, },},
{{0, 28, },{15, 252, },{15, 248, },{10, 0, },{10, 0, },{10, 56, },{15, 248, },{15, 240, },},
{{2, 160, },{2, 160, },{1, 192, },{15, 120, },{15, 120, },{1, 192, },{2, 160, },{2, 160, },},
{{15, 248, },{7, 240, },{3, 224, },{1, 192, },{1, 192, },{0, 128, },{0, 128, },{0, 0, },},
{{0, 128, },{0, 128, },{1, 192, },{1, 192, },{3, 224, },{7, 240, },{15, 248, },{0, 0, },},
{{0, 0, },{2, 32, },{6, 48, },{15, 248, },{15, 248, },{6, 48, },{2, 32, },{0, 0, },},
{{0, 0, },{15, 216, },{15, 216, },{0, 0, },{0, 0, },{15, 216, },{15, 216, },{0, 0, },},
{{7, 0, },{15, 128, },{8, 128, },{15, 248, },{15, 248, },{8, 0, },{15, 248, },{15, 248, },},
{{8, 196, },{29, 230, },{23, 50, },{18, 18, },{19, 58, },{25, 238, },{8, 196, },{0, 0, },},
{{0, 56, },{0, 56, },{0, 56, },{0, 56, },{0, 56, },{0, 56, },{0, 56, },{0, 0, },},
{{0, 0, },{2, 36, },{6, 52, },{15, 252, },{15, 252, },{6, 52, },{2, 36, },{0, 0, },},
{{0, 0, },{2, 0, },{6, 0, },{15, 248, },{15, 248, },{6, 0, },{2, 0, },{0, 0, },},
{{0, 0, },{0, 32, },{0, 48, },{15, 248, },{15, 248, },{0, 48, },{0, 32, },{0, 0, },},
{{0, 128, },{0, 128, },{0, 128, },{2, 160, },{3, 224, },{1, 192, },{0, 128, },{0, 0, },},
{{0, 128, },{1, 192, },{3, 224, },{2, 160, },{0, 128, },{0, 128, },{0, 128, },{0, 0, },},
{{1, 224, },{1, 224, },{0, 32, },{0, 32, },{0, 32, },{0, 32, },{0, 32, },{0, 0, },},
{{0, 128, },{1, 192, },{3, 224, },{0, 128, },{0, 128, },{3, 224, },{1, 192, },{0, 128, },},
{{0, 48, },{0, 240, },{3, 240, },{7, 240, },{3, 240, },{0, 240, },{0, 48, },{0, 0, },},
{{6, 0, },{7, 128, },{7, 224, },{7, 240, },{7, 224, },{7, 128, },{6, 0, },{0, 0, },},
{{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 0, },{7, 0, },{15, 216, },{15, 216, },{7, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{28, 0, },{30, 0, },{0, 0, },{0, 0, },{0, 0, },{30, 0, },{28, 0, },},
{{2, 32, },{15, 248, },{15, 248, },{2, 32, },{15, 248, },{15, 248, },{2, 32, },{0, 0, },},
{{7, 48, },{15, 152, },{8, 136, },{56, 142, },{56, 142, },{12, 248, },{6, 112, },{0, 0, },},
{{3, 8, },{3, 24, },{0, 48, },{0, 96, },{0, 192, },{1, 152, },{3, 24, },{0, 0, },},
{{0, 112, },{6, 248, },{15, 136, },{9, 200, },{15, 112, },{6, 248, },{0, 136, },{0, 0, },},
{{0, 0, },{2, 0, },{30, 0, },{28, 0, },{0, 0, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 0, },{3, 224, },{7, 240, },{12, 24, },{8, 8, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 0, },{8, 8, },{12, 24, },{7, 240, },{3, 224, },{0, 0, },{0, 0, },},
{{0, 128, },{2, 160, },{3, 224, },{1, 192, },{1, 192, },{3, 224, },{2, 160, },{0, 128, },},
{{0, 128, },{0, 128, },{0, 128, },{7, 240, },{7, 240, },{0, 128, },{0, 128, },{0, 128, },},
{{0, 0, },{0, 0, },{0, 4, },{0, 60, },{0, 56, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 128, },{0, 128, },{0, 128, },{0, 128, },{0, 128, },{0, 128, },{0, 128, },{0, 128, },},
{{0, 0, },{0, 0, },{0, 0, },{0, 24, },{0, 24, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 48, },{0, 96, },{0, 192, },{1, 128, },{3, 0, },{6, 0, },{12, 0, },{0, 0, },},
{{7, 240, },{15, 248, },{8, 200, },{9, 136, },{11, 8, },{15, 248, },{7, 240, },{0, 0, },},
{{0, 0, },{2, 8, },{6, 8, },{15, 248, },{15, 248, },{0, 8, },{0, 8, },{0, 0, },},
{{4, 24, },{12, 56, },{8, 104, },{8, 200, },{9, 136, },{15, 24, },{6, 24, },{0, 0, },},
{{4, 16, },{12, 24, },{8, 136, },{8, 136, },{8, 136, },{15, 248, },{7, 112, },{0, 0, },},
{{0, 192, },{1, 192, },{3, 64, },{6, 72, },{15, 248, },{15, 248, },{0, 72, },{0, 0, },},
{{15, 144, },{15, 152, },{8, 136, },{8, 136, },{8, 136, },{8, 248, },{8, 112, },{0, 0, },},
{{3, 240, },{7, 248, },{12, 136, },{8, 136, },{8, 136, },{0, 248, },{0, 112, },{0, 0, },},
{{12, 0, },{12, 0, },{8, 120, },{8, 248, },{9, 128, },{15, 0, },{14, 0, },{0, 0, },},
{{7, 112, },{15, 248, },{8, 136, },{8, 136, },{8, 136, },{15, 248, },{7, 112, },{0, 0, },},
{{7, 0, },{15, 136, },{8, 136, },{8, 136, },{8, 152, },{15, 240, },{7, 224, },{0, 0, },},
{{0, 0, },{0, 0, },{0, 0, },{6, 48, },{6, 48, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 0, },{0, 8, },{6, 56, },{6, 48, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 128, },{1, 192, },{3, 96, },{6, 48, },{12, 24, },{8, 8, },{0, 0, },},
{{0, 0, },{1, 32, },{1, 32, },{1, 32, },{1, 32, },{1, 32, },{1, 32, },{0, 0, },},
{{0, 0, },{8, 8, },{12, 24, },{6, 48, },{3, 96, },{1, 192, },{0, 128, },{0, 0, },},
{{6, 0, },{14, 0, },{8, 0, },{8, 216, },{9, 216, },{15, 0, },{6, 0, },{0, 0, },},
{{7, 240, },{15, 248, },{8, 8, },{9, 232, },{9, 232, },{15, 232, },{7, 192, },{0, 0, },},
{{1, 248, },{3, 248, },{6, 64, },{12, 64, },{6, 64, },{3, 248, },{1, 248, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 136, },{8, 136, },{15, 248, },{7, 112, },{0, 0, },},
{{3, 224, },{7, 240, },{12, 24, },{8, 8, },{8, 8, },{12, 24, },{6, 48, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 8, },{12, 24, },{7, 240, },{3, 224, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 136, },{9, 200, },{12, 24, },{14, 56, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 136, },{9, 192, },{12, 0, },{14, 0, },{0, 0, },},
{{3, 224, },{7, 240, },{12, 24, },{8, 72, },{8, 72, },{12, 112, },{6, 120, },{0, 0, },},
{{15, 248, },{15, 248, },{0, 128, },{0, 128, },{0, 128, },{15, 248, },{15, 248, },{0, 0, },},
{{0, 0, },{0, 0, },{8, 8, },{15, 248, },{15, 248, },{8, 8, },{0, 0, },{0, 0, },},
{{0, 48, },{0, 56, },{0, 8, },{8, 8, },{15, 248, },{15, 240, },{8, 0, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{0, 128, },{3, 224, },{15, 120, },{12, 24, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 8, },{0, 8, },{0, 24, },{0, 56, },{0, 0, },},
{{15, 248, },{15, 248, },{6, 0, },{3, 0, },{3, 0, },{6, 0, },{15, 248, },{15, 248, },},
{{15, 248, },{15, 248, },{7, 0, },{3, 128, },{1, 192, },{15, 248, },{15, 248, },{0, 0, },},
{{3, 224, },{7, 240, },{12, 24, },{8, 8, },{12, 24, },{7, 240, },{3, 224, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 136, },{8, 128, },{15, 128, },{7, 0, },{0, 0, },},
{{7, 224, },{15, 240, },{8, 16, },{8, 112, },{8, 60, },{15, 252, },{7, 228, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{8, 128, },{8, 192, },{15, 248, },{7, 56, },{0, 0, },},
{{6, 48, },{15, 56, },{9, 136, },{8, 136, },{8, 200, },{14, 120, },{6, 48, },{0, 0, },},
{{14, 0, },{12, 0, },{8, 8, },{15, 248, },{15, 248, },{8, 8, },{12, 0, },{14, 0, },},
{{15, 240, },{15, 248, },{0, 8, },{0, 8, },{0, 8, },{15, 248, },{15, 240, },{0, 0, },},
{{15, 192, },{15, 224, },{0, 48, },{0, 24, },{0, 24, },{0, 48, },{15, 224, },{15, 192, },},
{{15, 224, },{15, 248, },{0, 56, },{0, 224, },{0, 224, },{0, 56, },{15, 248, },{15, 224, },},
{{12, 24, },{14, 56, },{3, 96, },{1, 192, },{1, 192, },{3, 96, },{14, 56, },{12, 24, },},
{{14, 0, },{15, 0, },{1, 136, },{0, 248, },{0, 248, },{1, 136, },{15, 0, },{14, 0, },},
{{14, 24, },{12, 56, },{8, 104, },{8, 200, },{9, 136, },{11, 8, },{14, 24, },{12, 56, },},
{{0, 0, },{0, 0, },{15, 248, },{15, 248, },{8, 8, },{8, 8, },{0, 0, },{0, 0, },},
{{14, 0, },{7, 0, },{3, 128, },{1, 192, },{0, 224, },{0, 112, },{0, 56, },{0, 0, },},
{{0, 0, },{0, 0, },{8, 8, },{8, 8, },{15, 248, },{15, 248, },{0, 0, },{0, 0, },},
{{4, 0, },{12, 0, },{24, 0, },{48, 0, },{24, 0, },{12, 0, },{4, 0, },{0, 0, },},
{{0, 2, },{0, 2, },{0, 2, },{0, 2, },{0, 2, },{0, 2, },{0, 2, },{0, 2, },},
{{0, 0, },{0, 0, },{48, 0, },{56, 0, },{8, 0, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 48, },{1, 120, },{1, 72, },{1, 72, },{1, 240, },{0, 248, },{0, 8, },{0, 0, },},
{{8, 0, },{15, 248, },{15, 248, },{1, 8, },{1, 136, },{0, 248, },{0, 112, },{0, 0, },},
{{0, 240, },{1, 248, },{1, 8, },{1, 8, },{1, 8, },{1, 152, },{0, 144, },{0, 0, },},
{{0, 112, },{0, 248, },{1, 136, },{9, 8, },{15, 240, },{15, 248, },{0, 8, },{0, 0, },},
{{0, 240, },{1, 248, },{1, 72, },{1, 72, },{1, 72, },{1, 216, },{0, 208, },{0, 0, },},
{{0, 136, },{7, 248, },{15, 248, },{8, 136, },{12, 0, },{6, 0, },{0, 0, },{0, 0, },},
{{0, 228, },{1, 246, },{1, 18, },{1, 18, },{0, 254, },{1, 252, },{1, 0, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{0, 128, },{1, 0, },{1, 248, },{0, 248, },{0, 0, },},
{{0, 0, },{0, 0, },{1, 8, },{13, 248, },{13, 248, },{0, 8, },{0, 0, },{0, 0, },},
{{0, 0, },{0, 12, },{0, 14, },{0, 2, },{1, 2, },{13, 254, },{13, 252, },{0, 0, },},
{{8, 8, },{15, 248, },{15, 248, },{0, 64, },{0, 224, },{1, 184, },{1, 24, },{0, 0, },},
{{0, 0, },{0, 0, },{8, 8, },{15, 248, },{15, 248, },{0, 8, },{0, 0, },{0, 0, },},
{{1, 248, },{1, 248, },{1, 128, },{0, 248, },{0, 248, },{1, 128, },{1, 248, },{0, 248, },},
{{1, 0, },{1, 248, },{0, 248, },{1, 0, },{1, 0, },{1, 248, },{0, 248, },{0, 0, },},
{{0, 240, },{1, 248, },{1, 8, },{1, 8, },{1, 8, },{1, 248, },{0, 240, },{0, 0, },},
{{1, 2, },{1, 254, },{0, 254, },{1, 18, },{1, 16, },{1, 240, },{0, 224, },{0, 0, },},
{{0, 224, },{1, 240, },{1, 16, },{1, 18, },{0, 254, },{1, 254, },{1, 2, },{0, 0, },},
{{1, 8, },{1, 248, },{0, 248, },{1, 136, },{1, 0, },{1, 192, },{0, 192, },{0, 0, },},
{{0, 144, },{1, 216, },{1, 72, },{1, 104, },{1, 40, },{1, 184, },{0, 144, },{0, 0, },},
{{1, 0, },{1, 0, },{7, 240, },{15, 248, },{1, 8, },{1, 24, },{0, 16, },{0, 0, },},
{{1, 240, },{1, 248, },{0, 8, },{0, 8, },{1, 240, },{1, 248, },{0, 8, },{0, 0, },},
{{1, 192, },{1, 224, },{0, 48, },{0, 24, },{0, 24, },{0, 48, },{1, 224, },{1, 192, },},
{{1, 240, },{1, 248, },{0, 24, },{0, 112, },{0, 112, },{0, 24, },{1, 248, },{1, 240, },},
{{1, 8, },{1, 152, },{0, 240, },{0, 96, },{0, 240, },{1, 152, },{1, 8, },{0, 0, },},
{{1, 226, },{1, 242, },{0, 18, },{0, 18, },{0, 22, },{1, 252, },{1, 248, },{0, 0, },},
{{1, 136, },{1, 152, },{1, 56, },{1, 104, },{1, 200, },{1, 152, },{1, 24, },{0, 0, },},
{{0, 0, },{0, 128, },{0, 128, },{7, 240, },{15, 120, },{8, 8, },{8, 8, },{0, 0, },},
{{0, 0, },{0, 0, },{0, 0, },{15, 120, },{15, 120, },{0, 0, },{0, 0, },{0, 0, },},
{{0, 0, },{8, 8, },{8, 8, },{15, 120, },{7, 240, },{0, 128, },{0, 128, },{0, 0, },},
{{4, 0, },{12, 0, },{8, 0, },{12, 0, },{4, 0, },{12, 0, },{8, 0, },{0, 0, },},
{{0, 112, },{0, 240, },{1, 144, },{3, 16, },{1, 144, },{0, 240, },{0, 112, },{0, 0, },},
};