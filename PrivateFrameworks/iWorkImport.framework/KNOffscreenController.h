/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNOffscreenController : NSObject {
    KNAnimatedSlideView * _animatedSlideView;
    bool  _isImageGenerationCancelled;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    KNPlaybackSession * _session;
}

@property (nonatomic, readonly) KNAnimatedSlideView *animatedSlideView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) KNPlaybackSession *session;

- (void).cxx_destruct;
- (id)animatedSlideView;
- (void)cancelImageGeneration;
- (struct CGImage { }*)copyImageOfCurrentEventIgnoringBuildVisilibity:(bool)arg1;
- (void)dealloc;
- (void)drawCurrentEventIntoContext:(struct CGContext { }*)arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ignoreBuildVisibility:(bool)arg3;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* block */)arg1;
- (bool)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })outputSize;
- (id)session;

@end
