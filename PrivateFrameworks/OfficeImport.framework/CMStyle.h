/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMStyle : NSObject <NSCopying> {
    NSMutableString * mStyleString;
    NSMutableDictionary * properties;
}

- (void).cxx_destruct;
- (void)addPropertiesToCSSStyleString:(id)arg1;
- (void)addProperty:(id)arg1 forKey:(id)arg2;
- (void)appendDefaultBorderStyle;
- (void)appendOriginInfoFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)appendPositionInfoFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;
- (void)appendPropertyForName:(id)arg1 floatValue:(float)arg2;
- (void)appendPropertyForName:(id)arg1 intValue:(int)arg2;
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;
- (void)appendPropertyString:(id)arg1;
- (void)appendSizeInfoFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)attributeForName:(id)arg1;
- (id)cacheFriendlyCSSStyleString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cssStyleString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)propertyForName:(id)arg1;

@end
