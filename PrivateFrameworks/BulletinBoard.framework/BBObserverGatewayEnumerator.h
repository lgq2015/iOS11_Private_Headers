/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayEnumerator : NSObject {
    BBBulletin * _bulletin;
    bool  _cancelled;
    unsigned long long  _feeds;
    double  _gatewayTimeout;
    NSArray * _gateways;
    NSMutableSet * _gatewaysPlayedLightsAndSirens;
}

@property (nonatomic, retain) BBBulletin *bulletin;
@property (nonatomic) bool cancelled;
@property (nonatomic) unsigned long long feeds;
@property (nonatomic) double gatewayTimeout;
@property (nonatomic, copy) NSArray *gateways;
@property (nonatomic, retain) NSMutableSet *gatewaysPlayedLightsAndSirens;

- (void).cxx_destruct;
- (void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(bool)arg2 completion:(id /* block */)arg3;
- (id)bulletin;
- (void)cancel;
- (bool)cancelled;
- (id)defaultGateway;
- (void)enumerateWithCompletion:(id /* block */)arg1;
- (unsigned long long)feeds;
- (double)gatewayTimeout;
- (id)gateways;
- (id)gatewaysPlayedLightsAndSirens;
- (id)init;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(bool)arg1;
- (void)setBulletin:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setFeeds:(unsigned long long)arg1;
- (void)setGatewayTimeout:(double)arg1;
- (void)setGateways:(id)arg1;
- (void)setGatewaysPlayedLightsAndSirens:(id)arg1;

@end
