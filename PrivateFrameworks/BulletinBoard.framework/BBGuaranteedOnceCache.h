/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBGuaranteedOnceCache : NSObject {
    NSMapTable * _bestEffortCache;
    NSMapTable * _guaranteedCache;
}

- (void).cxx_destruct;
- (bool)attemptToGuaranteeObjectUsingKey:(id)arg1;
- (void)cacheObject:(id)arg1 usingKey:(id)arg2;
- (id)init;
- (id)objectUsingKeyRemovingGuarantee:(id)arg1;
- (void)removeObjectUsingKey:(id)arg1;

@end
