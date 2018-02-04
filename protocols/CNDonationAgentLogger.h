/* made by EzioChiu.
 */

@protocol CNDonationAgentLogger <NSObject>

@required

- (void)acceptingConnectionFromProcess:(int)arg1;
- (void)acceptingDonations:(NSArray *)arg1;
- (void)agentDidHandleRequest:(SEL)arg1;
- (void)agentDidStart;
- (void)agentWillHandleRequest:(SEL)arg1;
- (void)agentWillStart;
- (void)agentWillStop;
- (void)beginRestorePersistedState;
- (void)contactsChangedNotificationEmailAddressesChanged:(bool)arg1;
- (void)contactsChangedNotificationFoundName:(bool)arg1 nameChanged:(bool)arg2;
- (void)couldNotRejectClusterIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)couldNotRejectDonationIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)couldNotRejectUnknownClusterIdentifier:(NSString *)arg1;
- (void)couldNotRejectUnknownDonationIdentifier:(NSString *)arg1;
- (void)couldNotRenewBecauseDonorError:(NSError *)arg1;
- (void)couldNotRenewBecauseLoadingError:(NSError *)arg1;
- (void)couldNotRenewBecauseNotADonorExtension:(id)arg1;
- (void)denyingRequestFromProcess:(int)arg1;
- (void)didDiscoverExtension:(CNDDonorExtension *)arg1;
- (void)didDiscoverExtensions;
- (void)didDiscoverUnexpectedExtensionType:(id)arg1;
- (void)didFailToDiscoverExtensions:(NSError *)arg1;
- (void)didListRejections;
- (void)didRejectClusterIdentifier:(NSString *)arg1;
- (void)didRejectDonationIdentifier:(NSString *)arg1;
- (void)didRemoveAllRejections;
- (void)didRenewValue:(CNDonationValue *)arg1 untilDate:(NSDate *)arg2;
- (void)donationServiceDidStart;
- (void)donationServiceWillStart;
- (void)donationServiceWillStop;
- (void)endRestorePersistedState;
- (void)featureDidDisable;
- (void)featureDidEnable;
- (void)featureNotEnabled:(SEL)arg1;
- (void)featureWillDisable;
- (void)featureWillEnable;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)maintenanceServiceWillStop;
- (void)preExpiredDonations:(NSArray *)arg1;
- (void)willDiscoverExtensions;
- (void)willListRejections;
- (void)willLoadExtensionVersions;
- (void)willRejectClusterIdentifier:(NSString *)arg1;
- (void)willRejectDonationIdentifier:(NSString *)arg1;
- (void)willRemoveAllRejections;
- (void)willRenewValues:(NSArray *)arg1 withDonor:(NSString *)arg2;
- (void)willSaveExtensionVersions;

@end
