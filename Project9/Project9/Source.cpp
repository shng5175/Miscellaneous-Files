{
    int i, j, ii, jj, si, sj, bl;
    int r1, g1, b1, n1;
    bl = 16;

    for (i = 0; i < dim; i += bl)
    {
        for (j = 0; j < dim; j += bl)
        {
            for (ii = i; ii < i + bl; ++ii)
            {
                for (jj = j; jj < j + bl; ++jj)
                {
                    r1 = g1 = b1 = n1 = 0;
                    for (si = max(ii - 1, 0); si <= min(ii + 1, dim - 1); si++)
                    {
                        for (sj = max(jj - 1, 0); sj <= min(jj + 1, dim - 1); sj++)
                        {
                            r1 += (int)src[RIDX(si, sj, dim)].red;
                            g1 += (int)src[RIDX(si, sj, dim)].green;
                            b1 += (int)src[RIDX(si, sj, dim)].blue;
                            ++n1;
                        }
                    }
                    dst[RIDX(ii, jj, dim)].red = r1 / n1;
                    dst[RIDX(ii, jj, dim)].green = g1 / n1;
                    dst[RIDX(ii, jj, dim)].blue = b1 / n1;
                }
            }
        }
    }
}