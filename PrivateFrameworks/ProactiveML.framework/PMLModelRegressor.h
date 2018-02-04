/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelRegressor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLDenseVector * _data;
}

@property (nonatomic, readonly) int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelRegressorFromFloat:(float)arg1;
+ (id)modelRegressorFromFloats:(id)arg1;
+ (id)regressorVectorFrom:(id)arg1;

- (void).cxx_destruct;
- (int)count;
- (id)denseVector;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)initModelRegressorFromFloats:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithRegressorFromFloat:(float)arg1;
- (const float*)inverseValues;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)regressorFor:(int)arg1;
- (id)toDictionary;
- (id)toPlistWithChunks:(id)arg1;
- (const float*)values;

@end
