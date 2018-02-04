/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPerson : NSObject {
    CNContact * _cnContact;
    int  _recordID;
    bool  _registered;
}

@property (nonatomic, readonly) int _recordID;
@property (nonatomic, readonly) void*_recordRef;
@property (nonatomic, readonly) bool _registered;
@property (nonatomic, readonly) NSString *abbreviatedName;
@property (nonatomic, readonly) NSArray *allEmails;
@property (nonatomic, retain) CNContact *cnContact;
@property (nonatomic, readonly, copy) NSString *cnContactID;
@property (nonatomic, readonly) NSString *companyName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSArray *emails;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, readonly) NSData *imageDataWithoutLoading;
@property (nonatomic, readonly) bool isCompany;
@property (nonatomic, readonly) bool isInAddressBook;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly) NSArray *mobileNumbers;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, retain) NSArray *phoneNumbers;
@property (nonatomic, readonly) int recordID;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void*)arg2;
+ (void)_setCachedQueriesEnabled:(bool)arg1;
+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void*)arg4;
+ (id)allPeople;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(bool)arg3;
+ (id)existingABPersonForPerson:(id)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int*)arg7;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int*)arg6;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(bool)arg3;

- (void).cxx_destruct;
- (void)_abPersonChanged:(id)arg1;
- (int)_recordID;
- (void*)_recordRef;
- (bool)_registered;
- (id)abbreviatedName;
- (id)allEmails;
- (id)allHandlesForProperty:(id)arg1;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (id)cnContact;
- (id)cnContactID;
- (id)companyName;
- (bool)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)emailHandlesForService:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(bool)arg2;
- (id)emails;
- (id)firstName;
- (id)fullName;
- (id)groups;
- (unsigned long long)hash;
- (id)idsAddresses;
- (id)imageData;
- (id)imageDataWithoutLoading;
- (id)init;
- (id)initWithABRecordID:(int)arg1;
- (bool)isCompany;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIMPerson:(id)arg1;
- (bool)isInAddressBook;
- (id)lastName;
- (id)mobileNumbers;
- (id)name;
- (id)nickname;
- (id)phoneNumbers;
- (int)recordID;
- (void)save;
- (void)setCnContact:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setImageData:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)status;
- (id)uniqueID;
- (id)valuesForIMProperty:(id)arg1;
- (id)valuesForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)initWithContact:(id)arg1;

@end
