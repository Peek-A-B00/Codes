struct P
{
    double x,y;
    P(double x=0,double y=0)
    {
        this->x = x;
        this->y = y;
    }
    void scan(){
        scanf("%lf%lf",&x,&y);
    }
    void print(int i=0){
        printf("  %2d -> %10.3lf  %10.3lf\n",i,x,y);
    }
};

P MV(P a,P b){return P(b.x-a.x,b.y-a.y);}
P VAdd(P a,P b){return P(a.x+b.x,a.y+b.y);}
double VDP(P a,P b){return a.x*b.x+a.y*b.y;}
double VCP(P a,P b){return a.x*b.y-a.y*b.x;}
double VAbs(P a){return sqrt(Dot(a,a));}
P VRotate(P a,double ang){return P( a.x*cos(ang)-a.y*sin(ang), a.x*sin(ang)+a.y*cos(ang));}
double VFindAng(P a,P b){    return acos(Dot(a,b)/Abs(a)/Abs(b));}
double Dis(P a,P b){return Abs(MV(a,b));}
