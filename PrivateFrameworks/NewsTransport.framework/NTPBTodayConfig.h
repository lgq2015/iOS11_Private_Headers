/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayConfig : PBCodable <NSCopying> {
    unsigned long long  _backgroundForYouMinimumUpdateInterval;
    unsigned long long  _backgroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long  _foregroundForYouMinimumUpdateInterval;
    unsigned long long  _foregroundTrendingByParsecMinimumUpdateInterval;
    struct { 
        unsigned int backgroundForYouMinimumUpdateInterval : 1; 
        unsigned int backgroundTrendingByParsecMinimumUpdateInterval : 1; 
        unsigned int foregroundForYouMinimumUpdateInterval : 1; 
        unsigned int foregroundTrendingByParsecMinimumUpdateInterval : 1; 
        unsigned int widgetSlotsLimit : 1; 
    }  _has;
    NSMutableArray * _todayQueueConfigs;
    unsigned long long  _widgetSlotsLimit;
}

@property (nonatomic) unsigned long long backgroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long backgroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) bool hasBackgroundForYouMinimumUpdateInterval;
@property (nonatomic) bool hasBackgroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) bool hasForegroundForYouMinimumUpdateInterval;
@property (nonatomic) bool hasForegroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) bool hasWidgetSlotsLimit;
@property (nonatomic, retain) NSMutableArray *todayQueueConfigs;
@property (nonatomic) unsigned long long widgetSlotsLimit;

+ (Class)todayQueueConfigsType;

- (void)addTodayQueueConfigs:(id)arg1;
- (unsigned long long)backgroundForYouMinimumUpdateInterval;
- (unsigned long long)backgroundTrendingByParsecMinimumUpdateInterval;
- (void)clearTodayQueueConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)foregroundForYouMinimumUpdateInterval;
- (unsigned long long)foregroundTrendingByParsecMinimumUpdateInterval;
- (bool)hasBackgroundForYouMinimumUpdateInterval;
- (bool)hasBackgroundTrendingByParsecMinimumUpdateInterval;
- (bool)hasForegroundForYouMinimumUpdateInterval;
- (bool)hasForegroundTrendingByParsecMinimumUpdateInterval;
- (bool)hasWidgetSlotsLimit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundForYouMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setBackgroundTrendingByParsecMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setForegroundForYouMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setForegroundTrendingByParsecMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setHasBackgroundForYouMinimumUpdateInterval:(bool)arg1;
- (void)setHasBackgroundTrendingByParsecMinimumUpdateInterval:(bool)arg1;
- (void)setHasForegroundForYouMinimumUpdateInterval:(bool)arg1;
- (void)setHasForegroundTrendingByParsecMinimumUpdateInterval:(bool)arg1;
- (void)setHasWidgetSlotsLimit:(bool)arg1;
- (void)setTodayQueueConfigs:(id)arg1;
- (void)setWidgetSlotsLimit:(unsigned long long)arg1;
- (id)todayQueueConfigs;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayQueueConfigsCount;
- (unsigned long long)widgetSlotsLimit;
- (void)writeTo:(id)arg1;

@end
