/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionAdvertiser : NSObject {
    <SFCompanionAdvertiserDelegate> * _delegate;
    NSString * _serviceType;
    bool  _supportsStreams;
}

@property <SFCompanionAdvertiserDelegate> *delegate;
@property (readonly) NSData *serviceEndpointData;
@property (readonly, copy) NSString *serviceType;
@property bool supportsStreams;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithServiceType:(id)arg1;
- (id)serviceEndpointData;
- (id)serviceType;
- (void)setDelegate:(id)arg1;
- (void)setSupportsStreams:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)supportsStreams;

@end
