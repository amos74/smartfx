#ifdef __GRPX_IMPLEMENT_


#define SMALL_FONT_CHARS     95

#define SMALL_FONT_WIDTH     7
#define SMALL_FONT_HEIGHT    10
#define SMALL_FONT_BPP       1
#define SMALL_FONT_BYTEWIDTH 1


const static unsigned char DefaultSmallEngFont[1+SMALL_FONT_CHARS][SMALL_FONT_HEIGHT*SMALL_FONT_BYTEWIDTH] = {
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF },      //  Invalidate character
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },      // ' '
    { 0x30, 0x78, 0x78, 0x78, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00 },      //  !
    { 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },      //  "
    { 0x28, 0x28, 0x7C, 0x7C, 0x28, 0x7C, 0x7C, 0x28, 0x28, 0x00 },      //  #
    { 0x10, 0x7C, 0xD2, 0xD0, 0x78, 0x16, 0x96, 0x7C, 0x10, 0x00 },      //  $
    { 0x60, 0x94, 0x6C, 0x18, 0x30, 0x60, 0xD8, 0xA4, 0x18, 0x00 },      //  %
    { 0x38, 0x6C, 0x6C, 0x38, 0x70, 0xDA, 0xDA, 0xCC, 0x7A, 0x00 },      //  &
    { 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },      //  '
    { 0x0C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00 },      //  (
    { 0x60, 0x30, 0x18, 0x18, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00 },      //  )
    { 0x00, 0x6C, 0x28, 0x38, 0x7C, 0x38, 0x28, 0x6C, 0x00, 0x00 },      //  *
    { 0x00, 0x00, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0x00, 0x00 },      //  +
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x60, 0x00 },      //  ,
    { 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00 },      //  -
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00 },      //  .
    { 0x0C, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0xC0, 0xC0, 0x00 },      //  /
    { 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },      //  0
    { 0x18, 0x38, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 },      //  1
    { 0x78, 0xCC, 0xCC, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFC, 0x00 },      //  2
    { 0x78, 0xCC, 0xCC, 0x0C, 0x38, 0x0C, 0xCC, 0xCC, 0x78, 0x00 },      //  3
    { 0x38, 0x38, 0x78, 0x58, 0xD8, 0xD8, 0xFC, 0x18, 0x18, 0x00 },      //  4
    { 0xFC, 0xC0, 0xC0, 0xC0, 0xF8, 0x0C, 0x0C, 0x18, 0xF0, 0x00 },      //  5
    { 0x38, 0x30, 0x60, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },      //  6
    { 0xFC, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0x60, 0x00 },      //  7
    { 0x78, 0xCC, 0xCC, 0xEC, 0x78, 0xDC, 0xCC, 0xCC, 0x78, 0x00 },      //  8
    { 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x18, 0x30, 0x70, 0x00 },      //  9
    { 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, 0x00 },      //  :
    { 0x00, 0x38, 0x38, 0x00, 0x00, 0x38, 0x38, 0x18, 0x30, 0x00 },      //  ;
    { 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x00 },      //  <
    { 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00 },      //  =
    { 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x00 },      //  >
    { 0x78, 0xCC, 0xCC, 0x18, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00 },      //  ?
    { 0x78, 0x9C, 0x0C, 0xEC, 0xEC, 0xAC, 0xAC, 0xAC, 0x78, 0x00 },      //  @
    { 0x30, 0x78, 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00 },      //  A
    { 0xF8, 0xCC, 0xCC, 0xCC, 0xF8, 0xCC, 0xCC, 0xCC, 0xF8, 0x00 },      //  B
    { 0x78, 0xCC, 0xCC, 0xC0, 0xC0, 0xC0, 0xCC, 0xCC, 0x78, 0x00 },      //  C
    { 0xF0, 0xD8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xD8, 0xF0, 0x00 },      //  D
    { 0xFC, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFC, 0x00 },      //  E
    { 0xFC, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0x00 },      //  F
    { 0x78, 0xCC, 0xCC, 0xC0, 0xC0, 0xDC, 0xCC, 0xCC, 0x7C, 0x00 },      //  G
    { 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 },      //  H
    { 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 },      //  I
    { 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00 },      //  J
    { 0xCC, 0xCC, 0xD8, 0xD8, 0xF0, 0xD8, 0xD8, 0xCC, 0xCC, 0x00 },      //  K
    { 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFC, 0x00 },      //  L
    { 0xC6, 0xC6, 0xEE, 0xD6, 0xD6, 0xD6, 0xC6, 0xC6, 0xC6, 0x00 },      //  M
    { 0xC6, 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0xC6, 0x00 },      //  N
    { 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },      //  O
    { 0xF8, 0xCC, 0xCC, 0xCC, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0x00 },      //  P
    { 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0xDC, 0x76, 0x00 },      //  Q
    { 0xF8, 0xCC, 0xCC, 0xCC, 0xF8, 0xD8, 0xCC, 0xCC, 0xCC, 0x00 },      //  R
    { 0x78, 0xCC, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0xCC, 0x78, 0x00 },      //  S
    { 0xFC, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00 },      //  T
    { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },      //  U
    { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 },      //  V
    { 0xC6, 0xC6, 0xC6, 0xD6, 0xD6, 0xD6, 0x6C, 0x6C, 0x6C, 0x00 },      //  W
    { 0xCC, 0xCC, 0x68, 0x30, 0x30, 0x58, 0xCC, 0xCC, 0xCC, 0x00 },      //  X
    { 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x30, 0x30, 0x00 },      //  Y
    { 0xFC, 0x0C, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xC0, 0xFC, 0x00 },      //  Z
    { 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00 },      //  [
    { 0xC0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x0C, 0x00 },      // '\'
    { 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00 },      //  ]
    { 0x30, 0x78, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },      //  ^
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00 },      //  _
    { 0x38, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },      //  `
    { 0x00, 0x00, 0x78, 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0x7C, 0x00 },      //  a
    { 0xC0, 0xC0, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xF8, 0x00 },      //  b
    { 0x00, 0x00, 0x78, 0xCC, 0xC0, 0xC0, 0xC0, 0xCC, 0x78, 0x00 },      //  c
    { 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x00 },      //  d
    { 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xFC, 0xC0, 0xC4, 0x78, 0x00 },      //  e
    { 0x3C, 0x60, 0x60, 0x60, 0xFC, 0x60, 0x60, 0x60, 0x60, 0x00 },      //  f
    { 0x00, 0x00, 0x7C, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8, 0x00 },      //  g
    { 0xC0, 0xC0, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 },      //  h
    { 0x30, 0x00, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00 },      //  i
    { 0x18, 0x00, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF0, 0x00 },      //  j
    { 0xC0, 0xC0, 0xCC, 0xCC, 0xD8, 0xF0, 0xD8, 0xCC, 0xCC, 0x00 },      //  k
    { 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x00 },      //  l
    { 0x00, 0x00, 0xFC, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xC6, 0x00 },      //  m
    { 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 },      //  n
    { 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },      //  o
    { 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xF8, 0xC0, 0x00 },      //  p
    { 0x00, 0x00, 0x7C, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0x00 },      //  q
    { 0x00, 0x00, 0xCC, 0xDC, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00 },      //  r
    { 0x00, 0x00, 0x7C, 0xC0, 0xC0, 0x78, 0x0C, 0x0C, 0xF8, 0x00 },      //  s
    { 0x60, 0x60, 0xFC, 0x60, 0x60, 0x60, 0x60, 0x60, 0x3C, 0x00 },      //  t
    { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x00 },      //  u
    { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 },      //  v
    { 0x00, 0x00, 0xC6, 0xD6, 0xD6, 0xD6, 0xD6, 0x6C, 0x6C, 0x00 },      //  w
    { 0x00, 0x00, 0xCC, 0xCC, 0x78, 0x30, 0x78, 0xCC, 0xCC, 0x00 },      //  x
    { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8, 0x00 },      //  y
    { 0x00, 0x00, 0xFC, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFC, 0x00 },      //  z
    { 0x18, 0x30, 0x30, 0x20, 0x60, 0x20, 0x30, 0x30, 0x18, 0x00 },      //  {
    { 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00 },      //  |
    { 0x60, 0x32, 0x30, 0x10, 0x18, 0x10, 0x30, 0x30, 0x60, 0x00 },      //  }
    { 0xE0, 0xB6, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }       //  ~
};


#endif
