/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDownloadTaskProgress : NSObject {
    bool  _isActive;
    long long  _totalBytesDownloaded;
    long long  _totalBytesExpectedToBeDownloaded;
}

@property (nonatomic) bool isActive;
@property (nonatomic) long long totalBytesDownloaded;
@property (nonatomic) long long totalBytesExpectedToBeDownloaded;

- (id)description;
- (bool)isActive;
- (void)setIsActive:(bool)arg1;
- (void)setTotalBytesDownloaded:(long long)arg1;
- (void)setTotalBytesExpectedToBeDownloaded:(long long)arg1;
- (long long)totalBytesDownloaded;
- (long long)totalBytesExpectedToBeDownloaded;

@end
