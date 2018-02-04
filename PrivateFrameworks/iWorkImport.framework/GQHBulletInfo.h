/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHBulletInfo : NSObject {
    int  mBulletIndent;
    struct __CFString { } * mChar;
    bool  mHasNumber;
    int  mLabelType;
    int  mNumber;
    GQDSStyle * mStyle;
    int  mTextIndent;
    int  mType;
}

- (struct __CFString { }*)bulletChar;
- (int)bulletIndent;
- (struct __CFString { }*)createTierStringNumber;
- (void)dealloc;
- (bool)hasNumber;
- (int)labelType;
- (int)number;
- (void)setBulletChar:(struct __CFString { }*)arg1;
- (void)setBulletIndent:(int)arg1;
- (void)setHasNumber:(bool)arg1;
- (void)setLabelType:(int)arg1;
- (void)setNumber:(int)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextIndent:(int)arg1;
- (void)setType:(int)arg1;
- (id)style;
- (int)textIndent;
- (int)type;

@end
