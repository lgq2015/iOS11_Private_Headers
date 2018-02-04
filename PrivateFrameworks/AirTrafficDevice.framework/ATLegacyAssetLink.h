/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATLegacyAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    NSMutableDictionary * _enqueuedAssetsByDataClass;
    NSString * _hostVersion;
    ATLegacyMessageLink * _messageLink;
    bool  _open;
    <ATLegacyAssetLinkProgressDelegate> * _progressDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _readyDataClasses;
    NSArray * _supportedDataClasses;
    NSMutableDictionary * _syncIDToItemPidMap;
    NSMutableSet * _unqueuedAssets;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic) <ATLegacyAssetLinkProgressDelegate> *progressDelegate;
@property (nonatomic, copy) NSArray *readyDataClasses;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedDataClasses;

- (void).cxx_destruct;
- (id)_assetManifestForDataclasses:(id)arg1;
- (id)_assetsForDataClass:(id)arg1 identifier:(id)arg2;
- (void)_enqueueAndRequestAssets;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_handleFileCompleteMessage:(id)arg1;
- (void)_handleFileErrorMessage:(id)arg1;
- (void)_handleFileProgressMessage:(id)arg1;
- (id)_manifestEntryForATAsset:(id)arg1;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)initWithMessageLink:(id)arg1 hostVersion:(id)arg2;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (id)progressDelegate;
- (id)readyDataClasses;
- (void)setDelegate:(id)arg1;
- (void)setProgressDelegate:(id)arg1;
- (void)setReadyDataClasses:(id)arg1;
- (void)setSupportedDataClasses:(id)arg1;
- (id)supportedDataClasses;

@end
