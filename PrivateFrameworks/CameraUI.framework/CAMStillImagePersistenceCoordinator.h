/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImagePersistenceCoordinator : NSObject {
    NSMutableDictionary * __pendingLocalPersistenceResults;
    NSMutableDictionary * __receivedCoordinationInfos;
    <CAMStillImagePersistenceCoordinatorDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableDictionary *_pendingLocalPersistenceResults;
@property (nonatomic, readonly) NSMutableDictionary *_receivedCoordinationInfos;
@property (nonatomic, readonly) <CAMStillImagePersistenceCoordinatorDelegate> *delegate;
@property (nonatomic, readonly) bool hasReceivedAllExpectedResponses;

- (void).cxx_destruct;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(bool)arg5;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2;
- (id)_pendingLocalPersistenceResults;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1;
- (id)_receivedCoordinationInfos;
- (id)delegate;
- (bool)hasReceivedAllExpectedResponses;
- (id)initWithDelegate:(id)arg1;
- (void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2;

@end
