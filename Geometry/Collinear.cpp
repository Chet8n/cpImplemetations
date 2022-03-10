bool collinear(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    ll area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    // to get actual area, divide this by 2
    if (area == 0)
        return true;
    return false;
}
