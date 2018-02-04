/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying> {
    struct { 
        unsigned int searchTermLength : 1; 
        unsigned int topHitsPresent : 1; 
        unsigned int userSelectedTopHit : 1; 
    }  _has;
    long long  _searchTermLength;
    bool  _topHitsPresent;
    bool  _userSelectedTopHit;
}

@property (nonatomic) bool hasSearchTermLength;
@property (nonatomic) bool hasTopHitsPresent;
@property (nonatomic) bool hasUserSelectedTopHit;
@property (nonatomic) long long searchTermLength;
@property (nonatomic) bool topHitsPresent;
@property (nonatomic) bool userSelectedTopHit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchTermLength;
- (bool)hasTopHitsPresent;
- (bool)hasUserSelectedTopHit;
- (unsigned long long)hash;
- (id)initWithSearchTermLength:(unsigned long long)arg1 topHitsPresent:(bool)arg2 userSelectedTopHit:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)searchTermLength;
- (void)setHasSearchTermLength:(bool)arg1;
- (void)setHasTopHitsPresent:(bool)arg1;
- (void)setHasUserSelectedTopHit:(bool)arg1;
- (void)setSearchTermLength:(long long)arg1;
- (void)setTopHitsPresent:(bool)arg1;
- (void)setUserSelectedTopHit:(bool)arg1;
- (bool)topHitsPresent;
- (bool)userSelectedTopHit;
- (void)writeTo:(id)arg1;

@end
