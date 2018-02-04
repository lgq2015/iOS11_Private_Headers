/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorResults : NSObject {
    NSMutableDictionary * _bandwidthSettings;
    NSString * _remoteBasebandCodec;
    unsigned int  _remoteBasebandCodecSampleRate;
    NSString * _remoteUserAgent;
    bool  _supportsDynamicMaxBitrate;
}

@property (nonatomic, retain) NSMutableDictionary *bandwidthSettings;
@property (nonatomic, retain) NSString *remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate;
@property (nonatomic, retain) NSString *remoteUserAgent;
@property (nonatomic) bool supportsDynamicMaxBitrate;

- (id)bandwidthSettings;
- (void)dealloc;
- (id)init;
- (id)remoteBasebandCodec;
- (unsigned int)remoteBasebandCodecSampleRate;
- (id)remoteUserAgent;
- (void)setBandwidthSettings:(id)arg1;
- (void)setRemoteBasebandCodec:(id)arg1;
- (void)setRemoteBasebandCodecSampleRate:(unsigned int)arg1;
- (void)setRemoteUserAgent:(id)arg1;
- (void)setSupportsDynamicMaxBitrate:(bool)arg1;
- (bool)supportsDynamicMaxBitrate;

@end
