/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBDisplaySnapshot : NSObject <BSInvalidatable> {
    FBSDisplayConfiguration * _displayConfiguration;
    UIImage * _image;
    struct CGImage { } * _imageRef;
    NSOrderedSet * _layers;
    bool  _opaque;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
    struct __IOSurface { } * _surfaceRef;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly) UIImage *UIImage;
@property (getter=isDataLoaded, nonatomic, readonly) bool dataLoaded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSOrderedSet *layers;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } snapshotSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct __IOSurface { }*)IOSurface;
- (id)UIImage;
- (double)_scale;
- (struct CGSize { double x1; double x2; })_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)arg1;
- (bool)capture;
- (void)dealloc;
- (id)displayConfiguration;
- (id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2;
- (void)invalidate;
- (bool)isDataLoaded;
- (bool)isOpaque;
- (id)layers;
- (double)scale;
- (void)setOpaque:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setSnapshotSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })snapshotSize;

@end
