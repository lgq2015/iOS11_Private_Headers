/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraDevice : ICDevice {
    void * _cameraProperties;
}

@property (getter=isAccessRestrictedAppleDevice) bool accessRestrictedAppleDevice;
@property bool allowsSyncingClock;
@property (getter=isApplePTPCapable) bool applePTPCapable;
@property NSNumber *applePTPObjectLimit;
@property (readonly) unsigned long long batteryLevel;
@property (readonly) bool batteryLevelAvailable;
@property bool beingEjected;
@property unsigned long long contentCatalogPercentCompleted;
@property (readonly) NSArray *contents;
@property (getter=isEjectable) bool ejectable;
@property unsigned long long estimatedNumberOfDownloadableItems;
@property (getter=isLocked) bool locked;
@property (readonly) NSArray *mediaFiles;
@property (readonly) NSArray *notifyArray;
@property unsigned long long numberOfDownloadableItems;
@property (readonly) double timeOffset;
@property (copy) NSString *volumePath;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)addFolder:(id)arg1;
- (void)addObjectToNotifyArray:(id)arg1;
- (void)addToMetadataFetchQ:(id)arg1;
- (void)addToThumbnailFetchQ:(id)arg1;
- (bool)allowsSyncingClock;
- (bool)applePTPCapable;
- (id)applePTPFiles;
- (id)applePTPObjectLimit;
- (void)aptpUpdateFilesWithCommand:(id)arg1 andData:(id)arg2;
- (unsigned long long)batteryLevel;
- (bool)batteryLevelAvailable;
- (bool)beingEjected;
- (void)cancelDownload;
- (void)clearNotifyArray;
- (unsigned long long)contentCatalogPercentCompleted;
- (id)contents;
- (void)dealloc;
- (void)decrementEstimatedNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
- (id)description;
- (id)deviceQSemaphore;
- (double)downloadCancelTimestamp;
- (unsigned long long)estimatedNumberOfDownloadableItems;
- (id)filesOfType:(id)arg1;
- (void)finalize;
- (id)generalQ;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)incrementNumberOfDownloadableItems;
- (id)init;
- (bool)isAccessRestrictedAppleDevice;
- (bool)isApplePTPCapable;
- (bool)isEjectable;
- (bool)isLocked;
- (id)mediaFiles;
- (id)notifyArray;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1;
- (unsigned long long)numberOfDownloadableItems;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)receivedDeviceCommandCompletion;
- (void)removeFolder:(id)arg1;
- (void)requestCloseSession;
- (void)requestDataForFiles:(id)arg1 withProperties:(id)arg2;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestEject;
- (void)requestMetadataForFiles:(id)arg1;
- (void)requestOpenSession;
- (void)requestSyncClock;
- (void)requestThumbnailsForFiles:(id)arg1;
- (void)setAccessRestrictedAppleDevice:(bool)arg1;
- (void)setAllowsSyncingClock:(bool)arg1;
- (void)setApplePTPCapable:(bool)arg1;
- (void)setApplePTPObjectLimit:(id)arg1;
- (void)setBeingEjected:(bool)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setLocked:(bool)arg1;
- (void)setNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setVolumePath:(id)arg1;
- (double)timeOffset;
- (id)volumePath;

@end
