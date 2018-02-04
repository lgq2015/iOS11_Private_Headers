/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    _MRGameControllerButtonsProtobuf * _buttons;
    unsigned long long  _controllerID;
    _MRGameControllerDigitizerProtobuf * _digitizer;
    struct { 
        unsigned int controllerID : 1; 
    }  _has;
    _MRGameControllerMotionProtobuf * _motion;
}

@property (nonatomic, retain) _MRGameControllerButtonsProtobuf *buttons;
@property (nonatomic) unsigned long long controllerID;
@property (nonatomic, retain) _MRGameControllerDigitizerProtobuf *digitizer;
@property (nonatomic, readonly) bool hasButtons;
@property (nonatomic) bool hasControllerID;
@property (nonatomic, readonly) bool hasDigitizer;
@property (nonatomic, readonly) bool hasMotion;
@property (nonatomic, retain) _MRGameControllerMotionProtobuf *motion;

- (id)buttons;
- (unsigned long long)controllerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digitizer;
- (bool)hasButtons;
- (bool)hasControllerID;
- (bool)hasDigitizer;
- (bool)hasMotion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)motion;
- (bool)readFrom:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setControllerID:(unsigned long long)arg1;
- (void)setDigitizer:(id)arg1;
- (void)setHasControllerID:(bool)arg1;
- (void)setMotion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
