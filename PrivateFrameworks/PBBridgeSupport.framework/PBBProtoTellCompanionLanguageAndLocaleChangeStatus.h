/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoTellCompanionLanguageAndLocaleChangeStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    double  _status;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic) double status;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(double)arg1;
- (double)status;
- (void)writeTo:(id)arg1;

@end
