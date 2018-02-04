/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoContentRequest : PBRequest <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int highPriority : 1; 
    }  _has;
    bool  _highPriority;
    NSString * _messageId;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic) bool hasHighPriority;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic) bool highPriority;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (bool)hasHighPriority;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)highPriority;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasHighPriority:(bool)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
