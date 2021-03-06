/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPResponseOperationResult : PBCodable <NSCopying> {
    int  _code;
    FCCKPResponseOperationResultError * _error;
    struct { 
        unsigned int code : 1; 
    }  _has;
}

@property (nonatomic) int code;
@property (nonatomic, retain) FCCKPResponseOperationResultError *error;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasError;

- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCode;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
