/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel> {
    ALAssetsLibrary * _library;
    NSObject<OS_dispatch_queue> * _readQueue;
    ALAssetRepresentation * _representation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithRepresentation:(id)arg1 library:(id)arg2;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end
