/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)couldNotLoadDonorExtensionForIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(id)arg2;
- (void)couldNotRenewDonation:(id)arg1 error:(id)arg2;
- (void)didExpireDonation:(id)arg1 withError:(id)arg2;
- (void)didRedonateValuesWithReason:(unsigned long long)arg1;
- (void)didRenewDonation:(id)arg1 untilDate:(id)arg2;
- (id)init;
- (void)loadedDonorExtension:(id)arg1 forIdentifier:(id)arg2;
- (id)log_t;
- (void)willRedonateValuesWithReason:(unsigned long long)arg1;
- (void)willRenewDonation:(id)arg1;

@end
