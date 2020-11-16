int AreaQuadrat(float costat, float &area)
{
     if (costat>0)
     {
          area=costat*costat;
          return 0;
     }
     else
          return 1;
}

int AreaRectangle(float base, float altura, float &area)
{
     if ((base>0)&&(altura>0))
     {
          area=base*altura;
          return 0;
     }
     else
          return 1;
}

int AreaTriangle(float base, float altura, float &area)
{
     if ((base>0)&&(altura>0))
     {
          area=base*altura/2;
          return 0;
     }
     else
          return 1;
}
