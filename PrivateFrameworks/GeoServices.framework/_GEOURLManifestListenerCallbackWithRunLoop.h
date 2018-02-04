/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOURLManifestListenerCallbackWithRunLoop : NSObject <_GEOURLManifestListenerCallback> {
    id /* block */  _handler;
    struct __CFRunLoop { } * _runLoop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1 handler:(id /* block */)arg2;
- (void)performHandler:(bool)arg1;

@end
