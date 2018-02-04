/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPRubyTextSource : NSObject <TSWPTextSource> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  _bidiCharIndexes;
    unsigned long long  _length;
    TSWPRangeMap * _rangeMap;
    <TSWPTextSource> * _source;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  _spaceCharIndexes;
    unsigned long long  _storageLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adjustRangesByDelta:(long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(bool)arg2 attributesTable:(/* Warning: unhandled array encoding: '[19@]' */ id)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)arg1 isSurrogatePair:(bool*)arg2;
- (struct __CFDictionary { }*)createFilteredCoreTextAttributes:(struct __CFDictionary { }*)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 filterDelegate:(id)arg3;
- (void)dealloc;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 filterDelegate:(id)arg2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 locale:(struct __CFLocale { }*)arg3 hyphenChar:(unsigned int*)arg4;
- (id)initWithSource:(id)arg1 subRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)storageLength;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(bool)arg2;

@end
