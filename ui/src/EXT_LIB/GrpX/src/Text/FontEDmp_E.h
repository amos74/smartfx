#ifdef __GRPX_IMPLEMENT_


#define EXTEND_FONT_CHARS     95

#define EXTEND_FONT_WIDTH     8
#define EXTEND_FONT_HEIGHT    16
#define EXTEND_FONT_BPP       1
#define EXTEND_FONT_BYTEWIDTH 1


const static unsigned char DefaultExtendEngFont[1+EXTEND_FONT_CHARS][EXTEND_FONT_HEIGHT*EXTEND_FONT_BYTEWIDTH] = {
    {0xFF,0xC3,0xC3,0xA5,0xA5,0xA5,0x99,0x99,0x99,0x99,0xA5,0xA5,0xA5,0xC3,0xC3,0xFF},   //  Invalidate character
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // ' ' 
    {0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x00,0x00},   //  ! 
    {0x00,0x6C,0x6C,0x6C,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   //  " 
    {0x00,0x00,0x00,0x36,0x36,0x36,0xFF,0x6C,0x6C,0x6C,0xFE,0xD8,0xD8,0xD8,0x00,0x00},   //  # 
    {0x00,0x00,0x10,0x10,0x7C,0xD6,0xD6,0xD0,0x7C,0x16,0xD6,0xD6,0x7C,0x10,0x10,0x00},   //  $ 
    {0x00,0x00,0x00,0x30,0x59,0xD3,0x66,0x0C,0x18,0x30,0x66,0xCB,0x1A,0x0C,0x00,0x00},   //  % 
    {0x00,0x00,0x00,0x38,0x6C,0x6C,0x6C,0x38,0x70,0xDA,0xCE,0xCC,0xEE,0x7A,0x00,0x00},   //  & 
    {0x00,0x18,0x18,0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   //  ' 
    {0x00,0x00,0x0C,0x18,0x30,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,0x18,0x0C,0x00},   //  ( 
    {0x00,0x00,0x60,0x30,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x30,0x60,0x00},   //  ) 
    {0x00,0x00,0x00,0x00,0x00,0x18,0xDB,0x7E,0x3C,0x7E,0xDB,0x18,0x00,0x00,0x00,0x00},   //  * 
    {0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0xFF,0x18,0x18,0x18,0x18,0x00,0x00,0x00},   //  + 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30,0x00},   //  , 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   //  - 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00},   //  . 
    {0x00,0x00,0x00,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x60,0x60,0xC0,0x00,0x00},   //  / 
    {0x00,0x00,0x00,0x18,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x18,0x00,0x00},   //  0 
    {0x00,0x00,0x00,0x18,0x18,0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,0x00},   //  1 
    {0x00,0x00,0x00,0x3C,0x66,0x66,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x7E,0x00,0x00},   //  2 
    {0x00,0x00,0x00,0x7E,0x0C,0x0C,0x18,0x38,0x0C,0x06,0x06,0x06,0x6C,0x38,0x00,0x00},   //  3 
    {0x00,0x00,0x00,0x18,0x18,0x30,0x30,0x6C,0x6C,0xCC,0xFE,0x0C,0x0C,0x0C,0x00,0x00},   //  4 
    {0x00,0x00,0x00,0x7C,0x60,0x60,0x60,0x78,0x0C,0x06,0x06,0x06,0xCC,0x78,0x00,0x00},   //  5 
    {0x00,0x00,0x00,0x0C,0x18,0x30,0x60,0x78,0xCC,0xC6,0xC6,0xC6,0x6C,0x38,0x00,0x00},   //  6 
    {0x00,0x00,0x00,0x7E,0x06,0x06,0x06,0x0C,0x0C,0x18,0x18,0x18,0x18,0x18,0x00,0x00},   //  7 
    {0x00,0x00,0x00,0x38,0x6C,0xC6,0xC6,0x6C,0x38,0x6C,0xC6,0xC6,0x6C,0x38,0x00,0x00},   //  8 
    {0x00,0x00,0x00,0x38,0x6C,0xC6,0xC6,0xC6,0x66,0x3C,0x0C,0x18,0x30,0x60,0x00,0x00},   //  9 
    {0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00},   //  : 
    {0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30,0x00,0x00},   //  ; 
    {0x00,0x00,0x00,0x06,0x0C,0x18,0x30,0x60,0xC0,0x60,0x30,0x18,0x0C,0x06,0x00,0x00},   //  < 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00},   //  = 
    {0x00,0x00,0x00,0xC0,0x60,0x30,0x18,0x0C,0x06,0x0C,0x18,0x30,0x60,0xC0,0x00,0x00},   //  > 
    {0x00,0x00,0x00,0x18,0x3C,0x66,0x06,0x0C,0x18,0x18,0x18,0x00,0x18,0x18,0x00,0x00},   //  ? 
    {0x00,0x00,0x00,0x3C,0x66,0xC6,0xDE,0xF6,0xF6,0xF6,0xDE,0xC0,0x60,0x3E,0x00,0x00},   //  @ 
    {0x00,0x00,0x00,0x18,0x3C,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x66,0x66,0x00,0x00},   //  A 
    {0x00,0x00,0x00,0xF8,0x6C,0x66,0x66,0x66,0x7C,0x66,0x66,0x66,0x66,0x7C,0x00,0x00},   //  B 
    {0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x60,0x60,0x60,0x60,0x66,0x66,0x3C,0x00,0x00},   //  C 
    {0x00,0x00,0x00,0xF8,0x6C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x6C,0x78,0x00,0x00},   //  D 
    {0x00,0x00,0x00,0xFE,0x66,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x66,0x7E,0x00,0x00},   //  E 
    {0x00,0x00,0x00,0xFE,0x66,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x60,0x70,0x00,0x00},   //  F 
    {0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x60,0x60,0x6E,0x66,0x66,0x66,0x3C,0x00,0x00},   //  G 
    {0x00,0x00,0x00,0xE6,0x66,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x66,0x67,0x00,0x00},   //  H 
    {0x00,0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00},   //  I 
    {0x00,0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x30,0xE0},   //  J 
    {0x00,0x00,0x00,0xE6,0x66,0x6C,0x6C,0x78,0x78,0x6C,0x6C,0x66,0x66,0x67,0x00,0x00},   //  K 
    {0x00,0x00,0x00,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x66,0x7E,0x00,0x00},   //  L 
    {0x00,0x00,0x00,0xC6,0xC6,0xEE,0xFE,0xD6,0xD6,0xC6,0xC6,0xC6,0xC6,0xC6,0x00,0x00},   //  M 
    {0x00,0x00,0x00,0xE6,0x66,0x66,0x76,0x76,0x7E,0x6E,0x6E,0x66,0x66,0x67,0x00,0x00},   //  N 
    {0x00,0x00,0x00,0x38,0x6C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x6C,0x38,0x00,0x00},   //  O 
    {0x00,0x00,0x00,0xFC,0x66,0x66,0x66,0x6C,0x78,0x60,0x60,0x60,0x60,0x70,0x00,0x00},   //  P 
    {0x00,0x00,0x00,0x38,0x6C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x6C,0x38,0x6E,0x04,0x00},   //  Q 
    {0x00,0x00,0x00,0xF8,0x6C,0x66,0x66,0x6C,0x78,0x6C,0x66,0x66,0x66,0x67,0x00,0x00},   //  R 
    {0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x30,0x18,0x0C,0x06,0x66,0x66,0x3C,0x00,0x00},   //  S 
    {0x00,0x00,0x00,0xFF,0xDB,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00},   //  T 
    {0x00,0x00,0x00,0xE6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x6E,0x3B,0x00,0x00},   //  U 
    {0x00,0x00,0x00,0xCE,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x6C,0x38,0x00,0x00},   //  V 
    {0x00,0x00,0x00,0xCE,0xC6,0xC6,0xC6,0xD6,0xD6,0xFE,0xEE,0xC6,0xC6,0xC6,0x00,0x00},   //  W 
    {0x00,0x00,0x00,0xC3,0x66,0x66,0x24,0x3C,0x18,0x3C,0x24,0x66,0x66,0xC3,0x00,0x00},   //  X 
    {0x00,0x00,0x00,0xC7,0xC3,0x66,0x66,0x3C,0x3C,0x18,0x18,0x18,0x18,0x3C,0x00,0x00},   //  Y 
    {0x00,0x00,0x00,0x7F,0x63,0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,0xC6,0xFE,0x00,0x00},   //  Z 
    {0x00,0x00,0x00,0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,0x00,0x00},   //  [ 
    {0x00,0x00,0x00,0xC0,0xC0,0x60,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,0x00,0x00},   // '\'
    {0x00,0x00,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00,0x00},   //  ] 
    {0x00,0x00,0x00,0x18,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   //  ^ 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00},   //  _ 
    {0x00,0x00,0x18,0x18,0x18,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   //  ` 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x78,0xCC,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00},   //  a 
    {0x00,0x00,0x00,0xE0,0x60,0x60,0x7C,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00},   //  b 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC0,0xC0,0xC0,0xC0,0xC6,0x7C,0x00,0x00},   //  c 
    {0x00,0x00,0x00,0x1C,0x0C,0x0C,0x7C,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x7E,0x00,0x00},   //  d 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00},   //  e 
    {0x00,0x00,0x00,0x1E,0x32,0x30,0xFE,0x30,0x30,0x30,0x30,0x30,0x30,0x78,0x00,0x00},   //  f 
    {0x00,0x00,0x00,0x00,0x00,0x06,0x78,0xCC,0xCC,0xCC,0x78,0xC0,0x7C,0xC6,0xC6,0x7C},   //  g 
    {0x00,0x00,0x00,0xE0,0x60,0x60,0x7C,0x66,0x66,0x66,0x66,0x66,0x66,0x67,0x00,0x00},   //  h 
    {0x00,0x00,0x00,0x18,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00},   //  i 
    {0x00,0x00,0x00,0x18,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x30,0xE0},   //  j 
    {0x00,0x00,0x00,0xE0,0x60,0x60,0x6C,0x6C,0x78,0x78,0x6C,0x66,0x66,0x66,0x00,0x00},   //  k 
    {0x00,0x00,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00},   //  l 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0x00,0x00},   //  m 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x66,0x66,0x66,0x66,0x66,0x66,0x67,0x00,0x00},   //  n 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00},   //  o 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x66,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x70},   //  p 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x76,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x7C,0x0C,0x1C},   //  q 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0xF6,0x66,0x60,0x60,0x60,0x60,0xF0,0x00,0x00},   //  r 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC0,0x70,0x1C,0x06,0xC6,0x7C,0x00,0x00},   //  s 
    {0x00,0x00,0x00,0x00,0x30,0x30,0xFE,0x30,0x30,0x30,0x30,0x30,0x32,0x1E,0x00,0x00},   //  t 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xE6,0x66,0x66,0x66,0x66,0x66,0x66,0x3B,0x00,0x00},   //  u 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xCE,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x38,0x00,0x00},   //  v 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xCE,0xC6,0xC6,0xD6,0xFE,0xEE,0xC6,0xC6,0x00,0x00},   //  w 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xC3,0x66,0x3C,0x18,0x18,0x3C,0x66,0xC3,0x00,0x00},   //  x 
    {0x00,0x00,0x00,0x00,0x00,0x00,0xC7,0x63,0x63,0x36,0x36,0x3C,0x18,0x18,0x30,0xE0},   //  y 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x66,0x06,0x0C,0x18,0x30,0x66,0x7E,0x00,0x00},   //  z 
    {0x00,0x00,0x0C,0x18,0x18,0x18,0x18,0x18,0x30,0x18,0x18,0x18,0x18,0x18,0x0C,0x00},   //  { 
    {0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00},   //  | 
    {0x00,0x00,0x30,0x18,0x18,0x18,0x18,0x18,0x0C,0x18,0x18,0x18,0x18,0x18,0x30,0x00},   //  } 
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xDB,0x0E,0x00,0x00,0x00,0x00,0x00,0x00}    //  ~
};

#endif

