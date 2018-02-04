/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {
    NTPBPrivateRecordSyncState * _currentState;
    <FCPrivateRecordSyncManagerDelegate> * _delegate;
    NSArray * _desiredKeys;
    CKRecordID * _recordID;
}

@property (nonatomic, readonly, copy) NTPBPrivateRecordSyncState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCPrivateRecordSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_stateDidChange;
- (id)currentState;
- (id)delegate;
- (id)desiredKeys;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithRecordID:(id)arg1 desiredKeys:(id)arg2 currentState:(id)arg3;
- (bool)isAwaitingFirstSync;
- (bool)isDirty;
- (void)markAsDirty;
- (void)notifyObservers;
- (id)recordID;
- (void)setDelegate:(id)arg1;

@end
