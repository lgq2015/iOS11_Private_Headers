/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCompassViewSizeParameter : NSObject {
    double  _diameter;
    UIFont * _font;
    NSString * _imageNamePart;
    double  _textOffsetFromCenter;
}

@property (nonatomic) double diameter;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *imageNamePart;
@property (nonatomic) double textOffsetFromCenter;

- (void).cxx_destruct;
- (double)diameter;
- (id)font;
- (id)imageNamePart;
- (void)setDiameter:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setImageNamePart:(id)arg1;
- (void)setTextOffsetFromCenter:(double)arg1;
- (double)textOffsetFromCenter;

@end
