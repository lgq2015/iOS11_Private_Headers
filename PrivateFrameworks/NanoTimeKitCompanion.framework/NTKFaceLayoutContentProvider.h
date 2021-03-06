/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceLayoutContentProvider : NSObject {
    UIColor * _foregroundColor;
    UIColor * _platterColor;
}

@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, retain) UIColor *platterColor;

- (void).cxx_destruct;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)foregroundColor;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (id)platterColor;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setPlatterColor:(id)arg1;
- (void)setPlatterColor:(id)arg1 faceView:(id)arg2;

@end
