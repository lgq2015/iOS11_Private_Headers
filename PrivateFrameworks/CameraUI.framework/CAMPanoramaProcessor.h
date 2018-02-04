/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaProcessor : NSObject {
    NSMutableDictionary * __initialMetadataByRequestUUID;
    struct OpaqueFigSampleBufferProcessor { } * __processor;
    bool  _capturingPanorama;
    <CAMPanoramaProcessorDelegate> * _delegate;
    long long  _direction;
    long long  _photoEncodingBehavior;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewSize;
    CAMPanoramaCaptureRequest * _request;
}

@property (nonatomic, readonly) NSMutableDictionary *_initialMetadataByRequestUUID;
@property (nonatomic, readonly) struct OpaqueFigSampleBufferProcessor { }*_processor;
@property (getter=isCapturingPanorama, setter=_setCapturingPanorama:, nonatomic) bool capturingPanorama;
@property (nonatomic, readonly) <CAMPanoramaProcessorDelegate> *delegate;
@property (nonatomic) long long direction;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } previewSize;
@property (setter=_setRequest:, nonatomic, retain) CAMPanoramaCaptureRequest *request;

- (void).cxx_destruct;
- (id)_initialMetadataByRequestUUID;
- (struct OpaqueFigSampleBufferProcessor { }*)_processor;
- (void)_setCapturingPanorama:(bool)arg1;
- (void)_setRequest:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)direction;
- (id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2;
- (void)invalidate;
- (bool)isCapturingPanorama;
- (long long)photoEncodingBehavior;
- (struct CGSize { double x1; double x2; })previewSize;
- (void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)request;
- (void)setDirection:(long long)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCapture;

@end