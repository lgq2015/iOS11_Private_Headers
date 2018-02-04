/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMJPEGDecoder : NSObject {
    NSObject<OS_dispatch_queue> * __decodeQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_decodeQueue;

- (void).cxx_destruct;
- (id)_decodeQueue;
- (void)decodeJPEGData:(id)arg1 withPixelBufferCompletionHandler:(id /* block */)arg2;
- (id)init;

@end
