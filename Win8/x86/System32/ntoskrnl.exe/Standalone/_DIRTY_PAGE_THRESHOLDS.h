typedef struct _DIRTY_PAGE_THRESHOLDS
{
  /* 0x0000 */ unsigned long DirtyPageThreshold;
  /* 0x0004 */ unsigned long DirtyPageThresholdTop;
  /* 0x0008 */ unsigned long DirtyPageThresholdBottom;
  /* 0x000c */ unsigned long DirtyPageTarget;
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0010 */

