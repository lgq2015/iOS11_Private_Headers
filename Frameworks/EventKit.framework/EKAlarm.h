/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarm : EKObject <NSCopying> {
    NSString * _emailAddress;
    NSString * _soundName;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic, readonly) EKCalendarItem *calendarItemOwner;
@property (nonatomic, readonly) EKCalendar *calendarOwner;
@property (getter=isDefaultAlarm, nonatomic) bool defaultAlarm;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) bool isAbsolute;
@property (nonatomic) bool isSnoozed;
@property (nonatomic, retain) EKAlarm *originalAlarm;
@property (nonatomic, readonly) EKObject *owner;
@property (nonatomic) long long proximity;
@property (nonatomic) double relativeOffset;
@property (nonatomic, copy) NSArray *snoozedAlarms;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) EKStructuredLocation *structuredLocation;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSURL *url;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (int)_currentAuthorizationStatus;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarmWithAlarm:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (bool)areLocationsAllowed;
+ (bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (bool)areLocationsAvailable;
+ (bool)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (long long)maxPublicProximity;
+ (id)noneTriggerDate;

- (void).cxx_destruct;
- (id)UUID;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (void)addSnoozedAlarm:(id)arg1;
- (long long)alarmType;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)externalID;
- (id)init;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (bool)isAbsolute;
- (bool)isDefaultAlarm;
- (bool)isSnoozed;
- (bool)isTimeToLeaveAlarm;
- (bool)isTopographicallyEqualToAlarm:(id)arg1;
- (bool)isVehicleAlarm;
- (id)originalAlarm;
- (id)owner;
- (id)ownerUUID;
- (long long)proximity;
- (double)relativeOffset;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setAlarmType:(long long)arg1;
- (void)setDefaultAlarm:(bool)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setIsSnoozed:(bool)arg1;
- (void)setIsTimeToLeaveAlarm:(bool)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTriggerIsNotRelativeToTravelTime:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)setUrl:(id)arg1;
- (bool)shouldIncludeInNormalAlarms;
- (id)snoozedAlarms;
- (id)soundName;
- (id)structuredLocation;
- (bool)triggerIsNotRelativeToTravelTime;
- (long long)type;
- (id)url;
- (bool)validateWithOwner:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)_localizedDescription:(bool)arg1 isAllDay:(bool)arg2;
- (id)localizedAllDayDescription;
- (id)localizedDescription;
- (id)longLocalizedAllDayDescription;
- (id)longLocalizedDescription;

@end
