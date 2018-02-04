/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAContactSearchResultElement : NSObject <NSSecureCoding> {
    NSString * _alias;
    NSString * _appleFloor;
    NSString * _buildingName;
    NSString * _city;
    NSString * _company;
    NSString * _country;
    NSArray * _cuAddresses;
    NSString * _department;
    NSString * _displayName;
    NSString * _emailAddress;
    NSString * _faxPhone;
    NSString * _firstName;
    NSString * _homePhone;
    NSString * _homePostalAddress;
    NSString * _iPhone;
    NSString * _identifierOnServer;
    NSString * _imService;
    NSString * _imUsername;
    NSData * _jpegPhoto;
    NSString * _lastName;
    NSString * _mainPhone;
    NSString * _mobilePhone;
    NSString * _office;
    NSString * _pagerNumber;
    NSString * _postalAddress;
    NSString * _preferredUserAddress;
    NSString * _principalPath;
    NSString * _recordName;
    NSString * _serverSource;
    NSString * _state;
    NSString * _street;
    NSString * _title;
    NSString * _uri;
    NSString * _workFaxPhone;
    NSString * _workPhone;
    NSString * _zip;
}

@property (nonatomic, copy) NSString *alias;
@property (nonatomic, copy) NSString *appleFloor;
@property (nonatomic, copy) NSString *buildingName;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *company;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSArray *cuAddresses;
@property (nonatomic, copy) NSString *department;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *faxPhone;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *homePhone;
@property (nonatomic, copy) NSString *homePostalAddress;
@property (nonatomic, copy) NSString *iPhone;
@property (nonatomic, retain) NSString *identifierOnServer;
@property (nonatomic, copy) NSString *imService;
@property (nonatomic, copy) NSString *imUsername;
@property (nonatomic, copy) NSData *jpegPhoto;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *mainPhone;
@property (nonatomic, copy) NSString *mobilePhone;
@property (nonatomic, copy) NSString *office;
@property (nonatomic, copy) NSString *pagerNumber;
@property (nonatomic, copy) NSString *postalAddress;
@property (nonatomic, copy) NSString *preferredUserAddress;
@property (nonatomic, copy) NSString *principalPath;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, copy) NSString *serverSource;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *workFaxPhone;
@property (nonatomic, copy) NSString *workPhone;
@property (nonatomic, copy) NSString *zip;

// Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alias;
- (id)appleFloor;
- (id)buildingName;
- (id)city;
- (id)company;
- (id)country;
- (id)cuAddresses;
- (id)department;
- (id)description;
- (id)displayName;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)faxPhone;
- (id)firstName;
- (id)homePhone;
- (id)homePostalAddress;
- (id)iPhone;
- (id)identifierOnServer;
- (id)imService;
- (id)imUsername;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDAContactSearchResultElement:(id)arg1;
- (id)jpegPhoto;
- (id)lastName;
- (id)mainPhone;
- (id)mobilePhone;
- (id)office;
- (id)pagerNumber;
- (id)postalAddress;
- (id)preferredUserAddress;
- (id)principalPath;
- (id)recordName;
- (id)serverSource;
- (void)setAlias:(id)arg1;
- (void)setAppleFloor:(id)arg1;
- (void)setBuildingName:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCuAddresses:(id)arg1;
- (void)setDepartment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFaxPhone:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHomePhone:(id)arg1;
- (void)setHomePostalAddress:(id)arg1;
- (void)setIPhone:(id)arg1;
- (void)setIdentifierOnServer:(id)arg1;
- (void)setImService:(id)arg1;
- (void)setImUsername:(id)arg1;
- (void)setJpegPhoto:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMainPhone:(id)arg1;
- (void)setMobilePhone:(id)arg1;
- (void)setOffice:(id)arg1;
- (void)setPagerNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setPreferredUserAddress:(id)arg1;
- (void)setPrincipalPath:(id)arg1;
- (void)setRecordName:(id)arg1;
- (void)setServerSource:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setWorkFaxPhone:(id)arg1;
- (void)setWorkPhone:(id)arg1;
- (void)setZip:(id)arg1;
- (id)state;
- (id)street;
- (id)title;
- (id)uri;
- (id)workFaxPhone;
- (id)workPhone;
- (id)zip;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void*)newAddressBookRecordWithSource:(void*)arg1;

@end
