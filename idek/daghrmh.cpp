int janji(int p, int q, int t) {
  if (p == q) {
    return t;
  } else if (t % 2 == 1) {
    return 2 + janji(p + 1, q, t + 1);
  } else {
    return 2 + janji(p, q - 1, t + 1);
  }
}
10 8 0

2+ 10 7 1
2+2+ 11 7 2
2+2+2+ 11 6 3
2+2+2+2+ 12 6 4
2+2+2+2+2+ 12 5 5

