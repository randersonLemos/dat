**----------------------------------------------------------------------------
** Groups and Constraints                                                   --
**----------------------------------------------------------------------------
*GROUP 'PLATFORM'   *ATTACHTO 'FIELD'
*GROUP 'PRODUCTION' *ATTACHTO 'PLATFORM'
*GROUP 'INJECTION'  *ATTACHTO 'PLATFORM'

*GCONP 'PRODUCTION'
*MAX *STO 28617.7 *CONT	**180000.0 bbl/day
*MAX *STW 19078.5 *CONT	**120000.0 bbl/day
*MAX *STL 28617.7 *CONT	**180000.0 bbl/day
*GTARGET *STG 450000.0 ** Limited to the allowed burden amount
** 	*MAX *STG 8000000.0 *CONT	

*GCONI 'INJECTION'
*MAX *STW 38157.0 *CONT **240000.0 bbl
** *MAX *STG 8000000.0 *CONT

*GCONI 'PLATFORM' 
*RECYCLE GAS 1.0 ** All gas produced in reinjected

** GROUP INJECTION RATES ADJUSTED SO AS TO MAINTAIN THE HYDROCARBON
** VOLUME WEIGHTED AVERAGE PRESSURE AT 450 KGF/CM2
*GCONI  'PLATFORM'
*PMAINT *WATER *PMTARG 450.0

**----------------------------------------------------------------------------
** INGUIDE                                                                  --
**----------------------------------------------------------------------------
*APPOR-METHOD *PROD 'PLATFORM'   *IP
*APPOR-METHOD *WATI 'PLATFORM'   *IP
*APPOR-METHOD *GASI 'PLATFORM'   *IP
*APPOR-METHOD *PROD 'PRODUCTION' *IP
*APPOR-METHOD *WATI 'INJECTION'  *IP
*APPOR-METHOD *GASI 'INJECTION'  *IP

**----------------------------------------------------------------------------
** Time Availability                                                        --
**----------------------------------------------------------------------------
*ON-TIME 'PLATFORM' ** PLATFORM EFFICIENCY
1.0
*ON-TIME 'PRODUCTION' ** MANIFOLD EFFICIENCY
0.91
*ON-TIME 'INJECTION' ** MANIFOLD EFFICIENCY
0.91

