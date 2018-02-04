/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging> {
    NSHashTable * _assertions;
    long long  _backgroundActivityAssertions;
    <TIKeyboardAssertionManagerDelegate> * _delegate;
    bool  _hasAssertions;
    bool  _hasBackgroundActivityAssertions;
    bool  _pendingUpdate;
}

@property (nonatomic, readonly) NSHashTable *assertions;
@property (nonatomic) long long backgroundActivityAssertions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TIKeyboardAssertionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAssertions;
@property (nonatomic) bool hasBackgroundActivityAssertions;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pendingUpdate;
@property (readonly) Class superclass;

+ (void)setSharedAssertionManager:(id)arg1;
+ (id)sharedAssertionManager;
+ (id)singletonInstance;

- (void)addAssertionForObject:(id)arg1;
- (id)assertions;
- (long long)backgroundActivityAssertions;
- (void)dealloc;
- (id)delegate;
- (bool)hasAssertions;
- (bool)hasBackgroundActivityAssertions;
- (id)init;
- (bool)pendingUpdate;
- (void)performBackgroundActivityUpdate;
- (void)performUpdate;
- (void)releaseBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)retainBackgroundActivityAssertion;
- (void)scheduleUpdate;
- (void)setBackgroundActivityAssertions:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasAssertions:(bool)arg1;
- (void)setHasBackgroundActivityAssertions:(bool)arg1;
- (void)setPendingUpdate:(bool)arg1;

@end
