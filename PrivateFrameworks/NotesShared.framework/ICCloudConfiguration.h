/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudConfiguration : NSObject {
    NSTimer * _downloadTimer;
    unsigned long long  _maxAttachmentsPerNote;
    unsigned long long  _maxInlineAssetSizeBytes;
    unsigned long long  _maxSubAttachmentsPerAttachment;
    NSNumber * _maximumAttachmentSizeMB;
    NSString * _minimumClientVersion;
    double  _pollingInterval;
    unsigned long long  _resultsLimitPerSyncOperation;
    ICCloudThrottlingPolicy * _throttlingPolicy;
}

@property (nonatomic, retain) NSTimer *downloadTimer;
@property (nonatomic) unsigned long long maxAttachmentsPerNote;
@property (nonatomic) unsigned long long maxInlineAssetSizeBytes;
@property (nonatomic) unsigned long long maxSubAttachmentsPerAttachment;
@property (nonatomic, retain) NSNumber *maximumAttachmentSizeMB;
@property (nonatomic, copy) NSString *minimumClientVersion;
@property (nonatomic) double pollingInterval;
@property (nonatomic) unsigned long long resultsLimitPerSyncOperation;
@property (nonatomic, retain) ICCloudThrottlingPolicy *throttlingPolicy;

+ (id)availableConfigurationURLs;
+ (id)cachedConfigurationURL;
+ (id)defaultConfigurationURL;
+ (bool)isConfigurationValid:(id)arg1;
+ (void)setDefaultConfigurationURL:(id)arg1;
+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadRemoteConfiguration:(id)arg1;
- (id)downloadTimer;
- (id)init;
- (void)loadConfigurationFromURL:(id)arg1;
- (void)loadLocalConfigurationFile;
- (unsigned long long)maxAttachmentsPerNote;
- (unsigned long long)maxInlineAssetSizeBytes;
- (unsigned long long)maxSubAttachmentsPerAttachment;
- (id)maximumAttachmentSizeMB;
- (id)minimumClientVersion;
- (double)pollingInterval;
- (unsigned long long)resultsLimitPerSyncOperation;
- (void)setConfigurationFromDictionary:(id)arg1;
- (void)setDownloadTimer:(id)arg1;
- (void)setMaxAttachmentsPerNote:(unsigned long long)arg1;
- (void)setMaxInlineAssetSizeBytes:(unsigned long long)arg1;
- (void)setMaxSubAttachmentsPerAttachment:(unsigned long long)arg1;
- (void)setMaximumAttachmentSizeMB:(id)arg1;
- (void)setMinimumClientVersion:(id)arg1;
- (void)setPollingInterval:(double)arg1;
- (void)setResultsLimitPerSyncOperation:(unsigned long long)arg1;
- (void)setThrottlingPolicy:(id)arg1;
- (id)throttlingPolicy;

@end
