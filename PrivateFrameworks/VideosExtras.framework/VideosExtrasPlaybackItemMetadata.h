/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {
    NSString * _buyParameters;
    unsigned long long  _mediaType;
    long long  _storeAdamID;
}

- (void).cxx_destruct;
- (bool)_calculateAllowsCellularNetworking;
- (void)_videosPlaybackSettingsChanged:(id)arg1;
- (bool)allowsInitiatingPlayWhileDownload;
- (id)buyParameters;
- (unsigned long long)contentType;
- (unsigned long long)hash;
- (id)initWithStoreAdamID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)storeAdamID;

@end
