/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationTheme : NSObject {
    int  _pageTheme;
}

@property (nonatomic, readonly) int annotationStyle;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, readonly) bool isUnderline;
@property (nonatomic, readonly) UIColor *noteBorderColor;
@property (nonatomic, readonly) UIColor *noteFillColor;
@property (nonatomic, readonly) UIColor *noteMarkerBorderColor;
@property (nonatomic, readonly) UIColor *noteMarkerFillColor;
@property (nonatomic, readonly) UIColor *noteMarkerStrikethroughColor;
@property (nonatomic, readonly) UIColor *noteShadowColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } noteShadowOffset;
@property (nonatomic, readonly) double noteShadowOpacity;
@property (nonatomic, readonly) double noteShadowRadius;
@property (nonatomic, readonly) UIColor *noteTextColor;
@property (nonatomic, readonly) UIFont *noteTextFont;
@property (nonatomic, readonly) UIFont *noteTextFontInTable;
@property (nonatomic, readonly) UIColor *notesSidebarBarColor;
@property (nonatomic, readonly) UIColor *notesSidebarTextColor;
@property (nonatomic) int pageTheme;

+ (id)blueTheme:(int)arg1;
+ (id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3;
+ (id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2;
+ (id)greenTheme:(int)arg1;
+ (id)highlightTextColor:(int)arg1;
+ (id)pinkTheme:(int)arg1;
+ (id)purpleTheme:(int)arg1;
+ (id)theme:(int)arg1;
+ (id)themeDescriptions;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(bool)arg3;
+ (id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2;
+ (id)underlineTheme:(int)arg1;
+ (id)yellowTheme:(int)arg1;

- (int)annotationStyle;
- (id)highlightColor;
- (bool)isUnderline;
- (id)noteBorderColor;
- (id)noteFillColor;
- (id)noteMarkerBorderColor;
- (id)noteMarkerFillColor;
- (id)noteMarkerStrikethroughColor;
- (id)noteShadowColor;
- (struct CGSize { double x1; double x2; })noteShadowOffset;
- (double)noteShadowOpacity;
- (double)noteShadowRadius;
- (id)noteTextColor;
- (id)noteTextFont;
- (id)noteTextFontInTable;
- (id)notesSidebarBarColor;
- (id)notesSidebarTextColor;
- (int)pageTheme;
- (void)setPageTheme:(int)arg1;

@end
