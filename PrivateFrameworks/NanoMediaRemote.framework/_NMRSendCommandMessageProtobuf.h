/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    int  _command;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int command : 1; 
    }  _has;
    _NMRCommandOptionsProtobuf * _options;
    double  _timestamp;
}

@property (nonatomic) int command;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) _NMRCommandOptionsProtobuf *options;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasOptions;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
