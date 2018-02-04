/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying> {
    HFColorCollection * _colorCollection;
}

@property (nonatomic, readonly) UIColor *UIColor;
@property (nonatomic, readonly) HFColorCollection *colorCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIColor;
- (id)colorByAdjustingToColorProfile:(id)arg1;
- (id)colorCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithColorCollection:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithUIColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSimilarToColor:(id)arg1;
- (bool)isSimilarToColor:(id)arg1 ignoreTemperature:(bool)arg2;

@end
