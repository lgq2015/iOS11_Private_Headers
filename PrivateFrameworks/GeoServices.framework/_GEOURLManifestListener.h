/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOURLManifestListener : NSObject {
    NSMutableArray * _handlers;
    NSLock * _lock;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

+ (id)sharedListener;

- (void).cxx_destruct;
- (void)_finish:(bool)arg1;
- (id)init;
- (void)waitForManifestWithCallback:(id)arg1;

@end
