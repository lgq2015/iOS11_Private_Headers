/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedImage : 1; 
        unsigned int sentImage : 1; 
    }  _has;
    unsigned int  _receivedImage;
    unsigned int  _sentImage;
}

@property (nonatomic) bool hasReceivedImage;
@property (nonatomic) bool hasSentImage;
@property (nonatomic) unsigned int receivedImage;
@property (nonatomic) unsigned int sentImage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedImage;
- (bool)hasSentImage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)receivedImage;
- (unsigned int)sentImage;
- (void)setHasReceivedImage:(bool)arg1;
- (void)setHasSentImage:(bool)arg1;
- (void)setReceivedImage:(unsigned int)arg1;
- (void)setSentImage:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
