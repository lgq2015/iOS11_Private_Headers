/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKForcedRelevanceProvider : NTKRelevanceProvider {
    bool  _isHistoric;
    float  _relevance;
}

@property (nonatomic, readonly) bool isHistoric;
@property (nonatomic, readonly) float relevance;

+ (id)forcedBottomOfRecentsStreamRelevanceProvider;
+ (id)forcedTopOfStreamRelevanceProvider;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithForcedRelevance:(float)arg1;
- (id)initWithForcedRelevance:(float)arg1 isHistoric:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHistoric;
- (float)relevance;

@end
