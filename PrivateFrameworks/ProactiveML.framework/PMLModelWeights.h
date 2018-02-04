/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelWeights : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLMutableDenseVector * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int length;
@property (readonly) Class superclass;

+ (id)constWeightsOfLength:(int)arg1 value:(float)arg2;
+ (id)modelWeightsFromFloats:(id)arg1;
+ (id)modelWeightsOfLength:(int)arg1;
+ (id)modelWeightsOfLength:(int)arg1 rng:(id)arg2;
+ (id)modelWeightsOfLength:(int)arg1 rngSeed:(unsigned long long)arg2;
+ (id)weightsFromNumbers:(id)arg1;
+ (id)zeroWeightsOfLength:(int)arg1;

- (void).cxx_destruct;
- (id)asMutableDenseVector;
- (id)copy;
- (id)initFromDictionary:(id)arg1;
- (id)initModelWeightsFromFloats:(id)arg1;
- (id)initWithCount:(int)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (int)length;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (void)processValuesInPlaceWithBlock:(id /* block */)arg1;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (id)toDictionary;
- (id)toPlistWithChunks:(id)arg1;
- (float*)values;
- (id)weightsByAppendingWeights:(id)arg1;

@end
