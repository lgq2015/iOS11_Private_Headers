/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewSpec : NSObject <NSCopying> {
    struct UIColor { Class x1; } * _backgroundColor;
    struct UIColor { Class x1; } * _borderColor;
    double  _borderWidth;
    long long  _compositingFilterType;
    double  _cornerRadius;
    double  _displayScale;
    bool  _hidden;
    struct UIColor { Class x1; } * _selectionHighlightColor;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double displayScale;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) UIColor *selectionHighlightColor;

- (void).cxx_destruct;
- (struct UIColor { Class x1; }*)backgroundColor;
- (struct UIColor { Class x1; }*)borderColor;
- (double)borderWidth;
- (long long)compositingFilterType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (double)displayScale;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (struct UIColor { Class x1; }*)selectionHighlightColor;
- (void)setBackgroundColor:(struct UIColor { Class x1; }*)arg1;
- (void)setBorderColor:(struct UIColor { Class x1; }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCompositingFilterType:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setSelectionHighlightColor:(struct UIColor { Class x1; }*)arg1;

@end
