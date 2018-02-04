/* made by EzioChiu.
 */

@protocol CNVCardPerson <CNVCardNameDataSource, NSObject>

@required

- (NSDictionary *)activityAlerts;
- (NSDateComponents *)alternateBirthdayComponents;
- (NSDateComponents *)birthdayComponents;
- (NSArray *)calendarURIs;
- (NSString *)cardDAVUID;
- (NSString *)department;
- (NSArray *)emailAddresses;
- (NSString *)firstName;
- (NSDictionary *)imageCropRects;
- (NSData *)imageData;
- (NSArray *)imageReferences;
- (NSArray *)instantMessagingAddresses;
- (bool)isCompany;
- (bool)isMe;
- (NSString *)jobTitle;
- (NSDictionary *)largeImageCropRects;
- (NSData *)largeImageData;
- (NSData *)largeImageHashOfType:(NSString *)arg1;
- (NSString *)lastName;
- (NSString *)maidenName;
- (NSString *)middleName;
- (int)nameOrder;
- (NSArray *)namesOfParentGroups;
- (NSString *)nickname;
- (NSString *)note;
- (NSString *)organization;
- (NSArray *)otherDateComponents;
- (NSArray *)phoneNumbers;
- (NSString *)phonemeData;
- (NSString *)phoneticFirstName;
- (NSString *)phoneticLastName;
- (NSString *)phoneticMiddleName;
- (NSString *)phoneticOrganization;
- (NSArray *)postalAddresses;
- (NSString *)preferredApplePersonaIdentifier;
- (NSString *)preferredLikenessSource;
- (NSString *)pronunciationFirstName;
- (NSString *)pronunciationLastName;
- (NSArray *)relatedNames;
- (NSArray *)socialProfiles;
- (NSString *)suffix;
- (NSString *)title;
- (NSString *)uid;
- (NSArray *)unknownProperties;
- (NSArray *)urls;

@end
