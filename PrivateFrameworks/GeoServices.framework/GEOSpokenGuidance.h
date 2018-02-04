/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpokenGuidance : PBCodable <NSCopying> {
    int  _alignment;
    NSMutableArray * _announcements;
    unsigned int  _endDesiredTime;
    unsigned int  _exclusiveSetIdentifier;
    struct { 
        unsigned int alignment : 1; 
        unsigned int endDesiredTime : 1; 
        unsigned int exclusiveSetIdentifier : 1; 
        unsigned int numChainedVariants : 1; 
        unsigned int priority : 1; 
        unsigned int repetitionInterval : 1; 
        unsigned int startDesiredTime : 1; 
        unsigned int tapBeforeAnnouncement : 1; 
    }  _has;
    unsigned int  _numChainedVariants;
    unsigned int  _priority;
    unsigned int  _repetitionInterval;
    unsigned int  _startDesiredTime;
    bool  _tapBeforeAnnouncement;
    NSMutableArray * _timeGaps;
}

@property (nonatomic) int alignment;
@property (nonatomic, retain) NSMutableArray *announcements;
@property (nonatomic) unsigned int endDesiredTime;
@property (nonatomic) unsigned int exclusiveSetIdentifier;
@property (nonatomic) bool hasAlignment;
@property (nonatomic) bool hasEndDesiredTime;
@property (nonatomic) bool hasExclusiveSetIdentifier;
@property (nonatomic) bool hasNumChainedVariants;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasRepetitionInterval;
@property (nonatomic) bool hasStartDesiredTime;
@property (nonatomic) bool hasTapBeforeAnnouncement;
@property (nonatomic) unsigned int numChainedVariants;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int repetitionInterval;
@property (nonatomic) unsigned int startDesiredTime;
@property (nonatomic) bool tapBeforeAnnouncement;
@property (nonatomic, retain) NSMutableArray *timeGaps;

+ (Class)announcementType;
+ (Class)timeGapType;

- (void).cxx_destruct;
- (int)StringAsAlignment:(id)arg1;
- (void)addAnnouncement:(id)arg1;
- (void)addTimeGap:(id)arg1;
- (int)alignment;
- (id)alignmentAsString:(int)arg1;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (id)announcements;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (void)clearTimeGaps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endDesiredTime;
- (unsigned int)exclusiveSetIdentifier;
- (bool)hasAlignment;
- (bool)hasEndDesiredTime;
- (bool)hasExclusiveSetIdentifier;
- (bool)hasNumChainedVariants;
- (bool)hasPriority;
- (bool)hasRepetitionInterval;
- (bool)hasStartDesiredTime;
- (bool)hasTapBeforeAnnouncement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numChainedVariants;
- (unsigned int)priority;
- (bool)readFrom:(id)arg1;
- (unsigned int)repetitionInterval;
- (void)setAlignment:(int)arg1;
- (void)setAnnouncements:(id)arg1;
- (void)setEndDesiredTime:(unsigned int)arg1;
- (void)setExclusiveSetIdentifier:(unsigned int)arg1;
- (void)setHasAlignment:(bool)arg1;
- (void)setHasEndDesiredTime:(bool)arg1;
- (void)setHasExclusiveSetIdentifier:(bool)arg1;
- (void)setHasNumChainedVariants:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasRepetitionInterval:(bool)arg1;
- (void)setHasStartDesiredTime:(bool)arg1;
- (void)setHasTapBeforeAnnouncement:(bool)arg1;
- (void)setNumChainedVariants:(unsigned int)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setRepetitionInterval:(unsigned int)arg1;
- (void)setStartDesiredTime:(unsigned int)arg1;
- (void)setTapBeforeAnnouncement:(bool)arg1;
- (void)setTimeGaps:(id)arg1;
- (unsigned int)startDesiredTime;
- (bool)tapBeforeAnnouncement;
- (id)timeGapAtIndex:(unsigned long long)arg1;
- (id)timeGaps;
- (unsigned long long)timeGapsCount;
- (void)writeTo:(id)arg1;

@end
