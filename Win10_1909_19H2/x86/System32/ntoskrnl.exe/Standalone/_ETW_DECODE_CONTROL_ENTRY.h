typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ETW_DECODE_CONTROL_ENTRY
{
  /* 0x0000 */ struct _ETW_DECODE_CONTROL_ENTRY* Next;
  /* 0x0004 */ struct _GUID Decode;
  /* 0x0014 */ struct _GUID Control;
  /* 0x0024 */ unsigned char ConsumersNotified;
  /* 0x0025 */ char __PADDING__[3];
} ETW_DECODE_CONTROL_ENTRY, *PETW_DECODE_CONTROL_ENTRY; /* size: 0x0028 */

