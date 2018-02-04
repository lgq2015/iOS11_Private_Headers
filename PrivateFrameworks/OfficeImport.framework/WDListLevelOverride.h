/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListLevelOverride : NSObject {
    WDDocument * mDocument;
    unsigned char  mLevel;
    WDListLevel * mListLevel;
    long long  mStartNumber;
    bool  mStartNumberOverridden;
}

- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;
- (bool)isListLevelOverridden;
- (bool)isStartNumberOverridden;
- (unsigned char)level;
- (id)listLevel;
- (id)mutableListLevel;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;

@end
