/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditableMediaProviderVideoURLNode : PXRunNode <PUVideoURLNode> {
    <PUEditableAsset> * _asset;
    PUEditableMediaProvider * _mediaProvider;
    int  _requestID;
    long long  _version;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSURL *videoURL;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (void)_handleDidLoadVideoURL:(id)arg1 info:(id)arg2;
- (id)asset;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;
- (id)mediaProvider;
- (void)run;
- (long long)version;
- (id)videoURL;

@end
