/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUFont : NSObject {
    struct __CTFont { } * _ctFont;
}

@property (nonatomic, readonly) struct __CTFont { }*CTFont;
@property (nonatomic, readonly) UIFont *UIFont;
@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly, retain) NSString *familyName;
@property (nonatomic, readonly, retain) NSString *fontName;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) UIFont *platformFont;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double xHeight;

+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithUIFont:(id)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;

- (struct __CTFont { }*)CTFont;
- (id)UIFont;
- (double)ascender;
- (double)capHeight;
- (void)dealloc;
- (double)descender;
- (id)familyName;
- (id)fontName;
- (id)fontWithScale:(double)arg1;
- (id)fontWithSize:(double)arg1;
- (id)initWithCTFont:(struct __CTFont { }*)arg1;
- (id)initWithUIFont:(id)arg1;
- (double)lineHeight;
- (id)platformFont;
- (double)pointSize;
- (double)xHeight;

@end
