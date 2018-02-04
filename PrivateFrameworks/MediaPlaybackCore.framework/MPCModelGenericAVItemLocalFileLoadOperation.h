/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation {
    MPCModelGenericAVItemAssetLoadProperties * _assetLoadProperties;
    bool  _requirePreferredAssetQuality;
    id /* block */  _responseHandler;
}

@property (nonatomic, retain) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) bool requirePreferredAssetQuality;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)assetLoadProperties;
- (void)execute;
- (bool)requirePreferredAssetQuality;
- (id /* block */)responseHandler;
- (void)setAssetLoadProperties:(id)arg1;
- (void)setRequirePreferredAssetQuality:(bool)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
