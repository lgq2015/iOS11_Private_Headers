/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary * mFontTable;
    NSMutableArray * mFontsInOrderOfInsertion;
}

- (void)clear;
- (unsigned long long)count;
- (id)createFontWithName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(bool)arg2;
- (id)fonts;
- (unsigned long long)indexOfFont:(id)arg1;
- (id)init;

@end
