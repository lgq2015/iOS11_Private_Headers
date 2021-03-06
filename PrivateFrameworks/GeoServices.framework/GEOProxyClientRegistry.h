/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClientRegistry : NSObject {
    GEOProxyClient * _currentComposite;
    NSMutableSet * _currentSet;
    NSLock * _lock;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)_updateComposite;
- (void)addClient:(id)arg1;
- (void)enableRegistry;
- (void)removeClient:(id)arg1;

@end
