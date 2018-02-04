/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode> {
    struct CGSize { 
        double width; 
        double height; 
    }  _baseImageSize;
    NSData * _imageData;
    <PUImageInfoNode> * _imageDataNode;
    double  _jpegCompression;
    NSString * _livePhotoPairingIdentifier;
    PLPhotoEditModel * _photoEditModel;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedImageSize;
    <PUVideoURLNode> * _videoURLNode;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } baseImageSize;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) <PUImageInfoNode> *imageDataNode;
@property (nonatomic, readonly) double jpegCompression;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly, copy) PLPhotoEditModel *photoEditModel;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderedImageSize;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PUVideoURLNode> *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)_editSource;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 baseSize:(struct CGSize { double x1; double x2; })arg2 editedSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)_isInputValid;
- (struct CGSize { double x1; double x2; })baseImageSize;
- (id)imageData;
- (id)imageDataNode;
- (id)initWithImageInfoNode:(id)arg1 videoURLNode:(id)arg2 photoEditModel:(id)arg3 livePhotoPairingIdentifier:(id)arg4 jpegCompression:(double)arg5;
- (double)jpegCompression;
- (id)livePhotoPairingIdentifier;
- (id)photoEditModel;
- (struct CGSize { double x1; double x2; })renderedImageSize;
- (void)run;
- (id)videoURLNode;

@end
