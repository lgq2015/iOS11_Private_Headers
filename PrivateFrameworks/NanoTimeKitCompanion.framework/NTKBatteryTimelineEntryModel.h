/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel {
    float  _level;
    long long  _state;
}

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)_levelTintColor;
- (id)_newCircularTemplateMedium:(bool)arg1;
- (id)_newExtraLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_ringTextProvider;
- (float)level;
- (void)setLevel:(float)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)templateForComplicationFamily:(long long)arg1;

@end
