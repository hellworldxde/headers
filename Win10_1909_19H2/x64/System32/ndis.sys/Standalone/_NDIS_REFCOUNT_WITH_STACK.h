typedef struct _NDIS_REFCOUNT_STACK_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Stack : 26; /* bit position: 0 */
    /* 0x0000 */ unsigned long RefCount : 6; /* bit position: 26 */
  }; /* bitfield */
} NDIS_REFCOUNT_STACK_ENTRY, *PNDIS_REFCOUNT_STACK_ENTRY; /* size: 0x0004 */

typedef struct _NDIS_REFCOUNT_STACK_BLOCK
{
  /* 0x0000 */ struct _NDIS_REFCOUNT_STACK_BLOCK* Next;
  /* 0x0008 */ struct _NDIS_REFCOUNT_STACK_ENTRY References[6];
  /* 0x0020 */ struct _NDIS_REFCOUNT_STACK_ENTRY Dereferences[6];
} NDIS_REFCOUNT_STACK_BLOCK, *PNDIS_REFCOUNT_STACK_BLOCK; /* size: 0x0038 */

typedef struct _NDIS_REFCOUNT_WITH_STACK
{
  /* 0x0000 */ struct _NDIS_REFCOUNT_STACK_BLOCK Block;
  struct /* bitfield */
  {
    /* 0x0038 */ unsigned long ReferenceAllocationFailed : 1; /* bit position: 0 */
    /* 0x0038 */ unsigned long TotalReferences : 15; /* bit position: 1 */
    /* 0x0038 */ unsigned long DereferenceAllocationFailed : 1; /* bit position: 16 */
    /* 0x0038 */ unsigned long TotalDereferences : 15; /* bit position: 17 */
  }; /* bitfield */
  /* 0x003c */ long __PADDING__[1];
} NDIS_REFCOUNT_WITH_STACK, *PNDIS_REFCOUNT_WITH_STACK; /* size: 0x0040 */

