/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDStyle : NSObject <NSCopying> {
    WDStyle * mBaseStyle;
    WDCharacterProperties * mCharacterProperties;
    bool  mHidden;
    NSString * mId;
    NSString * mName;
    WDStyle * mNextStyle;
    WDParagraphProperties * mParagraphProperties;
    WDStyleSheet * mStyleSheet;
    int  mStyleType;
    WDTableCellProperties * mTableCellProperties;
    WDTableRowProperties * mTableRowProperties;
    WDTableStyleOverride * mTableStyleOverrides;
}

- (id)baseStyle;
- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)hidden;
- (id)id;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;
- (bool)isAnythingOverridden;
- (id)name;
- (id)nextStyle;
- (id)paragraphProperties;
- (void)setBaseStyle:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNextStyle:(id)arg1;
- (id)styleSheet;
- (id)tableCellProperties;
- (id)tableProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)arg1;
- (int)type;

@end
