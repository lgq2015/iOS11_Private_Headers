/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStorageInfo : NSObject {
    long long  _availableBytes;
    long long  _cameraRollBackupBytes;
    long long  _totalBytes;
    long long  _usedBytes;
}

@property (nonatomic) long long availableBytes;
@property (nonatomic) long long cameraRollBackupBytes;
@property (nonatomic) long long totalBytes;
@property (nonatomic) long long usedBytes;

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4;

- (long long)availableBytes;
- (long long)cameraRollBackupBytes;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4;
- (void)setAvailableBytes:(long long)arg1;
- (void)setCameraRollBackupBytes:(long long)arg1;
- (void)setTotalBytes:(long long)arg1;
- (void)setUsedBytes:(long long)arg1;
- (long long)totalBytes;
- (long long)usedBytes;

@end
