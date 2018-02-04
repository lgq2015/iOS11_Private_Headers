/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetConnectionStateMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int state : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic) bool hasState;
@property (nonatomic) int state;

- (int)StringAsState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
