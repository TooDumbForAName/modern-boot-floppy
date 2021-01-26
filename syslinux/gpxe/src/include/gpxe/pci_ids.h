#ifndef _GPXE_PCI_IDS_H
#define _GPXE_PCI_IDS_H

/*
 *	PCI Class, Vendor and Device IDs
 *
 *	Please keep sorted.
 */

FILE_LICENCE ( GPL2_ONLY );

/* Device classes and subclasses */

#define PCI_CLASS_NOT_DEFINED		0x0000
#define PCI_CLASS_NOT_DEFINED_VGA	0x0001

#define PCI_BASE_CLASS_STORAGE		0x01
#define PCI_CLASS_STORAGE_SCSI		0x0100
#define PCI_CLASS_STORAGE_IDE		0x0101
#define PCI_CLASS_STORAGE_FLOPPY	0x0102
#define PCI_CLASS_STORAGE_IPI		0x0103
#define PCI_CLASS_STORAGE_RAID		0x0104
#define PCI_CLASS_STORAGE_OTHER		0x0180

#define PCI_BASE_CLASS_NETWORK		0x02
#define PCI_CLASS_NETWORK_ETHERNET	0x0200
#define PCI_CLASS_NETWORK_TOKEN_RING	0x0201
#define PCI_CLASS_NETWORK_FDDI		0x0202
#define PCI_CLASS_NETWORK_ATM		0x0203
#define PCI_CLASS_NETWORK_OTHER		0x0280

#define PCI_BASE_CLASS_DISPLAY		0x03
#define PCI_CLASS_DISPLAY_VGA		0x0300
#define PCI_CLASS_DISPLAY_XGA		0x0301
#define PCI_CLASS_DISPLAY_3D		0x0302
#define PCI_CLASS_DISPLAY_OTHER		0x0380

#define PCI_BASE_CLASS_MULTIMEDIA	0x04
#define PCI_CLASS_MULTIMEDIA_VIDEO	0x0400
#define PCI_CLASS_MULTIMEDIA_AUDIO	0x0401
#define PCI_CLASS_MULTIMEDIA_PHONE	0x0402
#define PCI_CLASS_MULTIMEDIA_OTHER	0x0480

#define PCI_BASE_CLASS_MEMORY		0x05
#define PCI_CLASS_MEMORY_RAM		0x0500
#define PCI_CLASS_MEMORY_FLASH		0x0501
#define PCI_CLASS_MEMORY_OTHER		0x0580

#define PCI_BASE_CLASS_BRIDGE		0x06
#define PCI_CLASS_BRIDGE_HOST		0x0600
#define PCI_CLASS_BRIDGE_ISA		0x0601
#define PCI_CLASS_BRIDGE_EISA		0x0602
#define PCI_CLASS_BRIDGE_MC		0x0603
#define PCI_CLASS_BRIDGE_PCI		0x0604
#define PCI_CLASS_BRIDGE_PCMCIA		0x0605
#define PCI_CLASS_BRIDGE_NUBUS		0x0606
#define PCI_CLASS_BRIDGE_CARDBUS	0x0607
#define PCI_CLASS_BRIDGE_RACEWAY	0x0608
#define PCI_CLASS_BRIDGE_OTHER		0x0680

#define PCI_BASE_CLASS_COMMUNICATION	0x07
#define PCI_CLASS_COMMUNICATION_SERIAL	0x0700
#define PCI_CLASS_COMMUNICATION_PARALLEL 0x0701
#define PCI_CLASS_COMMUNICATION_MULTISERIAL 0x0702
#define PCI_CLASS_COMMUNICATION_MODEM	0x0703
#define PCI_CLASS_COMMUNICATION_OTHER	0x0780

#define PCI_BASE_CLASS_SYSTEM		0x08
#define PCI_CLASS_SYSTEM_PIC		0x0800
#define PCI_CLASS_SYSTEM_DMA		0x0801
#define PCI_CLASS_SYSTEM_TIMER		0x0802
#define PCI_CLASS_SYSTEM_RTC		0x0803
#define PCI_CLASS_SYSTEM_PCI_HOTPLUG	0x0804
#define PCI_CLASS_SYSTEM_OTHER		0x0880

#define PCI_BASE_CLASS_INPUT		0x09
#define PCI_CLASS_INPUT_KEYBOARD	0x0900
#define PCI_CLASS_INPUT_PEN		0x0901
#define PCI_CLASS_INPUT_MOUSE		0x0902
#define PCI_CLASS_INPUT_SCANNER		0x0903
#define PCI_CLASS_INPUT_GAMEPORT	0x0904
#define PCI_CLASS_INPUT_OTHER		0x0980

#define PCI_BASE_CLASS_DOCKING		0x0a
#define PCI_CLASS_DOCKING_GENERIC	0x0a00
#define PCI_CLASS_DOCKING_OTHER		0x0a80

#define PCI_BASE_CLASS_PROCESSOR	0x0b
#define PCI_CLASS_PROCESSOR_386		0x0b00
#define PCI_CLASS_PROCESSOR_486		0x0b01
#define PCI_CLASS_PROCESSOR_PENTIUM	0x0b02
#define PCI_CLASS_PROCESSOR_ALPHA	0x0b10
#define PCI_CLASS_PROCESSOR_POWERPC	0x0b20
#define PCI_CLASS_PROCESSOR_MIPS	0x0b30
#define PCI_CLASS_PROCESSOR_CO		0x0b40

#define PCI_BASE_CLASS_SERIAL		0x0c
#define PCI_CLASS_SERIAL_FIREWIRE	0x0c00
#define PCI_CLASS_SERIAL_ACCESS		0x0c01
#define PCI_CLASS_SERIAL_SSA		0x0c02
#define PCI_CLASS_SERIAL_USB		0x0c03
#define PCI_CLASS_SERIAL_FIBER		0x0c04
#define PCI_CLASS_SERIAL_SMBUS		0x0c05

#define PCI_BASE_CLASS_INTELLIGENT	0x0e
#define PCI_CLASS_INTELLIGENT_I2O	0x0e00

#define PCI_BASE_CLASS_SATELLITE	0x0f
#define PCI_CLASS_SATELLITE_TV		0x0f00
#define PCI_CLASS_SATELLITE_AUDIO	0x0f01
#define PCI_CLASS_SATELLITE_VOICE	0x0f03
#define PCI_CLASS_SATELLITE_DATA	0x0f04

#define PCI_BASE_CLASS_CRYPT		0x10
#define PCI_CLASS_CRYPT_NETWORK		0x1000
#define PCI_CLASS_CRYPT_ENTERTAINMENT	0x1001
#define PCI_CLASS_CRYPT_OTHER		0x1080

#define PCI_BASE_CLASS_SIGNAL_PROCESSING 0x11
#define PCI_CLASS_SP_DPIO		0x1100
#define PCI_CLASS_SP_OTHER		0x1180

#define PCI_CLASS_OTHERS		0xff

/* Vendors */

#define PCI_VENDOR_ID_DYNALINK		0x0675
#define PCI_VENDOR_ID_BERKOM			0x0871
#define PCI_VENDOR_ID_COMPAQ		0x0e11
#define PCI_VENDOR_ID_NCR		0x1000
#define PCI_VENDOR_ID_LSI_LOGIC		0x1000
#define PCI_VENDOR_ID_ATI		0x1002
#define PCI_VENDOR_ID_VLSI		0x1004
#define PCI_VENDOR_ID_ADL		0x1005
#define PCI_VENDOR_ID_NS		0x100b
#define PCI_VENDOR_ID_TSENG		0x100c
#define PCI_VENDOR_ID_WEITEK		0x100e
#define PCI_VENDOR_ID_DEC		0x1011
#define PCI_VENDOR_ID_CIRRUS		0x1013
#define PCI_VENDOR_ID_IBM		0x1014
#define PCI_VENDOR_ID_COMPEX2		0x101a
/* pci.ids says "AT&T GIS (NCR)" */
#define PCI_VENDOR_ID_WD		0x101c
#define PCI_VENDOR_ID_AMI		0x101e
#define PCI_VENDOR_ID_AMD		0x1022
#define PCI_VENDOR_ID_TRIDENT		0x1023
#define PCI_VENDOR_ID_AI		0x1025
#define PCI_VENDOR_ID_DELL              0x1028
#define PCI_VENDOR_ID_MATROX		0x102B
#define PCI_VENDOR_ID_CT		0x102c
#define PCI_VENDOR_ID_MIRO		0x1031
#define PCI_VENDOR_ID_NEC		0x1033
#define PCI_VENDOR_ID_FD		0x1036
#define PCI_VENDOR_ID_SIS         	0x1039
#define PCI_VENDOR_ID_SI		0x1039
#define PCI_VENDOR_ID_HP		0x103c
#define PCI_VENDOR_ID_PCTECH		0x1042
#define PCI_VENDOR_ID_ASUSTEK		0x1043
#define PCI_VENDOR_ID_DPT		0x1044
#define PCI_VENDOR_ID_OPTI		0x1045
#define PCI_VENDOR_ID_ELSA		0x1048
#define PCI_VENDOR_ID_ELSA		0x1048
#define PCI_VENDOR_ID_SGS		0x104a
#define PCI_VENDOR_ID_BUSLOGIC		      0x104B
#define PCI_VENDOR_ID_TI		0x104c
#define PCI_VENDOR_ID_SONY		0x104d
#define PCI_VENDOR_ID_OAK		0x104e
/* Winbond have two vendor IDs! See 0x10ad as well */
#define PCI_VENDOR_ID_WINBOND2		0x1050
#define PCI_VENDOR_ID_ANIGMA		0x1051
#define PCI_VENDOR_ID_EFAR		0x1055
#define PCI_VENDOR_ID_MOTOROLA		0x1057
#define PCI_VENDOR_ID_MOTOROLA_OOPS	0x1507
#define PCI_VENDOR_ID_PROMISE		0x105a
#define PCI_VENDOR_ID_N9		0x105d
#define PCI_VENDOR_ID_UMC		0x1060
#define PCI_VENDOR_ID_X			0x1061
#define PCI_VENDOR_ID_MYLEX		0x1069
#define PCI_VENDOR_ID_PICOP		0x1066
#define PCI_VENDOR_ID_APPLE		0x106b
#define PCI_VENDOR_ID_YAMAHA		0x1073
#define PCI_VENDOR_ID_NEXGEN		0x1074
#define PCI_VENDOR_ID_QLOGIC		0x1077
#define PCI_VENDOR_ID_CYRIX		0x1078
#define PCI_VENDOR_ID_LEADTEK		0x107d
#define PCI_VENDOR_ID_INTERPHASE	0x107e
#define PCI_VENDOR_ID_CONTAQ		0x1080
#define PCI_VENDOR_ID_FOREX		0x1083
#define PCI_VENDOR_ID_OLICOM		0x108d
#define PCI_VENDOR_ID_SUN		0x108e
#define PCI_VENDOR_ID_CMD		0x1095
#define PCI_VENDOR_ID_VISION		0x1098
#define PCI_VENDOR_ID_BROOKTREE		0x109e
#define PCI_VENDOR_ID_SIERRA		0x10a8
#define PCI_VENDOR_ID_SGI		0x10a9
#define PCI_VENDOR_ID_ACC		0x10aa
#define PCI_VENDOR_ID_WINBOND		0x10ad
#define PCI_VENDOR_ID_DATABOOK		0x10b3
#define PCI_VENDOR_ID_PLX		0x10b5
#define PCI_VENDOR_ID_MADGE		0x10b6
#define PCI_VENDOR_ID_3COM		0x10b7
#define PCI_VENDOR_ID_SMC		0x10b8
#define PCI_VENDOR_ID_SUNDANCE		0x13F0
#define PCI_VENDOR_ID_AL		0x10b9
#define PCI_VENDOR_ID_MITSUBISHI	0x10ba
#define PCI_VENDOR_ID_SURECOM		0x10bd
#define PCI_VENDOR_ID_NEOMAGIC		0x10c8
#define PCI_VENDOR_ID_ASP		0x10cd
#define PCI_VENDOR_ID_MACRONIX		0x10d9
#define PCI_VENDOR_ID_TCONRAD		0x10da
#define PCI_VENDOR_ID_CERN		0x10dc
#define PCI_VENDOR_ID_NVIDIA			0x10de
#define PCI_VENDOR_ID_IMS		0x10e0
#define PCI_VENDOR_ID_TEKRAM2		0x10e1
#define PCI_VENDOR_ID_TUNDRA		0x10e3
#define PCI_VENDOR_ID_AMCC		0x10e8
#define PCI_VENDOR_ID_INTERG		0x10ea
#define PCI_VENDOR_ID_REALTEK		0x10ec
#define PCI_VENDOR_ID_XILINX		0x10ee
#define PCI_VENDOR_ID_TRUEVISION	0x10fa
#define PCI_VENDOR_ID_INIT		0x1101
#define PCI_VENDOR_ID_CREATIVE		0x1102
/* duplicate: ECTIVA */
#define PCI_VENDOR_ID_ECTIVA		0x1102
/* duplicate: CREATIVE */
#define PCI_VENDOR_ID_TTI		0x1103
#define PCI_VENDOR_ID_VIA		0x1106
#define PCI_VENDOR_ID_VIATEC		0x1106
#define PCI_VENDOR_ID_SIEMENS           0x110A
#define PCI_VENDOR_ID_SMC2		0x1113
#define PCI_VENDOR_ID_VORTEX		0x1119
#define PCI_VENDOR_ID_EF		0x111a
#define PCI_VENDOR_ID_IDT		0x111d
#define PCI_VENDOR_ID_FORE		0x1127
#define PCI_VENDOR_ID_IMAGINGTECH	0x112f
#define PCI_VENDOR_ID_PHILIPS		0x1131
#define PCI_VENDOR_ID_EICON		0x1133
#define PCI_VENDOR_ID_CYCLONE		0x113c
#define PCI_VENDOR_ID_ALLIANCE		0x1142
#define PCI_VENDOR_ID_SYSKONNECT	0x1148
#define PCI_VENDOR_ID_VMIC		0x114a
#define PCI_VENDOR_ID_DIGI		0x114f
#define PCI_VENDOR_ID_MUTECH		0x1159
#define PCI_VENDOR_ID_XIRCOM		0x115d
#define PCI_VENDOR_ID_RENDITION		0x1163
#define PCI_VENDOR_ID_SERVERWORKS	  0x1166
#define PCI_VENDOR_ID_SBE		0x1176
#define PCI_VENDOR_ID_TOSHIBA		0x1179
#define PCI_VENDOR_ID_RICOH		0x1180
#define	PCI_VENDOR_ID_DLINK		0x1186
#define PCI_VENDOR_ID_ARTOP		0x1191
#define PCI_VENDOR_ID_ZEITNET		0x1193
#define PCI_VENDOR_ID_OMEGA		0x119b
#define PCI_VENDOR_ID_FUJITSU_ME	0x119e
#define PCI_SUBVENDOR_ID_KEYSPAN	0x11a9
#define PCI_VENDOR_ID_GALILEO		0x11ab
#define PCI_VENDOR_ID_LINKSYS		0x11ad
#define PCI_VENDOR_ID_LITEON		0x11ad
#define PCI_VENDOR_ID_V3		0x11b0
#define PCI_VENDOR_ID_NP		0x11bc
#define PCI_VENDOR_ID_ATT		0x11c1
#define PCI_VENDOR_ID_SPECIALIX		0x11cb
#define PCI_VENDOR_ID_AURAVISION	0x11d1
#define PCI_VENDOR_ID_ANALOG_DEVICES	0x11d4
#define PCI_VENDOR_ID_IKON		0x11d5
#define PCI_VENDOR_ID_ZORAN		0x11de
#define PCI_VENDOR_ID_KINETIC		0x11f4
#define PCI_VENDOR_ID_COMPEX		0x11f6
#define PCI_VENDOR_ID_RP		0x11fe
#define PCI_VENDOR_ID_CYCLADES		0x120e
#define PCI_VENDOR_ID_ESSENTIAL		0x120f
#define PCI_VENDOR_ID_O2		0x1217
#define PCI_VENDOR_ID_3DFX		0x121a
#define PCI_VENDOR_ID_SIGMADES		0x1236
#define PCI_VENDOR_ID_CCUBE		0x123f
#define PCI_VENDOR_ID_AVM		0x1244
#define PCI_VENDOR_ID_DIPIX		0x1246
#define PCI_VENDOR_ID_STALLION		0x124d
#define PCI_VENDOR_ID_OPTIBASE		0x1255
#define PCI_VENDOR_ID_ESS		0x125d
#define PCI_VENDOR_ID_HARRIS        	0x1260
#define PCI_VENDOR_ID_SATSAGEM		0x1267
#define PCI_VENDOR_ID_HUGHES		0x1273
#define PCI_VENDOR_ID_ENSONIQ		0x1274
#define PCI_VENDOR_ID_ROCKWELL		0x127A
#define PCI_VENDOR_ID_DAVICOM		0x1282
#define PCI_VENDOR_ID_ITE		0x1283
/* formerly Platform Tech */
#define PCI_VENDOR_ID_ESS_OLD		0x1285
#define PCI_VENDOR_ID_ALTEON		0x12ae
#define PCI_VENDOR_ID_USR		0x12B9
#define	PCI_VENDOR_ID_HOLTEK		0x12c3
#define PCI_SUBVENDOR_ID_CONNECT_TECH			0x12c4
#define PCI_VENDOR_ID_PICTUREL		0x12c5
#define PCI_VENDOR_ID_NVIDIA_SGS	0x12d2
#define PCI_SUBVENDOR_ID_CHASE_PCIFAST		0x12E0
#define PCI_SUBVENDOR_ID_CHASE_PCIRAS		0x124D
#define PCI_VENDOR_ID_AUREAL		0x12eb
#define PCI_VENDOR_ID_CBOARDS		0x1307
#define PCI_VENDOR_ID_SIIG		0x131f
#define PCI_VENDOR_ID_ADMTEK            0x1317
#define PCI_VENDOR_ID_DOMEX		0x134a
#define PCI_VENDOR_ID_QUATECH		0x135C
#define PCI_VENDOR_ID_SEALEVEL		0x135e
#define PCI_VENDOR_ID_HYPERCOPE		0x1365
#define PCI_VENDOR_ID_KAWASAKI		0x136b
#define PCI_VENDOR_ID_LMC		0x1376
#define PCI_VENDOR_ID_NETGEAR		0x1385
#define PCI_VENDOR_ID_APPLICOM		0x1389
#define PCI_VENDOR_ID_MOXA		0x1393
#define PCI_VENDOR_ID_CCD		0x1397
#define PCI_VENDOR_ID_MICROGATE		0x13c0
#define PCI_VENDOR_ID_3WARE		0x13C1
#define PCI_VENDOR_ID_ABOCOM		0x13D1
#define PCI_VENDOR_ID_CMEDIA		0x13f6
#define PCI_VENDOR_ID_LAVA		0x1407
#define PCI_VENDOR_ID_TIMEDIA		0x1409
#define PCI_VENDOR_ID_OXSEMI		0x1415
#define PCI_VENDOR_ID_AIRONET		0x14b9
#define PCI_VENDOR_ID_MYRICOM		0x14c1
#define PCI_VENDOR_ID_TITAN		0x14D2
#define PCI_VENDOR_ID_PANACOM		0x14d4
#define PCI_VENDOR_ID_BROADCOM		0x14e4
#define PCI_VENDOR_ID_SYBA		0x1592
#define PCI_VENDOR_ID_MORETON		0x15aa
#define PCI_VENDOR_ID_ZOLTRIX		0x15b0
#define PCI_VENDOR_ID_PDC		0x15e9
#define PCI_VENDOR_ID_FSC		0x1734
#define PCI_VENDOR_ID_SYMPHONY		0x1c1c
#define PCI_VENDOR_ID_TEKRAM		0x1de1
#define PCI_VENDOR_ID_3DLABS		0x3d3d
#define PCI_VENDOR_ID_AVANCE		0x4005
#define PCI_VENDOR_ID_AKS		0x416c
#define PCI_VENDOR_ID_NETVIN		0x4a14
#define PCI_VENDOR_ID_S3		0x5333
#define PCI_VENDOR_ID_DCI		0x6666
#define PCI_VENDOR_ID_GENROCO		0x5555
#define PCI_VENDOR_ID_INTEL		0x8086
#define PCI_VENDOR_ID_COMPUTONE		0x8e0e
#define PCI_SUBVENDOR_ID_COMPUTONE	0x8e0e
#define PCI_VENDOR_ID_KTI		0x8e2e
#define PCI_VENDOR_ID_ADAPTEC		0x9004
#define PCI_VENDOR_ID_ADAPTEC2		0x9005
#define PCI_VENDOR_ID_ATRONICS		0x907f
#define PCI_VENDOR_ID_HOLTEK2		0x9412
#define PCI_VENDOR_ID_NETMOS		0x9710
#define PCI_SUBVENDOR_ID_EXSYS		0xd84d
#define PCI_VENDOR_ID_TIGERJET		0xe159
#define PCI_VENDOR_ID_ARK		0xedd8

#endif /* _GPXE_PCI_IDS_H */
