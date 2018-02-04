/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRelayIO : NSObject <NSCopying> {
    bool  _isRunning;
    struct opaqueVCAudioBufferList { } * _micBuffer;
    int (* _micCallback;
    void * _micCallbackContext;
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
    }  _micFormat;
    float  _micPowerRMS;
    unsigned int  _micTimestamp;
    struct PacketThread_s { } * _packetThread;
    struct opaqueVCAudioBufferList { } * _speakerBuffer;
    int (* _speakerCallback;
    void * _speakerCallbackContext;
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
    }  _speakerFormat;
    float  _speakerPowerRMS;
    unsigned int  _speakerTimestamp;
    id /* block */  _startCompletionHandler;
    bool  _usePacketThread;
}

@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) struct opaqueVCAudioBufferList { }*micBuffer;
@property int (*micCallback;
@property void*micCallbackContext;
@property struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } micFormat;
@property float micPowerRMS;
@property unsigned int micTimestamp;
@property (readonly) struct PacketThread_s { }*packetThread;
@property (nonatomic, readonly) struct opaqueVCAudioBufferList { }*speakerBuffer;
@property int (*speakerCallback;
@property void*speakerCallbackContext;
@property struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } speakerFormat;
@property float speakerPowerRMS;
@property unsigned int speakerTimestamp;
@property (copy) id /* block */ startCompletionHandler;
@property bool usePacketThread;

- (void)closeRecordings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createAudioBuffersWithIOBufferDuration:(double)arg1;
- (bool)createPacketThreadWithIOBufferDuration:(double)arg1 name:(id)arg2 error:(id*)arg3;
- (void)createRecordingsWithName:(id)arg1;
- (void)dealloc;
- (void)destroyPacketThread;
- (bool)isEqualToRelayIO:(id)arg1;
- (bool)isInitialized;
- (bool)isRunning;
- (struct opaqueVCAudioBufferList { }*)micBuffer;
- (int (*)micCallback;
- (void*)micCallbackContext;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })micFormat;
- (float)micPowerRMS;
- (unsigned int)micTimestamp;
- (struct PacketThread_s { }*)packetThread;
- (void)printStreamFormats;
- (void)setMicCallback:(int (*)arg1;
- (void)setMicCallbackContext:(void*)arg1;
- (void)setMicFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setMicPowerRMS:(float)arg1;
- (void)setMicTimestamp:(unsigned int)arg1;
- (void)setSpeakerCallback:(int (*)arg1;
- (void)setSpeakerCallbackContext:(void*)arg1;
- (void)setSpeakerFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setSpeakerPowerRMS:(float)arg1;
- (void)setSpeakerTimestamp:(unsigned int)arg1;
- (void)setStartCompletionHandler:(id /* block */)arg1;
- (void)setUsePacketThread:(bool)arg1;
- (struct opaqueVCAudioBufferList { }*)speakerBuffer;
- (int (*)speakerCallback;
- (void*)speakerCallbackContext;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })speakerFormat;
- (float)speakerPowerRMS;
- (unsigned int)speakerTimestamp;
- (id /* block */)startCompletionHandler;
- (bool)usePacketThread;

@end
