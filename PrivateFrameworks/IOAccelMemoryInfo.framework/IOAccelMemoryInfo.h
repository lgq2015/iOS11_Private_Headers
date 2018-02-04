/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
 */

@interface IOAccelMemoryInfo : NSObject {
    id  _expansionData;
    NSDictionary * dict;
}

@property (readonly) NSSet *blamedProcesses;
@property (readonly) bool cacheDirty;
@property (readonly) bool cachedCopy;
@property (readonly) NSArray *devices;
@property (readonly) unsigned long long dirtyLength;
@property (readonly) NSArray *formattedDescriptions;
@property (readonly) unsigned long long length;
@property (readonly) NSArray *mappings;
@property (readonly) unsigned long long memoryPool;
@property (readonly) NSArray *openclObjects;
@property (readonly) NSArray *openglObjects;
@property (readonly) bool orphaned;
@property (readonly) NSSet *processIDs;
@property (readonly) bool purgeable;
@property (readonly) unsigned long long residentLength;
@property (readonly) unsigned int surfaceID;
@property (readonly) bool wired;

+ (void)collectAllocationTotalsWithOptions:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)collectDataWithCompletionQueue:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)newKernelAllocationList:(id)arg1;
+ (void)newKernelAllocationTotals:(id)arg1 totalsReturn:(id)arg2 errorReturn:(id)arg3;
+ (void)purgeAllVidMem;
+ (void)validateDictionary:(id)arg1;

- (id)blamedProcesses;
- (id)blamedProcessesForProcess:(int)arg1;
- (bool)cacheDirty;
- (bool)cachedCopy;
- (void)dealloc;
- (id)description;
- (id)devices;
- (unsigned long long)dirtyLength;
- (id)formattedDescriptions;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)length;
- (id)mappings;
- (unsigned long long)memoryPool;
- (id)openclObjects;
- (id)openglObjects;
- (bool)orphaned;
- (id)processIDs;
- (bool)purgeable;
- (unsigned long long)residentLength;
- (unsigned int)surfaceID;
- (bool)wired;

@end
