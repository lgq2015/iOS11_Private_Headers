/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {
    _MRGameControllerAccelerationProtobuf * _attitude;
    _MRGameControllerAccelerationProtobuf * _gravity;
    _MRGameControllerAccelerationProtobuf * _rotation;
    _MRGameControllerAccelerationProtobuf * _userAcceleration;
}

@property (nonatomic, retain) _MRGameControllerAccelerationProtobuf *attitude;
@property (nonatomic, retain) _MRGameControllerAccelerationProtobuf *gravity;
@property (nonatomic, readonly) bool hasAttitude;
@property (nonatomic, readonly) bool hasGravity;
@property (nonatomic, readonly) bool hasRotation;
@property (nonatomic, readonly) bool hasUserAcceleration;
@property (nonatomic, retain) _MRGameControllerAccelerationProtobuf *rotation;
@property (nonatomic, retain) _MRGameControllerAccelerationProtobuf *userAcceleration;

- (id)attitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gravity;
- (bool)hasAttitude;
- (bool)hasGravity;
- (bool)hasRotation;
- (bool)hasUserAcceleration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rotation;
- (void)setAttitude:(id)arg1;
- (void)setGravity:(id)arg1;
- (void)setRotation:(id)arg1;
- (void)setUserAcceleration:(id)arg1;
- (id)userAcceleration;
- (void)writeTo:(id)arg1;

@end
