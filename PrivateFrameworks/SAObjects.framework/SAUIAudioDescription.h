/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAudioDescription : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *bitsPerChannel;
@property (nonatomic, copy) NSNumber *bytesPerFrame;
@property (nonatomic, copy) NSNumber *bytesPerPacket;
@property (nonatomic, copy) NSNumber *channelsPerFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (nonatomic, copy) NSNumber *formatFlags;
@property (nonatomic, copy) NSNumber *formatID;
@property (nonatomic, copy) NSNumber *framesPerPacket;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *reserved;
@property (nonatomic, copy) NSNumber *sampleRate;
@property (readonly) Class superclass;

+ (id)audioDescription;
+ (id)audioDescriptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)bitsPerChannel;
- (id)bytesPerFrame;
- (id)bytesPerPacket;
- (id)channelsPerFrame;
- (id)encodedClassName;
- (id)format;
- (id)formatFlags;
- (id)formatID;
- (id)framesPerPacket;
- (id)groupIdentifier;
- (id)reserved;
- (id)sampleRate;
- (void)setBitsPerChannel:(id)arg1;
- (void)setBytesPerFrame:(id)arg1;
- (void)setBytesPerPacket:(id)arg1;
- (void)setChannelsPerFrame:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormatFlags:(id)arg1;
- (void)setFormatID:(id)arg1;
- (void)setFramesPerPacket:(id)arg1;
- (void)setReserved:(id)arg1;
- (void)setSampleRate:(id)arg1;

@end
