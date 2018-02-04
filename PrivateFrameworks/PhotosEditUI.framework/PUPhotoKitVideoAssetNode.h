/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoKitVideoAssetNode : PXRunNode <PUVideoAssetNode> {
    PHAsset * _asset;
    int  _requestID;
    long long  _version;
    AVAsset * _videoAsset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (void)_handleDidLoadVideo:(id)arg1 info:(id)arg2;
- (id)asset;
- (id)initWithAsset:(id)arg1 version:(long long)arg2;
- (void)run;
- (long long)version;
- (id)videoAsset;

@end
