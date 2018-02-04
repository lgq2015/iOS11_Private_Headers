/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKComplicationPickerCylinderFaceView : _NTKOptionPickerCylinderFaceView {
    NTKComplicationLayoutRule * _layoutRule;
    long long  _style;
}

@property (nonatomic, copy) NTKComplicationLayoutRule *layoutRule;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)layoutRule;
- (void)layoutSubviews;
- (void)setLayoutRule:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
