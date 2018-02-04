/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {
    MSPMediaSyncError * _error;
    struct { 
        unsigned int type : 1; 
        unsigned int lastPackage : 1; 
    }  _has;
    MSPMediaSyncHeader * _header;
    bool  _lastPackage;
    MSPMediaSyncOperation * _syncOperation;
    int  _type;
}

@property (nonatomic, retain) MSPMediaSyncError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic) bool hasLastPackage;
@property (nonatomic, readonly) bool hasSyncOperation;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) MSPMediaSyncHeader *header;
@property (nonatomic) bool lastPackage;
@property (nonatomic, retain) MSPMediaSyncOperation *syncOperation;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasHeader;
- (bool)hasLastPackage;
- (bool)hasSyncOperation;
- (bool)hasType;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (bool)lastPackage;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasLastPackage:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setLastPackage:(bool)arg1;
- (void)setSyncOperation:(id)arg1;
- (void)setType:(int)arg1;
- (id)syncOperation;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
