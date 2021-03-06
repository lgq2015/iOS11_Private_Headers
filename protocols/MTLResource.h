/* made by EzioChiu.
 */

@protocol MTLResource <NSObject>

@required

- (unsigned long long)allocatedSize;
- (unsigned long long)cpuCacheMode;
- (<MTLDevice> *)device;
- (<MTLHeap> *)heap;
- (bool)isAliasable;
- (NSString *)label;
- (void)makeAliasable;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)storageMode;

@end
