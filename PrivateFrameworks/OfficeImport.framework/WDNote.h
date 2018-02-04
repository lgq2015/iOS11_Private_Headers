/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDNote : WDRun {
    bool  mAutomaticNumbering;
    WDCharacterRun * mReference;
    WDText * mText;
}

- (bool)automaticNumbering;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1 footnote:(bool)arg2;
- (id)reference;
- (int)runType;
- (void)setAutomaticNumbering:(bool)arg1;
- (id)text;

@end
