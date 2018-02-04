/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncError : PBCodable <NSCopying> {
    int  _errorCode;
    NSString * _errorDescription;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDescription;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
