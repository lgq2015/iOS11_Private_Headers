/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATAsset : NSObject <NSCopying, NSSecureCoding> {
    long long  _assetState;
    NSString * _assetType;
    bool  _bypassStore;
    unsigned long long  _bytesRemaining;
    bool  _canUseCellularData;
    NSDictionary * _clientParams;
    unsigned long long  _completedAssetParts;
    id /* block */  _completionBlock;
    NSString * _dataclass;
    bool  _downloadOnly;
    float  _downloadProgress;
    NSError * _error;
    NSURL * _icon;
    NSString * _identifier;
    NSString * _infoPlist;
    bool  _installOnly;
    float  _installProgress;
    bool  _installStarted;
    bool  _installed;
    bool  _isDownload;
    bool  _isForeground;
    bool  _isPrioritized;
    bool  _isRestore;
    bool  _legacy;
    NSString * _localPath;
    bool  _lyricsEmbeddedInAsset;
    bool  _powerRequired;
    NSString * _prettyName;
    unsigned int  _priority;
    id /* block */  _progressBlock;
    int  _protectionType;
    double  _queueDuration;
    double  _queueStartTime;
    bool  _readyForStore;
    ATStoreInfo * _storeInfo;
    long long  _storePID;
    NSString * _storePlist;
    unsigned long long  _totalBytes;
    double  _transferDuration;
    double  _transferStartTime;
    NSDictionary * _variantOptions;
}

@property (nonatomic) long long assetState;
@property (nonatomic, retain) NSString *assetType;
@property (nonatomic) bool bypassStore;
@property (nonatomic) unsigned long long bytesRemaining;
@property (nonatomic) bool canUseCellularData;
@property (nonatomic, retain) NSDictionary *clientParams;
@property (nonatomic) unsigned long long completedAssetParts;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *dataclass;
@property (nonatomic) bool downloadOnly;
@property (nonatomic) float downloadProgress;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *icon;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *infoPlist;
@property (nonatomic) bool installOnly;
@property (nonatomic) float installProgress;
@property (nonatomic) bool installStarted;
@property (getter=isInstalled, nonatomic) bool installed;
@property (nonatomic) bool isDownload;
@property (nonatomic) bool isForeground;
@property (nonatomic) bool isPrioritized;
@property (nonatomic) bool isRestore;
@property (getter=isLegacy, nonatomic) bool legacy;
@property (nonatomic) bool lyricsEmbeddedInAsset;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) bool powerRequired;
@property (nonatomic, retain) NSString *prettyName;
@property (nonatomic) unsigned int priority;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic) int protectionType;
@property (nonatomic) double queueDuration;
@property (nonatomic) double queueStartTime;
@property (nonatomic) bool readyForStore;
@property (nonatomic, retain) ATStoreInfo *storeInfo;
@property (nonatomic) long long storePID;
@property (nonatomic, retain) NSString *storePlist;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) double transferDuration;
@property (nonatomic) double transferStartTime;
@property (nonatomic, retain) NSDictionary *variantOptions;

+ (id)assetWithSerializedAsset:(id)arg1;
+ (id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
+ (id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5;
+ (bool)supportsSecureCoding;
+ (id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4;

- (void).cxx_destruct;
- (id)_variantDescription;
- (unsigned long long)assetParts;
- (long long)assetState;
- (id)assetType;
- (bool)bypassStore;
- (unsigned long long)bytesRemaining;
- (bool)canUseCellularData;
- (id)clientParams;
- (unsigned long long)completedAssetParts;
- (id /* block */)completionBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataclass;
- (id)description;
- (bool)downloadOnly;
- (float)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)infoPlist;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
- (bool)installOnly;
- (float)installProgress;
- (bool)installStarted;
- (bool)isDownload;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isInstalled;
- (bool)isLegacy;
- (bool)isPrioritized;
- (bool)isRestore;
- (bool)lyricsEmbeddedInAsset;
- (id)path;
- (bool)powerRequired;
- (id)prettyName;
- (unsigned int)priority;
- (id /* block */)progressBlock;
- (int)protectionType;
- (double)queueDuration;
- (double)queueStartTime;
- (bool)readyForStore;
- (id)serializedAsset;
- (void)setAssetState:(long long)arg1;
- (void)setAssetType:(id)arg1;
- (void)setBypassStore:(bool)arg1;
- (void)setBytesRemaining:(unsigned long long)arg1;
- (void)setCanUseCellularData:(bool)arg1;
- (void)setClientParams:(id)arg1;
- (void)setCompletedAssetParts:(unsigned long long)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDataclass:(id)arg1;
- (void)setDownloadOnly:(bool)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setError:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setInstallOnly:(bool)arg1;
- (void)setInstallProgress:(float)arg1;
- (void)setInstallStarted:(bool)arg1;
- (void)setInstalled:(bool)arg1;
- (void)setIsDownload:(bool)arg1;
- (void)setIsForeground:(bool)arg1;
- (void)setIsPrioritized:(bool)arg1;
- (void)setIsRestore:(bool)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setLyricsEmbeddedInAsset:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setPowerRequired:(bool)arg1;
- (void)setPrettyName:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setProtectionType:(int)arg1;
- (void)setQueueDuration:(double)arg1;
- (void)setQueueStartTime:(double)arg1;
- (void)setReadyForStore:(bool)arg1;
- (void)setStoreInfo:(id)arg1;
- (void)setStorePID:(long long)arg1;
- (void)setStorePlist:(id)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setTransferDuration:(double)arg1;
- (void)setTransferStartTime:(double)arg1;
- (void)setVariantOptions:(id)arg1;
- (id)shortDescription;
- (id)storeInfo;
- (long long)storePID;
- (id)storePlist;
- (unsigned long long)totalBytes;
- (double)transferDuration;
- (double)transferStartTime;
- (id)variantOptions;

@end
