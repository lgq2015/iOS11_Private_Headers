/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTInMemorySyncStorage : NSObject <MTSyncStorage> {
    NSArray * _pendingChanges;
}

@property (nonatomic, retain) NSArray *pendingChanges;

- (void).cxx_destruct;
- (id)initWithPendingChanges:(id)arg1;
- (void)loadPendingChangesWithCompletion:(id /* block */)arg1;
- (id)pendingChanges;
- (void)savePendingChanges:(id)arg1;
- (void)setPendingChanges:(id)arg1;

@end
