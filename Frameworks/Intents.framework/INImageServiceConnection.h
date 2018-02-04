/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImageServiceConnection : NSObject {
    NSXPCConnection * _underlyingConnection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(id /* block */)arg2;

@end
