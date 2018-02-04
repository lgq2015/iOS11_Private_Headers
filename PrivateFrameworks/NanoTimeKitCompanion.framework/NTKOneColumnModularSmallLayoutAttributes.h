/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject {
    double  _imageHeight;
    double  _imageOriginY;
    double  _marginWidth;
    double  _minimumFontSize;
    double  _subtitleBaselineOffset;
    CLKFont * _subtitleFont;
    double  _titleBaselineOffset;
    CLKFont * _titleFont;
}

@property (nonatomic) double imageHeight;
@property (nonatomic) double imageOriginY;
@property (nonatomic) double marginWidth;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) double subtitleBaselineOffset;
@property (nonatomic, retain) CLKFont *subtitleFont;
@property (nonatomic) double titleBaselineOffset;
@property (nonatomic, retain) CLKFont *titleFont;

+ (id)attributesForTemplate:(id)arg1;

- (void).cxx_destruct;
- (double)imageHeight;
- (double)imageOriginY;
- (double)marginWidth;
- (double)minimumFontSize;
- (void)setImageHeight:(double)arg1;
- (void)setImageOriginY:(double)arg1;
- (void)setMarginWidth:(double)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setSubtitleBaselineOffset:(double)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitleBaselineOffset:(double)arg1;
- (void)setTitleFont:(id)arg1;
- (double)subtitleBaselineOffset;
- (id)subtitleFont;
- (double)titleBaselineOffset;
- (id)titleFont;

@end
