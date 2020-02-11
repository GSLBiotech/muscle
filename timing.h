#if	WIN32

typedef unsigned __int64 TICKS;

static TICKS GetClockTicks()
{
  LARGE_INTEGER ctr;
  QueryPerformanceCounter( & ctr ) ;
  return ctr.QuadPart;
}

static double TicksToSecs(TICKS t)
{
  LARGE_INTEGER frequency;
  QueryPerformanceFrequency( & frequency );
  return static_cast<double>( t ) / static_cast<double>( frequency.QuadPart );
}

#endif	// WIN32
