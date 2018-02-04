/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSession : NSObject <NSCopying> {
    NSURL * _alternateSourceURL;
    NSString * _assetFlavor;
    unsigned long long  _assetQuality;
    bool  _didStartLeaseSession;
    unsigned long long  _downloadToken;
    bool  _iTunesStoreStream;
    bool  _isHLSAsset;
    unsigned long long  _protectionType;
    NSDictionary * _purchaseBundle;
    NSDictionary * _responseAssetDictionary;
    NSURL * _sourceURL;
    NSURL * _streamingKeyCertificateURL;
    NSURL * _streamingKeyServerURL;
}

@property (nonatomic, copy) NSURL *alternateSourceURL;
@property (nonatomic, copy) NSString *assetFlavor;
@property (nonatomic) unsigned long long assetQuality;
@property (nonatomic) bool didStartLeaseSession;
@property (nonatomic) unsigned long long downloadToken;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic) bool isHLSAsset;
@property (nonatomic) unsigned long long protectionType;
@property (nonatomic, copy) NSDictionary *purchaseBundle;
@property (nonatomic, retain) NSDictionary *responseAssetDictionary;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, copy) NSURL *streamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *streamingKeyServerURL;

- (void).cxx_destruct;
- (id)alternateSourceURL;
- (id)assetFlavor;
- (unsigned long long)assetQuality;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didStartLeaseSession;
- (unsigned long long)downloadToken;
- (bool)isHLSAsset;
- (bool)isiTunesStoreStream;
- (unsigned long long)protectionType;
- (id)purchaseBundle;
- (id)responseAssetDictionary;
- (void)setAlternateSourceURL:(id)arg1;
- (void)setAssetFlavor:(id)arg1;
- (void)setAssetQuality:(unsigned long long)arg1;
- (void)setDidStartLeaseSession:(bool)arg1;
- (void)setDownloadToken:(unsigned long long)arg1;
- (void)setITunesStoreStream:(bool)arg1;
- (void)setIsHLSAsset:(bool)arg1;
- (void)setProtectionType:(unsigned long long)arg1;
- (void)setPurchaseBundle:(id)arg1;
- (void)setResponseAssetDictionary:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStreamingKeyCertificateURL:(id)arg1;
- (void)setStreamingKeyServerURL:(id)arg1;
- (id)sourceURL;
- (id)streamingKeyCertificateURL;
- (id)streamingKeyServerURL;

@end
