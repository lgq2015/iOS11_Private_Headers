/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {
    bool  _donationsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDonationsEnabled, nonatomic) bool donationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isDonationsEnabled;
- (void)setDonationsEnabled:(bool)arg1;

@end
