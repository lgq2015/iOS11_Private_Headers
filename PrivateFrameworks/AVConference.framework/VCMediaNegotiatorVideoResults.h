/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorVideoResults : NSObject {
    NSMutableDictionary * _featureStrings;
    bool  _isRTCPFBEnabled;
    bool  _isSupported;
    NSMutableDictionary * _parameterSets;
    unsigned int  _remoteSSRC;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic, retain) NSDictionary *featureStrings;
@property (nonatomic) bool isRTCPFBEnabled;
@property (nonatomic) bool isSupported;
@property (nonatomic, retain) NSDictionary *parameterSets;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, readonly) VCVideoRuleCollections *videoRuleCollections;

- (void)addFeatureString:(id)arg1 key:(id)arg2;
- (void)addParameterSet:(id)arg1 key:(id)arg2;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)featureStrings;
- (id)init;
- (bool)isRTCPFBEnabled;
- (bool)isSupported;
- (id)parameterSets;
- (unsigned int)remoteSSRC;
- (void)setFeatureStrings:(id)arg1;
- (void)setIsRTCPFBEnabled:(bool)arg1;
- (void)setIsSupported:(bool)arg1;
- (void)setParameterSets:(id)arg1;
- (void)setRemoteSSRC:(unsigned int)arg1;
- (id)videoRuleCollections;

@end
