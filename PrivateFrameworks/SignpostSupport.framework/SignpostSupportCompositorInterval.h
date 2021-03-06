/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportCompositorInterval : NSObject <SignpostSerializable> {
    NSArray * _contributingPids;
    unsigned long long  _durationMachContinuousTime;
    unsigned long long  _endMachContinuousTime;
    unsigned long long  _startMachContinuousTime;
}

@property (nonatomic, retain) NSArray *contributingPids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long durationMachContinuousTime;
@property (nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long startMachContinuousTime;
@property (readonly) Class superclass;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)contributingPids;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 contributingPids:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSignpostSupportCompositorInterval:(id)arg1;
- (id)serializeableDictionary;
- (void)setContributingPids:(id)arg1;
- (void)setDurationMachContinuousTime:(unsigned long long)arg1;
- (void)setEndMachContinuousTime:(unsigned long long)arg1;
- (void)setStartMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)startMachContinuousTime;

@end
