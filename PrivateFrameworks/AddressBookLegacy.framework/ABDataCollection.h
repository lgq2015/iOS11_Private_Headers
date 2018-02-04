/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABDataCollection : NSObject {
    void * _addressBook;
    bool  _isLocalSourceOnly;
    bool  _isLocalSourceRemaining;
    bool  _isMeCardHomeAddressSet;
    bool  _isMeCardSet;
    bool  _isMeCardWorkAddressSet;
    NSMutableDictionary * _propertyCountForRecordID;
    bool  _runningUnitTests;
    NSCountedSet * _sourceTypeScalarKeys;
    int  _totalContacts;
    int  _totalContactsWithAnniversaries;
    int  _totalContactsWithBirthdays;
    int  _totalContactsWithPhotos;
    int  _totalContactsWithYearOnBirthday;
    int  _totalGroups;
}

@property (nonatomic) bool isLocalSourceOnly;
@property (nonatomic) bool isLocalSourceRemaining;
@property (nonatomic) bool isMeCardHomeAddressSet;
@property (nonatomic) bool isMeCardSet;
@property (nonatomic) bool isMeCardWorkAddressSet;
@property (nonatomic, retain) NSMutableDictionary *propertyCountForRecordID;
@property (nonatomic) bool runningUnitTests;
@property (nonatomic, retain) NSCountedSet *sourceTypeScalarKeys;
@property (nonatomic) int totalContacts;
@property (nonatomic) int totalContactsWithAnniversaries;
@property (nonatomic) int totalContactsWithBirthdays;
@property (nonatomic) int totalContactsWithPhotos;
@property (nonatomic) int totalContactsWithYearOnBirthday;
@property (nonatomic) int totalGroups;

+ (bool)isEnabled;
+ (void)logContactCreation:(long long)arg1;
+ (void)logContactUpdate:(long long)arg1;
+ (void)logPropertyAdded:(int)arg1 forContact:(void*)arg2;

- (id)_sourceTypeAsString:(int)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void*)arg1;
- (bool)isLocalSourceOnly;
- (bool)isLocalSourceRemaining;
- (bool)isMeCardHomeAddressSet;
- (bool)isMeCardSet;
- (bool)isMeCardWorkAddressSet;
- (void)logAllData;
- (void)logMeCard;
- (void)logPropertyCountPerContact;
- (void)logSources;
- (void)logTotalContacts;
- (void)logTotalContactsWithAnniversary;
- (void)logTotalContactsWithBirthday;
- (void)logTotalContactsWithManualLinks;
- (void)logTotalContactsWithPhotos;
- (void)logTotalContactsWithYearOnBirthday;
- (void)logTotalGroups;
- (id)propertyCountForRecordID;
- (bool)runningUnitTests;
- (void)setIsLocalSourceOnly:(bool)arg1;
- (void)setIsLocalSourceRemaining:(bool)arg1;
- (void)setIsMeCardHomeAddressSet:(bool)arg1;
- (void)setIsMeCardSet:(bool)arg1;
- (void)setIsMeCardWorkAddressSet:(bool)arg1;
- (void)setPropertyCountForRecordID:(id)arg1;
- (void)setRunningUnitTests:(bool)arg1;
- (void)setSourceTypeScalarKeys:(id)arg1;
- (void)setTotalContacts:(int)arg1;
- (void)setTotalContactsWithAnniversaries:(int)arg1;
- (void)setTotalContactsWithBirthdays:(int)arg1;
- (void)setTotalContactsWithPhotos:(int)arg1;
- (void)setTotalContactsWithYearOnBirthday:(int)arg1;
- (void)setTotalGroups:(int)arg1;
- (id)sourceTypeScalarKeys;
- (int)totalContacts;
- (int)totalContactsWithAnniversaries;
- (int)totalContactsWithBirthdays;
- (int)totalContactsWithPhotos;
- (int)totalContactsWithYearOnBirthday;
- (int)totalGroups;

@end
