/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCache : NSCache {
    NSObject<OS_dispatch_source> * _memoryWarningEventSource;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryWarningEventSource;

+ (id)cacheCollection;
+ (void)purgeAllCaches;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)memoryWarningEventSource;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)setMemoryWarningEventSource:(id)arg1;
- (void)unregisterForMemoryWarnings;

@end
