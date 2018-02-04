/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCComposedCharacter : NSObject {
    int * _normalFormDRepresentation;
    unsigned long long  _normalFormDRepresentationLength;
    int * _normalFormKCRepresentation;
    unsigned long long  _normalFormKCRepresentationLength;
    struct __CFString { } * _originalCombinedCharacter;
    long long  _originalCombinedCharacterLength;
    int * _originalRepresentation;
    unsigned long long  _originalRepresentationLength;
}

- (void)_buildFormD;
- (void)_buildFormKC;
- (bool)_formKCContaintsUpperCase;
- (id)_initWithCharacter:(int)arg1;
- (id)_initWithComposedCharacter:(struct __CFString { }*)arg1;
- (id)_initWithSimpleCharacter:(int)arg1;
- (int)charAtIndex:(unsigned long long)arg1;
- (bool)containsUpperCase;
- (struct __CFString { }*)copyUnicodeDescriptionString;
- (void)dealloc;
- (int)formDCharAtIndex:(unsigned long long)arg1;
- (unsigned long long)formDLength;
- (int)formKCCharAtIndex:(unsigned long long)arg1;
- (unsigned long long)formKCLength;
- (id)initWithCharacter:(int)arg1;
- (id)initWithComposedCharacter:(struct __CFString { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUChar32:(int)arg1;
- (unsigned long long)length;
- (int)originalFromCharAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalLength;
- (struct __CFString { }*)originalString;

@end
