/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptingConnectionFromProcess:(int)arg1;
- (void)acceptingDonations:(id)arg1;
- (void)agentDidHandleRequest:(SEL)arg1;
- (void)agentDidStart;
- (void)agentWillHandleRequest:(SEL)arg1;
- (void)agentWillStart;
- (void)agentWillStop;
- (void)beginRestorePersistedState;
- (void)contactsChangedNotificationEmailAddressesChanged:(bool)arg1;
- (void)contactsChangedNotificationFoundName:(bool)arg1 nameChanged:(bool)arg2;
- (void)couldNotRejectClusterIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRejectDonationIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRejectUnknownClusterIdentifier:(id)arg1;
- (void)couldNotRejectUnknownDonationIdentifier:(id)arg1;
- (void)couldNotRenewBecauseDonorError:(id)arg1;
- (void)couldNotRenewBecauseLoadingError:(id)arg1;
- (void)couldNotRenewBecauseNotADonorExtension:(id)arg1;
- (void)denyingRequestFromProcess:(int)arg1;
- (void)didDiscoverExtension:(id)arg1;
- (void)didDiscoverExtensions;
- (void)didDiscoverUnexpectedExtensionType:(id)arg1;
- (void)didFailToDiscoverExtensions:(id)arg1;
- (void)didListRejections;
- (void)didRejectClusterIdentifier:(id)arg1;
- (void)didRejectDonationIdentifier:(id)arg1;
- (void)didRemoveAllRejections;
- (void)didRenewValue:(id)arg1 untilDate:(id)arg2;
- (void)donationServiceDidStart;
- (void)donationServiceWillStart;
- (void)donationServiceWillStop;
- (void)endRestorePersistedState;
- (void)featureDidDisable;
- (void)featureDidEnable;
- (void)featureNotEnabled:(SEL)arg1;
- (void)featureWillDisable;
- (void)featureWillEnable;
- (id)init;
- (id)log_t;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)maintenanceServiceWillStop;
- (void)preExpiredDonations:(id)arg1;
- (void)willDiscoverExtensions;
- (void)willListRejections;
- (void)willLoadExtensionVersions;
- (void)willRejectClusterIdentifier:(id)arg1;
- (void)willRejectDonationIdentifier:(id)arg1;
- (void)willRemoveAllRejections;
- (void)willRenewValues:(id)arg1 withDonor:(id)arg2;
- (void)willSaveExtensionVersions;

@end
