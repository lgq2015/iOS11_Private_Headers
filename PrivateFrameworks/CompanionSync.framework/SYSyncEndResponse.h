/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSyncEndResponse : PBCodable <NSCopying> {
    SYErrorInfo * _error;
    int  _errorResolution;
    struct { 
        unsigned int errorResolution : 1; 
    }  _has;
    SYMessageHeader * _header;
    NSString * _syncID;
}

@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic) int errorResolution;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasErrorResolution;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *syncID;

- (void).cxx_destruct;
- (int)StringAsErrorResolution:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (int)errorResolution;
- (id)errorResolutionAsString:(int)arg1;
- (bool)hasError;
- (bool)hasErrorResolution;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setErrorResolution:(int)arg1;
- (void)setHasErrorResolution:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
