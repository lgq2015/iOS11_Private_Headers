/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (nonatomic) float alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (nonatomic, copy) NSArray *monogramName;
@property (nonatomic, copy) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *themeImages;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;

- (float)alpha;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (double)imagePointHeight;
- (double)imagePointWidth;
- (id)monogramName;
- (void)setAlpha:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePointHeight:(double)arg1;
- (void)setImagePointWidth:(double)arg1;
- (void)setMonogramName:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setThemeImages:(id)arg1;
- (id)style;
- (id)themeImages;

@end
