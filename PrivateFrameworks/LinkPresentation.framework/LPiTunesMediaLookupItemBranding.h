/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaLookupItemBranding : NSObject <LPiTunesMediaAssetCustomResolver> {
    NSURL * _URL;
    bool  _cancelled;
    LPOneShotFetcher * _iconFetcher;
    LPiTunesMediaAsset * _originatingAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPiTunesMediaAsset *originatingAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (void)cancel;
- (void)continueFetchingWithEVODMetadataURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isValidMIMEType:(id)arg1;
- (long long)maximumBytes;
- (id)originatingAsset;
- (void)setOriginatingAsset:(id)arg1;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(id /* block */)arg2;

@end
