/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraSnapshotControl : _HMCameraControl {
    <_HMCameraSnapshotControlDelegate> * _delegate;
    HMCameraSnapshot * _mostRecentSnapshot;
}

@property (nonatomic) <_HMCameraSnapshotControlDelegate> *delegate;
@property (nonatomic, retain) HMCameraSnapshot *mostRecentSnapshot;

- (void).cxx_destruct;
- (void)_callDelegate:(id)arg1 error:(id)arg2;
- (void)_callMostRecentSnapshotUpdateDelegate;
- (void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleMostSnapshot:(id)arg1;
- (void)_handleSnapshot:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 mostRecent:(bool)arg4;
- (void)_mergeNewSnapshot:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_takeSnapshot;
- (id)delegate;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 mostRecentSnapshot:(id)arg4;
- (id)mostRecentSnapshot;
- (void)setDelegate:(id)arg1;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)takeSnapshot;

@end
