/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneCapabilities : PBCodable <NSCopying> {
    bool  _atomicSaves;
    bool  _ckql;
    bool  _fetchChanges;
    struct { 
        unsigned int atomicSaves : 1; 
        unsigned int ckql : 1; 
        unsigned int fetchChanges : 1; 
        unsigned int sharing : 1; 
    }  _has;
    bool  _sharing;
}

@property (nonatomic) bool atomicSaves;
@property (nonatomic) bool ckql;
@property (nonatomic) bool fetchChanges;
@property (nonatomic) bool hasAtomicSaves;
@property (nonatomic) bool hasCkql;
@property (nonatomic) bool hasFetchChanges;
@property (nonatomic) bool hasSharing;
@property (nonatomic) bool sharing;

- (bool)atomicSaves;
- (bool)ckql;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fetchChanges;
- (bool)hasAtomicSaves;
- (bool)hasCkql;
- (bool)hasFetchChanges;
- (bool)hasSharing;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAtomicSaves:(bool)arg1;
- (void)setCkql:(bool)arg1;
- (void)setFetchChanges:(bool)arg1;
- (void)setHasAtomicSaves:(bool)arg1;
- (void)setHasCkql:(bool)arg1;
- (void)setHasFetchChanges:(bool)arg1;
- (void)setHasSharing:(bool)arg1;
- (void)setSharing:(bool)arg1;
- (bool)sharing;
- (void)writeTo:(id)arg1;

@end
