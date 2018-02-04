/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying> {
    bool  _displayTimezone;
    NSString * _formatPattern;
    struct { 
        unsigned int timestampVal : 1; 
        unsigned int displayTimezone : 1; 
    }  _has;
    unsigned int  _timestampVal;
    NSString * _timezone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayTimezone;
@property (nonatomic, readonly) NSString *formatPattern;
@property (nonatomic, retain) NSString *formatPattern;
@property (nonatomic) bool hasDisplayTimezone;
@property (nonatomic, readonly) bool hasFormatPattern;
@property (nonatomic) bool hasTimestampVal;
@property (nonatomic, readonly) bool hasTimezone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) unsigned int timestampVal;
@property (nonatomic, retain) NSString *timezone;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayTimeZone;
- (bool)displayTimezone;
- (id)formatPattern;
- (bool)hasDisplayTimezone;
- (bool)hasFormatPattern;
- (bool)hasTimestampVal;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayTimezone:(bool)arg1;
- (void)setFormatPattern:(id)arg1;
- (void)setHasDisplayTimezone:(bool)arg1;
- (void)setHasTimestampVal:(bool)arg1;
- (void)setTimestampVal:(unsigned int)arg1;
- (void)setTimezone:(id)arg1;
- (double)timeStamp;
- (id)timeZone;
- (unsigned int)timestampVal;
- (id)timezone;
- (void)writeTo:(id)arg1;

@end
