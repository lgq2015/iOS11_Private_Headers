/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFieldMarker : WDRun {
    NSData * mData;
    int  mFieldPosition;
    unsigned char  mFieldType;
    unsigned int  mHasSeparator;
    unsigned int  mLocked;
    int  mMarkerType;
    unsigned int  mNested;
    unsigned int  mPrivateResult;
    WDCharacterProperties * mProperties;
    unsigned int  mResultDirty;
    unsigned int  mResultEdited;
    unsigned int  mZombieEmbed;
}

- (void)clearProperties;
- (id)data;
- (void)dealloc;
- (id)description;
- (int)fieldMarkerType;
- (int)fieldPosition;
- (unsigned char)fieldType;
- (bool)hasSeparator;
- (id)initWithParagraph:(id)arg1;
- (bool)locked;
- (bool)nested;
- (bool)privateResult;
- (id)properties;
- (bool)resultDirty;
- (bool)resultEdited;
- (int)runType;
- (void)setData:(id)arg1;
- (void)setFieldMarkerType:(int)arg1;
- (void)setFieldPosition:(int)arg1;
- (void)setFieldType:(unsigned char)arg1;
- (void)setHasSeparator:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setNested:(bool)arg1;
- (void)setPrivateResult:(bool)arg1;
- (void)setResultDirty:(bool)arg1;
- (void)setResultEdited:(bool)arg1;
- (void)setZombieEmbed:(bool)arg1;
- (bool)zombieEmbed;

@end
