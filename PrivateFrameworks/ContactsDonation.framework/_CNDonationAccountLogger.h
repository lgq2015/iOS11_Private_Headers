/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountAdded:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)donating:(id)arg1;
- (void)donationFailedWithError:(id)arg1;
- (id)init;
- (id)log_t;
- (void)pluginLoaded;
- (void)pluginUnloaded;
- (void)removalFailedWithError:(id)arg1;
- (void)removing:(id)arg1;

@end
