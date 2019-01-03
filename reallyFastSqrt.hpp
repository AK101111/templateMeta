constexpr int _sqrt(int x, int lo, int hi){
    if (lo == hi)
        return lo;
    const int mid = (lo + hi + 1) / 2;
    if (x < mid * mid)
        return _sqrt(x, lo, mid - 1);
    else
        return _sqrt(x, mid, hi);
}   

constexpr int sqrt(int x){
  return _sqrt(x, 0, 46431);
}
