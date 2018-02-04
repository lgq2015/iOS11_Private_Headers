/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLState : NSObject <NSCopying> {
    NSDate * _exitDate;
    bool  _isClientVersionTooOld;
    bool  _isExceedingBatteryQuota;
    bool  _isExceedingCellularQuota;
    bool  _isExceedingLocalStorageQuota;
    bool  _isExceedingQuota;
    bool  _isInBatterySaverMode;
    bool  _isOffline;
    bool  _isSyncing;
    bool  _isUserPaused;
    double  _itemsToUploadProgress;
    unsigned long long  _numberOfItemsFailingToUpload;
    unsigned long long  _numberOfItemsToAdd;
    unsigned long long  _numberOfItemsToUpload;
    unsigned long long  _numberOfOriginalsToDownload;
    unsigned long long  _numberOfReferencedItems;
    NSDate * _syncDate;
}

@property (nonatomic, copy) NSDate *exitDate;
@property (nonatomic) bool isClientVersionTooOld;
@property (nonatomic) bool isExceedingBatteryQuota;
@property (nonatomic) bool isExceedingCellularQuota;
@property (nonatomic) bool isExceedingLocalStorageQuota;
@property (nonatomic) bool isExceedingQuota;
@property (nonatomic) bool isInBatterySaverMode;
@property (nonatomic) bool isOffline;
@property (nonatomic) bool isSyncing;
@property (nonatomic) bool isUserPaused;
@property (nonatomic) double itemsToUploadProgress;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfItemsToAdd;
@property (nonatomic) unsigned long long numberOfItemsToUpload;
@property (nonatomic) unsigned long long numberOfOriginalsToDownload;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic, copy) NSDate *syncDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)exitDate;
- (id)init;
- (bool)isClientVersionTooOld;
- (bool)isEqualToCPLState:(id)arg1;
- (bool)isExceedingBatteryQuota;
- (bool)isExceedingCellularQuota;
- (bool)isExceedingLocalStorageQuota;
- (bool)isExceedingQuota;
- (bool)isInBatterySaverMode;
- (bool)isOffline;
- (bool)isSyncing;
- (bool)isUserPaused;
- (double)itemsToUploadProgress;
- (unsigned long long)numberOfItemsFailingToUpload;
- (unsigned long long)numberOfItemsToAdd;
- (unsigned long long)numberOfItemsToUpload;
- (unsigned long long)numberOfOriginalsToDownload;
- (unsigned long long)numberOfReferencedItems;
- (void)setExitDate:(id)arg1;
- (void)setIsClientVersionTooOld:(bool)arg1;
- (void)setIsExceedingBatteryQuota:(bool)arg1;
- (void)setIsExceedingCellularQuota:(bool)arg1;
- (void)setIsExceedingLocalStorageQuota:(bool)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)setIsInBatterySaverMode:(bool)arg1;
- (void)setIsOffline:(bool)arg1;
- (void)setIsSyncing:(bool)arg1;
- (void)setIsUserPaused:(bool)arg1;
- (void)setItemsToUploadProgress:(double)arg1;
- (void)setNumberOfItemsFailingToUpload:(unsigned long long)arg1;
- (void)setNumberOfItemsToAdd:(unsigned long long)arg1;
- (void)setNumberOfItemsToUpload:(unsigned long long)arg1;
- (void)setNumberOfOriginalsToDownload:(unsigned long long)arg1;
- (void)setNumberOfReferencedItems:(unsigned long long)arg1;
- (void)setSyncDate:(id)arg1;
- (id)syncDate;

@end
