/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemPreflightOperation : NSOperation {
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _forcesAuthentication;
    bool  _loadsRedeemCodeMetadata;
    id /* block */  _outputBlock;
    NSString * _redeemCode;
    SKUIRedeemConfiguration * _redeemConfiguration;
    SKUIRedeemViewController * _redeemViewController;
}

@property (nonatomic) bool forcesAuthentication;
@property bool loadsRedeemCodeMetadata;
@property (copy) id /* block */ outputBlock;
@property (retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) SKUIRedeemViewController *redeemViewController;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (bool)forcesAuthentication;
- (id)init;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(bool)arg3;
- (bool)loadsRedeemCodeMetadata;
- (void)main;
- (id /* block */)outputBlock;
- (id)redeemConfiguration;
- (id)redeemViewController;
- (void)setForcesAuthentication:(bool)arg1;
- (void)setLoadsRedeemCodeMetadata:(bool)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setRedeemViewController:(id)arg1;

@end
