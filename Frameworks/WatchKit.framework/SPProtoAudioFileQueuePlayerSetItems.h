/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying> {
    NSString * _identifier;
    NSMutableArray * _playerItemIdentifiers;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *playerItemIdentifiers;

+ (Class)playerItemIdentifiersType;

- (void).cxx_destruct;
- (void)addPlayerItemIdentifiers:(id)arg1;
- (void)clearPlayerItemIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerItemIdentifiers;
- (id)playerItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerItemIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlayerItemIdentifiers:(id)arg1;
- (id)sockPuppetMessage;
- (void)writeTo:(id)arg1;

@end
