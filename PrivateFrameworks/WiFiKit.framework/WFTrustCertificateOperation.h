/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate> {
    bool  _accepted;
    NSArray * _certificateChain;
    UIViewController * _rootViewController;
    TrustCertificateViewController * _trustVc;
}

@property (nonatomic) bool accepted;
@property (nonatomic, retain) NSArray *certificateChain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) TrustCertificateViewController *trustVc;

- (void).cxx_destruct;
- (bool)accepted;
- (id)certificateChain;
- (id)initWithCertificateChain:(id)arg1 rootViewController:(id)arg2;
- (id)rootViewController;
- (void)setAccepted:(bool)arg1;
- (void)setCertificateChain:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setTrustVc:(id)arg1;
- (void)start;
- (void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2;
- (id)trustVc;

@end
