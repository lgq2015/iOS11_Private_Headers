/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationEvent : PBCodable <NSCopying> {
    double  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
    }  _has;
    double  _startTime;
    NSString * _subTitle;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double endTime;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasSubTitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *subTitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasEndTime;
- (bool)hasStartTime;
- (bool)hasSubTitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)startTime;
- (id)subTitle;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
