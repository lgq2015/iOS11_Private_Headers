/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode> {
    NUVideoExportClient * _exportClient;
    <PUImageInfoNode> * _imageInfoNode;
    NSString * _livePhotoPairingIdentifier;
    PLPhotoEditModel * _photoEditModel;
    unsigned long long  _quality;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedVideoSize;
    NSURL * _videoURL;
    <PUVideoURLNode> * _videoURLNode;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PUImageInfoNode> *imageInfoNode;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly, copy) PLPhotoEditModel *photoEditModel;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long quality;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderedVideoSize;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *videoURL;
@property (nonatomic, readonly) <PUVideoURLNode> *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)_editSource;
- (id)_exportPresetName;
- (void)_handleExportCompletedWithSuccess:(bool)arg1 editedSize:(struct CGSize { double x1; double x2; })arg2 error:(id)arg3;
- (id)_newOutputURL;
- (void)didCancel;
- (id)imageInfoNode;
- (id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 photoEditModel:(id)arg5;
- (id)livePhotoPairingIdentifier;
- (id)photoEditModel;
- (double)progress;
- (unsigned long long)quality;
- (struct CGSize { double x1; double x2; })renderedVideoSize;
- (void)run;
- (void)setVideoURL:(id)arg1;
- (id)videoURL;
- (id)videoURLNode;

@end
