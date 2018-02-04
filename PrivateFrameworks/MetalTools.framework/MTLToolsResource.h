/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {
    unsigned long long  _options;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) <MTLHeap> *heap;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long options;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;

- (unsigned long long)allocatedSize;
- (id)cachedAllocationInfo;
- (unsigned long long)cpuCacheMode;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (id)heap;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (bool)isAliasable;
- (bool)isComplete;
- (bool)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (unsigned long long)options;
- (int)responsibleProcess;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (id)sharedAllocationInfo;
- (unsigned long long)storageMode;
- (void)validateCPUReadable;
- (void)validateCPUWriteable;
- (void)waitUntilComplete;

@end
