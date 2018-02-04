/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLyricsTokenProtobuf : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _userData;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasUserData;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *userData;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasUserData;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)writeTo:(id)arg1;

@end
