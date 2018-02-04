/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocol, CLIndoorDelegateProtocolInternal> {
    <CLIndoorDelegateProtocol> * _delegate;
    NSError * _shutdownReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLIndoorDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *shutdownReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)indoorAssetDownloadProgress:(float)arg1;
- (void)indoorDidFailWithError:(id)arg1;
- (void)indoorDidShutdown:(id)arg1;
- (void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;
- (void)indoorGivesUpWithLocation:(id)arg1;
- (void)indoorIsUncertainWithLocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)shutdownReason;

@end
