/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle * mBorderStyle;
    OADFill * mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (void)applyOverridesFrom:(id)arg1;
- (id)borderStyle;
- (void)dealloc;
- (id)description;
- (id)fill;
- (void)setBorderStyle:(id)arg1;
- (void)setFill:(id)arg1;
- (id)shallowCopy;

@end
