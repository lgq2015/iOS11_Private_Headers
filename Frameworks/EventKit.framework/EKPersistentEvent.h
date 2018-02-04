/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent : EKPersistentCalendarItem

+ (id)defaultPropertiesToLoad;
+ (id)eventWithRandomUUID;
+ (id)relations;

- (id)actions;
- (long long)availability;
- (id)birthdayID;
- (bool)canForward;
- (id)conferenceURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disallowProposeNewTime;
- (id)endDate;
- (int)entityType;
- (int)externalTrackingStatus;
- (bool)firedTTL;
- (unsigned int)invitationChangedProperties;
- (unsigned long long)invitationStatus;
- (unsigned long long)junkStatus;
- (long long)locationPredictionState;
- (bool)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (long long)privacyLevel;
- (id)proposedStartDate;
- (id)responseComment;
- (void)setAvailability:(long long)arg1;
- (void)setBirthdayID:(id)arg1;
- (void)setCanForward:(bool)arg1;
- (void)setConferenceURL:(id)arg1;
- (void)setDisallowProposeNewTime:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExternalTrackingStatus:(int)arg1;
- (void)setFiredTTL:(bool)arg1;
- (void)setInvitationChangedProperties:(unsigned int)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setJunkStatus:(unsigned long long)arg1;
- (void)setLocationPredictionState:(long long)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(bool)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSuggestedEventInfo:(id)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (void)setTravelTime:(id)arg1;
- (long long)status;
- (id)suggestedEventInfo;
- (id)suggestionInfo;
- (long long)travelAdvisoryBehavior;
- (id)travelTime;

@end
