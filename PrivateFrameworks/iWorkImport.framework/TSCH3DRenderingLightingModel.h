/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderingLightingModel : NSObject {
    bool  mHasTransparency;
    TSCH3DLightingModel * mLightingModel;
    NSNumber * mPercentage;
}

@property (nonatomic, readonly) bool hasTransparency;
@property (nonatomic, readonly) TSCH3DLightingModel *lightingModel;

+ (id)p_lightingModelFromFill:(id)arg1 lightings:(id)arg2 returningTransparency:(bool*)arg3;
+ (id)renderingLightingModelWithFill:(id)arg1 lightings:(id)arg2;
+ (id)renderingLightingModelWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(bool)arg3;

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)dealloc;
- (bool)hasTransparency;
- (id)initWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(bool)arg3;
- (id)lightingModel;

@end
