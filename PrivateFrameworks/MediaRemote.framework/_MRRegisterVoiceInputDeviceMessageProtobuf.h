/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
}

@property (nonatomic, retain) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) bool hasDescriptor;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)dictionaryRepresentation;
- (bool)hasDescriptor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)writeTo:(id)arg1;

@end
