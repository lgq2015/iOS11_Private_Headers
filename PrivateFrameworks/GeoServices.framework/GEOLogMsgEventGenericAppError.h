/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {
    long long  _appErrorCode;
    NSString * _appErrorDomain;
    struct { 
        unsigned int appErrorCode : 1; 
    }  _has;
}

@property (nonatomic) long long appErrorCode;
@property (nonatomic, retain) NSString *appErrorDomain;
@property (nonatomic) bool hasAppErrorCode;
@property (nonatomic, readonly) bool hasAppErrorDomain;

- (void).cxx_destruct;
- (long long)appErrorCode;
- (id)appErrorDomain;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppErrorCode;
- (bool)hasAppErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppErrorCode:(long long)arg1;
- (void)setAppErrorDomain:(id)arg1;
- (void)setHasAppErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
