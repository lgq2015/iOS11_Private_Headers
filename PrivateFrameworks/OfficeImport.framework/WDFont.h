/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFont : NSObject <NSCopying> {
    NSMutableArray * mAlternateNames;
    int  mCharacterSet;
    int  mFontFamily;
    NSString * mName;
    int  mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;

- (void)addAlternateName:(id)arg1;
- (id)alternateNames;
- (int)characterSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)fontFamily;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (int)pitch;
- (id)secondName;
- (void)setCharacterSet:(int)arg1;
- (void)setFontFamily:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPitch:(int)arg1;

@end
