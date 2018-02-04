/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADTargetingDataResponse : PBCodable <NSCopying> {
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
    }  _has;
    NSString * _userTargeting;
}

@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasUserTargeting;
@property (nonatomic, retain) NSString *userTargeting;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasUserTargeting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setUserTargeting:(id)arg1;
- (id)userTargeting;
- (void)writeTo:(id)arg1;

@end