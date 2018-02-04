/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioPayloadConfig : NSObject {
    unsigned int  _bitrate;
    unsigned int  _blockSize;
    unsigned int  _bundleHeaderBytes;
    unsigned int  _codecSampleRate;
    unsigned int  _codecSamplesPerFrame;
    unsigned int  _evsSIDPeriod;
    bool  _forcingBitrate;
    int  _format;
    unsigned int  _inputSampleRate;
    unsigned int  _inputSamplesPerFrame;
    unsigned int  _internalBundleFactor;
    bool  _isDTXEnabled;
    int  _payload;
    bool  _payloadOctetAligned;
    NSArray * _supportedBitrates;
    bool  _useSBR;
}

@property (nonatomic, readonly) unsigned int bitrate;
@property (nonatomic, readonly) unsigned int blockSize;
@property (nonatomic, readonly) unsigned int bundleHeaderBytes;
@property (nonatomic, readonly) unsigned int codecSampleRate;
@property (nonatomic, readonly) unsigned int evsSIDPeriod;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) bool forcingBitrate;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) unsigned int inputSampleRate;
@property (nonatomic, readonly) unsigned int internalBundleFactor;
@property (nonatomic, readonly) bool isDTXEnabled;
@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) bool payloadOctetAligned;
@property (nonatomic, readonly) unsigned int samplesPerFrame;
@property (nonatomic, readonly) NSArray *supportedBitrates;

- (unsigned int)aacBitrate;
- (unsigned int)bitrate;
- (unsigned int)blockSize;
- (unsigned int)bundleHeaderBytes;
- (id)className;
- (unsigned int)codecSampleRate;
- (bool)configure:(id)arg1;
- (void)createSupportedBitrates;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForEVS;
- (void)createSupportedBitratesForOpus;
- (void)dealloc;
- (id)description;
- (unsigned int)evsSIDPeriod;
- (unsigned int)flags;
- (bool)forcingBitrate;
- (int)format;
- (id)initWithConfigDict:(id)arg1;
- (unsigned int)inputSampleRate;
- (unsigned int)internalBundleFactor;
- (bool)isDTXEnabled;
- (int)payload;
- (bool)payloadOctetAligned;
- (float)qualityForBitRate:(unsigned int)arg1;
- (unsigned int)samplesPerFrame;
- (void)setUseSBR:(bool)arg1;
- (void)setupEncodeProperties:(id)arg1;
- (id)supportedBitrates;

@end
