/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaDownload : NSObject {
    long long  _deviceLibraryID;
    double  _downloadProgress;
    long long  _downloadReason;
    long long  _libraryID;
    long long  _storeItemID;
    long long  _storeSagaID;
}

@property (nonatomic, readonly) long long deviceLibraryID;
@property (nonatomic) double downloadProgress;
@property (nonatomic) long long downloadReason;
@property long long libraryID;
@property (nonatomic, readonly) long long storeItemID;
@property long long storeSagaID;

+ (id)MPMediaDownloadsFromATAssets:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
+ (long long)_downloadReasonFromStoreDownload:(id)arg1;

- (id)description;
- (long long)deviceLibraryID;
- (double)downloadProgress;
- (long long)downloadReason;
- (unsigned long long)hash;
- (id)init;
- (id)initWithATAsset:(id)arg1;
- (id)initWithMPStoreDownload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)libraryID;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadReason:(long long)arg1;
- (void)setLibraryID:(long long)arg1;
- (void)setStoreSagaID:(long long)arg1;
- (long long)storeItemID;
- (long long)storeSagaID;

@end
