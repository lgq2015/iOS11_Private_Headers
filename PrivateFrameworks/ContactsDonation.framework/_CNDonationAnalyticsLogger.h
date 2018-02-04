/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReportAnalytics;
- (id)init;
- (id)log_t;
- (void)noDonatedMeCard;
- (void)noMeCard;
- (void)willReportAnalytics;
- (void)withinReportingInterval:(id)arg1;

@end
