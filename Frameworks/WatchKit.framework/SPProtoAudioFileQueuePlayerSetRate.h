/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFileQueuePlayerSetRate : PBCodable <NSCopying> {
    NSString * _identifier;
    float  _rate;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) float rate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)rate;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRate:(float)arg1;
- (id)sockPuppetMessage;
- (void)writeTo:(id)arg1;

@end
