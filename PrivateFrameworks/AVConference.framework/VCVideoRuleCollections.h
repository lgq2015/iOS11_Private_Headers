/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollections : NSObject {
    NSMutableDictionary * _rules;
    NSMutableArray * _supportedPayloads;
}

@property (readonly) NSDictionary *rules;
@property (readonly) NSArray *supportedPayloads;

- (void)addSupportedPayload:(int)arg1;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)init;
- (bool)isPayloadSupported:(int)arg1;
- (void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4;
- (id)rules;
- (id)supportedPayloads;
- (id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)supportedVideoSizesForKey:(id)arg1;

@end
