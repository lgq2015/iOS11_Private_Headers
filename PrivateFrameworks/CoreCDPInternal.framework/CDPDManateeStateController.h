/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {
    <CDPDAuthProviderInternal> * _authProvider;
    <CDPDCircleProxy> * _circleProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkSecurityEligibility:(id*)arg1;
- (void)_sendNotification:(const char *)arg1 withValue:(unsigned long long)arg2;
- (void)circleStatusChanged;
- (void)circleViewStatusChanged;
- (void)fetchManateeAvailabilityWithCompletion:(id /* block */)arg1;
- (id)initWithCircleProxy:(id)arg1 authProvider:(id)arg2;
- (bool)isPrimaryAccountHSA2;
- (void)reportManateeAvailable;
- (void)reportManateeUnavailable;
- (void)securityLevelChanged:(bool)arg1;

@end
