/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleFrameStackshotIterator : NSObject <PASampleFrameIterator> {
    bool  _hideKernelFrames;
    bool  _hideUserFrames;
    PASampleKernelFrame * _kernel;
    PAStackshotThread * _stackshotThread;
    PASampleUserFrame * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PAStackshotThread *stackshotThread;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (void)iterateFrames:(id /* block */)arg1;
- (void)setStackshotThread:(id)arg1;
- (id)stackshotThread;

@end
