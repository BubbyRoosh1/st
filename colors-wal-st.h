const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0a12", /* black   */
  [1] = "#2E2845", /* red     */
  [2] = "#5D2D47", /* green   */
  [3] = "#634D5C", /* yellow  */
  [4] = "#9B2736", /* blue    */
  [5] = "#9A3348", /* magenta */
  [6] = "#CE4449", /* cyan    */
  [7] = "#f0c7ab", /* white   */

  /* 8 bright colors */
  [8]  = "#a88b77",  /* black   */
  [9]  = "#2E2845",  /* red     */
  [10] = "#5D2D47", /* green   */
  [11] = "#634D5C", /* yellow  */
  [12] = "#9B2736", /* blue    */
  [13] = "#9A3348", /* magenta */
  [14] = "#CE4449", /* cyan    */
  [15] = "#f0c7ab", /* white   */

  /* special colors */
  [256] = "#0a0a12", /* background */
  [257] = "#f0c7ab", /* foreground */
  [258] = "#f0c7ab",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
