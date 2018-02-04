/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode> {
    <PUEditableAsset> * _asset;
    NSData * _imageData;
    NSURL * _imageDataURL;
    NSString * _imageDataUTI;
    long long  _imageExifOrientation;
    PUEditableMediaProvider * _mediaProvider;
    int  _requestID;
    long long  _version;
}

@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) NSString *imageDataUTI;
@property (nonatomic, readonly) long long imageExifOrientation;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;
- (id)asset;
- (void)didCancel;
- (id)imageData;
- (id)imageDataURL;
- (id)imageDataUTI;
- (long long)imageExifOrientation;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;
- (id)mediaProvider;
- (void)run;
- (long long)version;

@end
