*BEGIN RDCOM
      PARAMETER (MAXRD = 50)
      COMMON/RDCOM/IBUSRD(MAXRD),JBUSRD(MAXRD),ICD1RD(MAXRD),
     1             ICD2RD(MAXRD),ICD3RD(MAXRD),ICD4RD(MAXRD),
     2             TTRPRD(MAXRD),BTRPRD(MAXRD),IDRRRD(5,MAXRD),
     3             TRCRD(MAXRD), TXCRD(MAXRD), TRD2RD(MAXRD),
     4             TZDYRD(MAXRD),BRCRD(MAXRD), BXCRD(MAXRD),
     5             BRD2RD(MAXRD),BZDYRD(MAXRD),GIORD(MAXRD),
     6             BIORD(MAXRD), GJORD(MAXRD), BJORD(MAXRD),
     7             GIJRD(MAXRD), BIJRD(MAXRD), TRIPRD(MAXRD),
     8             TTIMRD(MAXRD)
      COMMON/RDCOM1/IPARRD(MAXRD)
      CHARACTER*1 IPARRD