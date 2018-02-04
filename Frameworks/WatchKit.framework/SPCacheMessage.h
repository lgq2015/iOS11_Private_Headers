/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPCacheMessage : NSObject {
    NSData * _assetData;
    NSString * _assetKey;
    unsigned long long  _cacheType;
    unsigned long long  _error;
    NSString * _gizmoCacheIdentifier;
    int  _messageType;
    SPAssetCacheSyncData * _syncData;
}

@property (nonatomic, retain) NSData *assetData;
@property (nonatomic, retain) NSString *assetKey;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) unsigned long long error;
@property (nonatomic, retain) NSString *gizmoCacheIdentifier;
@property (nonatomic) int messageType;
@property (nonatomic, retain) SPAssetCacheSyncData *syncData;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;

- (void).cxx_destruct;
- (id)assetData;
- (id)assetKey;
- (unsigned long long)cacheType;
- (unsigned long long)error;
- (id)gizmoCacheIdentifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (int)messageType;
- (void)setAssetData:(id)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1;
- (void)setError:(unsigned long long)arg1;
- (void)setGizmoCacheIdentifier:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setSyncData:(id)arg1;
- (id)syncData;

@end
