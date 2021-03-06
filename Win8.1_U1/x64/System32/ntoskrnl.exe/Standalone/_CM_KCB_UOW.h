typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

enum UoWActionType
{
  UoWAddThisKey = 0,
  UoWAddChildKey = 1,
  UoWDeleteThisKey = 2,
  UoWDeleteChildKey = 3,
  UoWSetValueNew = 4,
  UoWSetValueExisting = 5,
  UoWDeleteValue = 6,
  UoWSetKeyUserFlags = 7,
  UoWSetLastWriteTime = 8,
  UoWSetSecurityDescriptor = 9,
  UoWRenameSubKey = 10,
  UoWRenameOldSubKey = 11,
  UoWRenameNewSubKey = 12,
  UoWIsolation = 13,
  UoWInvalid = 14,
};

enum HSTORAGE_TYPE
{
  Stable = 0,
  Volatile = 1,
  InvalidStorage = 2,
};

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CM_KCB_UOW
{
  /* 0x0000 */ struct _LIST_ENTRY TransactionListEntry;
  /* 0x0010 */ struct _CM_INTENT_LOCK* KCBLock;
  /* 0x0018 */ struct _CM_INTENT_LOCK* KeyLock;
  /* 0x0020 */ struct _LIST_ENTRY KCBListEntry;
  /* 0x0030 */ struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
  /* 0x0038 */ struct _CM_TRANS* Transaction;
  /* 0x0040 */ unsigned long UoWState;
  /* 0x0044 */ enum UoWActionType ActionType;
  /* 0x0048 */ enum HSTORAGE_TYPE StorageType;
  union
  {
    /* 0x0050 */ struct _CM_KEY_CONTROL_BLOCK* ChildKCB;
    /* 0x0050 */ unsigned long VolatileKeyCell;
    struct
    {
      /* 0x0050 */ unsigned long OldValueCell;
      /* 0x0054 */ unsigned long NewValueCell;
    }; /* size: 0x0008 */
    /* 0x0050 */ unsigned long UserFlags;
    /* 0x0050 */ union _LARGE_INTEGER LastWriteTime;
    /* 0x0050 */ unsigned long TxSecurityCell;
    struct
    {
      /* 0x0050 */ struct _CM_KEY_CONTROL_BLOCK* OldChildKCB;
      /* 0x0058 */ struct _CM_KEY_CONTROL_BLOCK* NewChildKCB;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0050 */ struct _CM_KEY_CONTROL_BLOCK* OtherChildKCB;
      /* 0x0058 */ unsigned long ThisVolatileKeyCell;
      /* 0x005c */ long __PADDING__[1];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} CM_KCB_UOW, *PCM_KCB_UOW; /* size: 0x0060 */

