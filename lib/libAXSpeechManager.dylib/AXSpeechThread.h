/* made by EzioChiu
   Image: /usr/lib/libAXSpeechManager.dylib
 */

@interface AXSpeechThread : NSThread {
    NSPort * _machPort;
    NSRunLoop * _threadRunLoop;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)stop;

@end
