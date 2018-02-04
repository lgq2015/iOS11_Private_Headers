/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUFlushableObject : NSObject <TSUFlushable> {
    TSUFlushingManager * _flushingManager;
    NSObject<NSLocking> * _flushingManagerIvarLock;
    int  _ownerCount;
    int  _retainCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addOwner;
- (void)dealloc;
- (void)flush;
- (bool)hasFlushableContent;
- (id)init;
- (id)ownerAutoreleasedAccess;
- (void)ownerDidAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (void)ownerWillAccess;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)unload;

@end
