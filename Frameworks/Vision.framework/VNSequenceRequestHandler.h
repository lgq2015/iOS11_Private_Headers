/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSequenceRequestHandler : NSObject <VNRequestCancelling, VNRequestWarming> {
    VNRequestPerformer * _requestPerformer;
}

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanup;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 error:(id*)arg3;
- (void)cancelAllRequests;
- (id)init;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2;

@end
