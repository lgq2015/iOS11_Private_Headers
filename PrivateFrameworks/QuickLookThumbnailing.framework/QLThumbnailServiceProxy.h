/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailServiceProxy : NSObject {
    NSXPCConnection * _connection;
    NSObject<QLThumbnailAdditionIndexInterface> * _indexProxy;
    NSObject<QLThumbnailsInterface> * _proxy;
}

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)askThumbnailAdditionIndex:(id /* block */)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;

@end
