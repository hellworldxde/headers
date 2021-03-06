typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PROTOCOL_CO_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* CoStatusHandlerEx /* function */;
  /* 0x000c */ void* CoAfRegisterNotifyHandler /* function */;
  /* 0x0010 */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x0014 */ void* CoSendNetBufferListsCompleteHandler /* function */;
} NDIS_PROTOCOL_CO_CHARACTERISTICS, *PNDIS_PROTOCOL_CO_CHARACTERISTICS; /* size: 0x0018 */

