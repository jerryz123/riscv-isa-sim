require_rv64;
P_LOOP(32, {
  int32_t aop = P_SH(ps1, 0);
  int32_t bop = P_SH(ps2, 1);  
  if ((INT16_MIN != aop) | (INT16_MIN != bop)) {
    pd = aop * bop;
    pd <<= 1;
  } else {
    pd = INT32_MAX;
    P.VU.vxsat |= 1;
  }
})