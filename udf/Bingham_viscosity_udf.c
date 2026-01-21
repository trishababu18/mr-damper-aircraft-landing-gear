#include "udf.h"

DEFINE_PROPERTY(Bingham_viscosity, c, t)
{
real vis;

real ys;
real yielstr=0;
real muf;
//real strain;
muf = 0.092
#if !RP_HOST
//strain = C_STRAIN_RATE_MAG(c,t);
yieldstr=(372.655*pow(C_UDMI(c,t,2),3)-6869*pow(C_UDMI(c,t,2),2)+3.37e4*(C_UDMI(c,t,2))-2403.717)/40;
//printf("yirld %f \n",yieldstr);
//C_UDMI(c,t,43)=yielstr;
if((yieldstr/9.2>C_STRAIN_RATE_MAG(c,t)) && C_UDMI(c,t,2)!=0)
{
vis=9.2;
//printf("Strain %f \n",C_STRAIN_RATE_MAG(c,t));
}
else if((yieldstr/9.2<C_STRAIN_RATE_MAG(c,t)) && C_STRAIN_RATE_MAG(c,t,2)!=0)
{
vis= muf + yieldstr/C_STRAIN_RATE_MAG(c,t);
//printf("Viscosity %f \n",vis);
}
else
{
	vis=0.092;
}
return vis;
#endif
}

