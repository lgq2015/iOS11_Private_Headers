/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContactsDataProviderResult : NSObject {
    NSString * _companyName;
    NSString * _contactLabel;
    NSArray * _contacts;
    int  _legacyAddressBookIdentifier;
    NSString * _localizedName;
}

@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (nonatomic, copy) NSString *localizedName;

- (void).cxx_destruct;
- (id)companyName;
- (id)contactLabel;
- (id)contacts;
- (id)description;
- (int)legacyAddressBookIdentifier;
- (id)localizedName;
- (void)setCompanyName:(id)arg1;
- (void)setContactLabel:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setLegacyAddressBookIdentifier:(int)arg1;
- (void)setLocalizedName:(id)arg1;

@end
