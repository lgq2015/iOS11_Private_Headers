/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoNewLibraryHashRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
        unsigned int syncID : 1; 
    }  _has;
    unsigned int  _lastKnownResyncID;
    NPKProtoHash * _libraryHash;
    unsigned int  _resyncID;
    unsigned int  _syncID;
}

@property (nonatomic) bool hasLastKnownResyncID;
@property (nonatomic) bool hasResyncID;
@property (nonatomic) bool hasSyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic, retain) NPKProtoHash *libraryHash;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic) unsigned int syncID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastKnownResyncID;
- (bool)hasResyncID;
- (bool)hasSyncID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (id)libraryHash;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setHasLastKnownResyncID:(bool)arg1;
- (void)setHasResyncID:(bool)arg1;
- (void)setHasSyncID:(bool)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)setSyncID:(unsigned int)arg1;
- (unsigned int)syncID;
- (void)writeTo:(id)arg1;

@end
