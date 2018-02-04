/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegion : NSObject {
    unsigned int  coalesced_region_count;
    unsigned long long  dirty_size;
    unsigned char  external_pager;
    unsigned int  is_macho_region;
    unsigned int  is_submap;
    unsigned int  is_unused_data_page_shared_with_active_content;
    unsigned int  is_unused_data_region;
    unsigned long long  mallocBlockCount;
    unsigned int  mallocTypeFlag;
    unsigned int  maxProt;
    unsigned int  nesting_depth;
    unsigned long long  object_id;
    unsigned long long  pages_dirtied;
    unsigned long long  pages_resident;
    unsigned long long  pages_shared_now_private;
    unsigned long long  pages_swapped_out;
    NSString * path;
    unsigned int  prot;
    unsigned long long  purgable_empty_size;
    unsigned long long  purgable_non_vol_size;
    unsigned long long  purgable_vol_size;
    int  purgeable;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    }  range;
    unsigned long long  ref_count;
    unsigned int  reserved_flags;
    unsigned long long  resident_size;
    unsigned char  share_mode;
    unsigned long long  shared_now_private_size;
    bool  summarized;
    unsigned long long  swapped_out_size;
    NSString * type;
    unsigned int  user_tag;
    unsigned long long  virtual_pages;
    unsigned int  zone_index;
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(bool)arg4;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addInfoFromRegion:(id)arg1;
- (unsigned long long)address;
- (id)breakAtLength:(unsigned long long)arg1;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(bool)arg4;
- (void)getVMRegionData:(struct _VMUVMRegionData { unsigned long long x1; unsigned long long x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; unsigned int x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned int x16; unsigned int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 28; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; }*)arg1 withSimpleSerializer:(id)arg2;
- (bool)hasSameInfoAsRegion:(id)arg1;
- (id)init;
- (id)initWithVMRegionData:(struct _VMUVMRegionData { unsigned long long x1; unsigned long long x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; unsigned int x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned int x16; unsigned int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 28; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; }*)arg1 encodedVersion:(long long)arg2 simpleSerializer:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSubmap;
- (unsigned long long)length;
- (unsigned int)maxProtection;
- (id)path;
- (unsigned int)protection;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;
- (id)type;

@end
