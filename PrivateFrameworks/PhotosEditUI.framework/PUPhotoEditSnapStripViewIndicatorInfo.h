/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditSnapStripViewIndicatorInfo : NSObject {
    UIColor * _color;
    bool  _disabled;
    double  _offset;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) bool disabled;
@property (nonatomic, readonly) double offset;

- (void).cxx_destruct;
- (id)color;
- (bool)disabled;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOffset:(double)arg1 color:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIndicatorInfo:(id)arg1;
- (double)offset;
- (void)setDisabled:(bool)arg1;

@end
