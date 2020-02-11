Overview
========

MUSCLE Version 3.8.1551 July 12, 2014

http://www.drive5.com/muscle

This software is donated to the public domain.

Please cite: Edgar, R.C. Nucleic Acids Res 32(5), 1792-97.

Modifications
=============

3.8.1551.gsl3 Feb 11, 2020
- Ported code to build natively on Windows in 64bit with MSVC.

3.8.1551.gsl2 Sep 27, 2018
- Do not use -maxiters to abort pre-emptively due to incomplete "ptrBestMSA" results.
  Note: -maxhours will output the same incomplete results.

3.8.1551.gsl1 Aug 21, 2018
- Exit after -maxiters and save results with chosen output format.
