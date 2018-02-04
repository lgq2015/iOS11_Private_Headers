/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLStatus : NSObject {
    <CPLStatusDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _lock;
    NSMutableDictionary * _status;
    NSURL * _statusFileURL;
}

@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (nonatomic, copy) NSData *accountFlagsData;
@property (nonatomic, readonly) NSDictionary *cloudAssetCountPerType;
@property (nonatomic, readonly) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (getter=isConnectedToNetwork, nonatomic) bool connectedToNetwork;
@property (nonatomic) <CPLStatusDelegate> *delegate;
@property (nonatomic, copy) NSDate *exitDeleteTime;
@property (nonatomic, readonly) bool hasBatteryBudget;
@property (nonatomic, readonly) bool hasCellularBudget;
@property (nonatomic) bool hasChangesToProcess;
@property (nonatomic, readonly) bool hasValidSystemBudget;
@property (nonatomic) bool iCloudLibraryClientVersionTooOld;
@property (nonatomic) bool iCloudLibraryExists;
@property (nonatomic) bool iCloudLibraryHasBeenWiped;
@property (nonatomic, copy) NSDate *initialSyncDate;
@property (nonatomic) bool isExceedingQuota;
@property (nonatomic, copy) NSDate *lastCompletePrefetchDate;
@property (nonatomic, copy) NSDate *lastPruneDate;
@property (nonatomic, copy) NSDate *lastSuccessfulSyncDate;

+ (id)statusForSharedLibrary;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (void)_save;
- (void)_statusDidChange;
- (id)accountFlags;
- (id)accountFlagsData;
- (id)cloudAssetCountPerType;
- (id)cloudAssetCountPerTypeLastCheckDate;
- (id)delegate;
- (id)exitDeleteTime;
- (bool)hasBatteryBudget;
- (bool)hasCellularBudget;
- (bool)hasChangesToProcess;
- (bool)hasValidSystemBudget;
- (bool)iCloudLibraryClientVersionTooOld;
- (bool)iCloudLibraryExists;
- (bool)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)initialSyncDate;
- (bool)isConnectedToNetwork;
- (bool)isExceedingQuota;
- (id)lastCompletePrefetchDate;
- (id)lastPruneDate;
- (id)lastSuccessfulSyncDate;
- (void)refetchFromDisk;
- (void)setAccountFlagsData:(id)arg1;
- (void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(bool)arg2;
- (void)setConnectedToNetwork:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasCellularBudget:(bool)arg1 hasBatteryBudget:(bool)arg2 isBudgetValid:(bool)arg3;
- (void)setHasChangesToProcess:(bool)arg1;
- (void)setICloudLibraryClientVersionTooOld:(bool)arg1;
- (void)setICloudLibraryExists:(bool)arg1;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (void)setInitialSyncDate:(id)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)setLastCompletePrefetchDate:(id)arg1;
- (void)setLastPruneDate:(id)arg1;
- (void)setLastSuccessfulSyncDate:(id)arg1;
- (id)statusDescription;
- (bool)writeInitialSyncMarker:(id*)arg1;

@end
