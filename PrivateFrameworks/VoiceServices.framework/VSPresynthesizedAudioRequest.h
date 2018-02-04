/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding> {
    NSData * _audioData;
    unsigned int  _audioSessionID;
    NSString * _clientBundleIdentifier;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _decoderStreamDescription;
    bool  _enqueue;
    unsigned long long  _pcmDataSize;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _playerStreamDescription;
    unsigned long long  _requestCreatedTimestamp;
    id /* block */  _stopHandler;
}

@property (nonatomic, readonly, copy) NSData *audioData;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } decoderStreamDescription;
@property (nonatomic) bool enqueue;
@property (nonatomic) unsigned long long pcmDataSize;
@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } playerStreamDescription;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (nonatomic, copy) id /* block */ stopHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioData;
- (unsigned int)audioSessionID;
- (id)clientBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })decoderStreamDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enqueue;
- (id)init;
- (id)initWithAudioData:(id)arg1 decoderStreamDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 playerStreamDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;
- (id)initWithAudioData:(id)arg1 playerStreamDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (unsigned long long)pcmDataSize;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })playerStreamDescription;
- (unsigned long long)requestCreatedTimestamp;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setEnqueue:(bool)arg1;
- (void)setPcmDataSize:(unsigned long long)arg1;
- (void)setRequestCreatedTimestamp:(unsigned long long)arg1;
- (void)setStopHandler:(id /* block */)arg1;
- (id /* block */)stopHandler;

@end
