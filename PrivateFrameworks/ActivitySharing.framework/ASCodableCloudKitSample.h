/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableCloudKitSample : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    double  _startDate;
    NSData * _uuid;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setStartDate:(double)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
