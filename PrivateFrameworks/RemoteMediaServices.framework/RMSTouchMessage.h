/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSTouchMessage : PBCodable <NSCopying> {
    int  _direction;
    struct { 
        unsigned int direction : 1; 
        unsigned int repeatCount : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    unsigned int  _repeatCount;
    int  _sessionIdentifier;
}

@property (nonatomic) int direction;
@property (nonatomic) bool hasDirection;
@property (nonatomic) bool hasRepeatCount;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (bool)hasDirection;
- (bool)hasRepeatCount;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)repeatCount;
- (int)sessionIdentifier;
- (void)setDirection:(int)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasRepeatCount:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setRepeatCount:(unsigned int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
