/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFont : NSObject <EDImmutableObject, NSCopying> {
    bool  mBold;
    bool  mBoldOverridden;
    int  mCharSet;
    EDColorReference * mColorReference;
    bool  mDoNotModify;
    int  mFamily;
    double  mHeightInTwips;
    bool  mHeightOverridden;
    bool  mItalic;
    bool  mItalicOverridden;
    NSString * mName;
    bool  mNameOverridden;
    bool  mOutline;
    EDResources * mResources;
    int  mScript;
    bool  mShadow;
    bool  mStrike;
    bool  mStrikeOverridden;
    int  mUnderline;
    bool  mUnderlineOverridden;
    unsigned int  mWeight;
    bool  mWeightOverridden;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fontWithResources:(id)arg1;

- (int)charSet;
- (id)color;
- (id)colorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)family;
- (unsigned long long)hash;
- (double)height;
- (id)initWithResources:(id)arg1;
- (bool)isBold;
- (bool)isBoldOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFont:(id)arg1;
- (bool)isHeightOverridden;
- (bool)isItalic;
- (bool)isItalicOverridden;
- (bool)isNameOverridden;
- (bool)isOutline;
- (bool)isShadow;
- (bool)isStrike;
- (bool)isStrikeOverridden;
- (bool)isUnderlineOverridden;
- (bool)isWeightOverridden;
- (id)name;
- (int)script;
- (void)setBold:(bool)arg1;
- (void)setCharSet:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorReference:(id)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFamily:(int)arg1;
- (void)setHeight:(double)arg1;
- (void)setItalic:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setScript:(int)arg1;
- (void)setShadow:(bool)arg1;
- (void)setStrike:(bool)arg1;
- (void)setUnderline:(int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (int)underline;
- (unsigned int)weight;

@end
