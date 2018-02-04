/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {
    NSMutableArray * _announcements;
    NSString * _languageCode;
}

@property (nonatomic, retain) NSMutableArray *announcements;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, retain) NSString *languageCode;

+ (Class)announcementType;

- (void).cxx_destruct;
- (void)addAnnouncement:(id)arg1;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (id)announcements;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnouncements:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
