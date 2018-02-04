/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShapeStyle : NSObject <NSCopying> {
    OADStyleMatrixReference * mEffectReference;
    OADStyleMatrixReference * mFillReference;
    OADFontReference * mFontReference;
    OADStyleMatrixReference * mLineReference;
}

+ (id)defaultOfficeShapeStyle;
+ (id)defaultShapeStyle;

- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(bool)arg3 strokeWidthMultiplier:(float)arg4;
- (void)applyToParagraphProperties:(id)arg1;
- (void)applyToTextBody:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)effectReference;
- (id)fillReference;
- (id)fontReference;
- (id)lineReference;
- (void)setEffectMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setEffectReference:(id)arg1;
- (void)setFillMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setFillReference:(id)arg1;
- (void)setFontReference:(id)arg1;
- (void)setLineMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setLineReference:(id)arg1;

@end
