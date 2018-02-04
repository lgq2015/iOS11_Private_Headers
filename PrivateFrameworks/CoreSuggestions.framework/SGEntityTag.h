/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEntityTag : NSObject <NSCopying> {
    bool  _indexed;
    NSString * _name;
    bool  _stored;
    bool  _tracked;
}

@property (nonatomic, readonly) bool indexed;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool stored;
@property (nonatomic, readonly) bool tracked;

+ (id)allDay;
+ (id)allTags;
+ (id)calendarAppUsageLevel:(float)arg1;
+ (id)categoryTagWithCategoryType:(unsigned long long)arg1;
+ (id)confidenceScore:(float)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)defaultDuration;
+ (id)domain:(id)arg1;
+ (id)eventHash:(id)arg1;
+ (id)extraKey:(id)arg1;
+ (id)extractedBus;
+ (id)extractedCarRental;
+ (id)extractedEvent;
+ (id)extractedEventCancellation;
+ (id)extractedFlight;
+ (id)extractedFood;
+ (id)extractedFromTemplateWithName:(id)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)extractedHotel;
+ (id)extractedMovie;
+ (id)extractedSocial;
+ (id)extractedTicket;
+ (id)extractedTrain;
+ (id)fromCalendarAttachment;
+ (id)fromExtractedDomain;
+ (id)fromForwardedMessage;
+ (id)fromInteraction;
+ (id)fromReply;
+ (id)fromSync;
+ (id)fromTextMessage;
+ (id)fullyDissected;
+ (id)hardName;
+ (id)human;
+ (id)identity:(id)arg1;
+ (id)inhuman;
+ (void)initialize;
+ (id)interactionBundleId:(id)arg1;
+ (id)interactionContactIdentifier:(id)arg1;
+ (id)interactionGroupId:(id)arg1;
+ (id)interactionId:(id)arg1;
+ (id)isPartiallyDownloaded;
+ (id)isSent;
+ (id)mailAppUsageLevel:(unsigned char)arg1;
+ (id)mailingListId:(id)arg1;
+ (id)messageWithEmailKey:(id)arg1;
+ (id)messageWithMailMessageKey:(id)arg1;
+ (id)messageWithMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)messagesAppUsageLevel:(unsigned char)arg1;
+ (id)naturalLanguageEvent;
+ (id)naturalLanguageEventAttributes:(unsigned long long)arg1;
+ (id)naturalLanguageEventLanguageID:(id)arg1;
+ (id)naturalLanguageEventTypeIdentifier:(id)arg1;
+ (id)participantCount:(unsigned char)arg1;
+ (id)remember:(id)arg1;
+ (void)rememberPrefix:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3 tracked:(bool)arg4;
+ (id)resolveName:(id)arg1;
+ (id)schemaOrg:(id)arg1;
+ (id)significantSender;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)templateException;
+ (id)testTag:(int)arg1;
+ (id)titleGeneratedFromSubject;
+ (id)titleGeneratedFromTemplate;
+ (void)tombstonePrefix:(id)arg1;
+ (id)url:(id)arg1;
+ (id)usedBubblesCount:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)indexed;
- (id)initWithName:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3 tracked:(bool)arg4;
- (bool)isCalendarAppUsageLevel;
- (bool)isConfidenceScore;
- (bool)isContactDetail;
- (bool)isDomain;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityTag:(id)arg1;
- (bool)isEventHash;
- (bool)isExtraKey;
- (bool)isExtractedEventCategory;
- (bool)isInteractionContactIdentifier;
- (bool)isMailAppUsageLevel;
- (bool)isMailingListId;
- (bool)isMessagesAppUsageLevel;
- (bool)isNaturalLanguageEventAttributes;
- (bool)isNaturalLanguageEventLanguageID;
- (bool)isNaturalLanguageEventTypeIdentifier;
- (bool)isParticipantCount;
- (bool)isSchemaOrg;
- (bool)isTemplateName;
- (bool)isTemplateShortName;
- (bool)isUrl;
- (bool)isUsedBubblesCount;
- (id)name;
- (bool)stored;
- (bool)tracked;
- (id)value;

@end
