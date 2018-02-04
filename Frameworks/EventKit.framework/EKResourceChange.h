/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (nonatomic, readonly) bool alerted;
@property (nonatomic, readonly, retain) EKCalendar *calendar;
@property (nonatomic, readonly, retain) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) unsigned int changeType;
@property (nonatomic, readonly, copy) NSURL *changedByAddress;
@property (nonatomic, readonly, copy) NSString *changedByDisplayName;
@property (nonatomic, readonly, copy) NSString *changedByFirstName;
@property (nonatomic, readonly, copy) NSString *changedByLastName;
@property (nonatomic, readonly) NSNumber *createCount;
@property (nonatomic, readonly) bool dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *deleteCount;
@property (nonatomic, readonly) NSString *deletedTitle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool locationChanged;
@property (nonatomic, readonly) unsigned int publicStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeChanged;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) bool titleChanged;
@property (nonatomic, readonly) NSNumber *updateCount;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;

- (id)URL;
- (bool)_propertyWithFlagDidChange:(unsigned int)arg1;
- (bool)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (void)clearAlertedStatus;
- (id)createCount;
- (bool)dateChanged;
- (id)deleteCount;
- (id)deletedTitle;
- (id)emailAddress;
- (id)firstName;
- (id)lastName;
- (bool)locationChanged;
- (id)name;
- (id)phoneNumber;
- (unsigned int)publicStatus;
- (bool)timeChanged;
- (id)timestamp;
- (bool)titleChanged;
- (id)updateCount;

@end
