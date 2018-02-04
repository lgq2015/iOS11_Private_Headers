/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOToolRequester : NSObject <GEOToolProxy> {
    <GEOToolProxy> * _proxy;
}

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (id)getDefault:(id)arg1;
- (id)init;
- (void)lockDBs;
- (void)resetMapDataExtension;
- (void)unlockDBs;

@end
