**----------------------------------------------------------------------------
** Groups and Constraints                                                   --
**----------------------------------------------------------------------------
*GROUP 'PLATFORM'   *ATTACHTO 'FIELD'
*GROUP 'PRODUCTION' *ATTACHTO 'PLATFORM'
*GROUP 'INJECTION'  *ATTACHTO 'PLATFORM'

*GCONP 'PRODUCTION'
*MAX *STO   28617.7000 *CONT
*MAX *STG 8000000.0000 *CONT
*MAX *STW   19078.5000 *CONT
*MAX *STL   28617.7000 *CONT

*GCONI 'INJECTION'
*MAX *STW   38157.0000 *CONT
*MAX *STG 8000000.0000 *CONT

*GCONI 'PLATFORM'
*RECYCLE GAS 1.0000

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
*ON-TIME 'PLATFORM'
1.0
*ON-TIME 'PRODUCTION'
0.91
*ON-TIME 'INJECTION'
0.91