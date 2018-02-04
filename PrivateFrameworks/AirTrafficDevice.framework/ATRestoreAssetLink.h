/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATRestoreAssetLink : NSObject <ATAssetLink, ATEnvironmentMonitorObserver, MBManagerDelegate> {
    NSMutableArray * _activeAssets;
    NSArray * _allowedDataClasses;
    unsigned long long  _batchSize;
    bool  _batchingIsSupported;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    MBManager * _mbManager;
    bool  _open;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedAssets;
    <ATRestoreAssetLinkDelegate> * _restoreDelegate;
    int  _restoreState;
    bool  _singleAssetMode;
}

@property (nonatomic, copy) NSArray *allowedDataClasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic) <ATRestoreAssetLinkDelegate> *restoreDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_atErrorFromMBError:(id)arg1;
- (bool)_hasConnectivity;
- (void)_processQueuedAssets;
- (id)allowedDataClasses;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)finishRestore;
- (id)init;
- (bool)isOpen;
- (bool)linkIsReady;
- (void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidCancelRestore:(id)arg1;
- (void)managerDidFinishRestore:(id)arg1;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)processRestoreFailureForAsset:(id)arg1;
- (id)restoreDelegate;
- (bool)restoreSessionActive;
- (void)setAllowedDataClasses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRestoreDelegate:(id)arg1;

@end
