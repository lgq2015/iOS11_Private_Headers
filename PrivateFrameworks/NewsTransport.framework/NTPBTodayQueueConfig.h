/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int widgetVisibleSectionsLimit : 1; 
    }  _has;
    NSMutableArray * _todaySectionConfigs;
    unsigned long long  _widgetVisibleSectionsLimit;
}

@property (nonatomic) bool hasWidgetVisibleSectionsLimit;
@property (nonatomic, retain) NSMutableArray *todaySectionConfigs;
@property (nonatomic) unsigned long long widgetVisibleSectionsLimit;

+ (Class)todaySectionConfigsType;

- (void)addTodaySectionConfigs:(id)arg1;
- (void)clearTodaySectionConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetVisibleSectionsLimit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWidgetVisibleSectionsLimit:(bool)arg1;
- (void)setTodaySectionConfigs:(id)arg1;
- (void)setWidgetVisibleSectionsLimit:(unsigned long long)arg1;
- (id)todaySectionConfigs;
- (id)todaySectionConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todaySectionConfigsCount;
- (unsigned long long)widgetVisibleSectionsLimit;
- (void)writeTo:(id)arg1;

@end
