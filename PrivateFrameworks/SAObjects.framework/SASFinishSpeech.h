/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *endpoint;
@property (nonatomic, copy) NSArray *featuresAtEndpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *orderedContext;
@property (nonatomic) long long packetCount;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSDictionary *serverFeatureLatencyDistribution;
@property (readonly) Class superclass;
@property (nonatomic) double totalAudioRecorded;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)finishSpeech;
+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endpoint;
- (id)featuresAtEndpoint;
- (id)groupIdentifier;
- (id)orderedContext;
- (long long)packetCount;
- (bool)requiresResponse;
- (id)serverFeatureLatencyDistribution;
- (void)setEndpoint:(id)arg1;
- (void)setFeaturesAtEndpoint:(id)arg1;
- (void)setOrderedContext:(id)arg1;
- (void)setPacketCount:(long long)arg1;
- (void)setServerFeatureLatencyDistribution:(id)arg1;
- (void)setTotalAudioRecorded:(double)arg1;
- (double)totalAudioRecorded;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isRestartable;
- (bool)siriCore_supportedByLocalSession;

@end
