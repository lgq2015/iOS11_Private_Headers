/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCListener : NSObject {
    AUPasscodeCodecConfiguration * _codecConfig;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    APCListenerEngine * _listenerEngine;
    id /* block */  _retrievedDataHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ retrievedDataHandler;

+ (struct NSData { Class x1; }*)capabilityData;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)init;
- (id)initWithCodecConfiguration:(id)arg1;
- (id)initWithConfigurationData:(struct NSData { Class x1; }*)arg1;
- (id /* block */)invalidationHandler;
- (id /* block */)retrievedDataHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRetrievedDataHandler:(id /* block */)arg1;
- (void)startListening;
- (void)stopListening;

@end
