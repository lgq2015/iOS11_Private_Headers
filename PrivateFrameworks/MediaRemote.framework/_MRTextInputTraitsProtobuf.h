/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    int  _autocapitalizationType;
    bool  _autocorrection;
    bool  _enablesReturnKeyAutomatically;
    struct { 
        unsigned int validTextRangeLength : 1; 
        unsigned int validTextRangeLocation : 1; 
        unsigned int autocapitalizationType : 1; 
        unsigned int keyboardType : 1; 
        unsigned int returnKeyType : 1; 
        unsigned int autocorrection : 1; 
        unsigned int enablesReturnKeyAutomatically : 1; 
        unsigned int secureTextEntry : 1; 
        unsigned int spellchecking : 1; 
    }  _has;
    int  _keyboardType;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _pINEntrySeparatorIndexes;
    int  _returnKeyType;
    bool  _secureTextEntry;
    bool  _spellchecking;
    unsigned long long  _validTextRangeLength;
    unsigned long long  _validTextRangeLocation;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) bool autocorrection;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool hasAutocapitalizationType;
@property (nonatomic) bool hasAutocorrection;
@property (nonatomic) bool hasEnablesReturnKeyAutomatically;
@property (nonatomic) bool hasKeyboardType;
@property (nonatomic) bool hasReturnKeyType;
@property (nonatomic) bool hasSecureTextEntry;
@property (nonatomic) bool hasSpellchecking;
@property (nonatomic) bool hasValidTextRangeLength;
@property (nonatomic) bool hasValidTextRangeLocation;
@property (nonatomic) int keyboardType;
@property (nonatomic, readonly) unsigned long long*pINEntrySeparatorIndexes;
@property (nonatomic, readonly) unsigned long long pINEntrySeparatorIndexesCount;
@property (nonatomic) int returnKeyType;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic) bool spellchecking;
@property (nonatomic) unsigned long long validTextRangeLength;
@property (nonatomic) unsigned long long validTextRangeLocation;

- (int)StringAsAutocapitalizationType:(id)arg1;
- (int)StringAsKeyboardType:(id)arg1;
- (int)StringAsReturnKeyType:(id)arg1;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)arg1;
- (int)autocapitalizationType;
- (id)autocapitalizationTypeAsString:(int)arg1;
- (bool)autocorrection;
- (void)clearPINEntrySeparatorIndexes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablesReturnKeyAutomatically;
- (bool)hasAutocapitalizationType;
- (bool)hasAutocorrection;
- (bool)hasEnablesReturnKeyAutomatically;
- (bool)hasKeyboardType;
- (bool)hasReturnKeyType;
- (bool)hasSecureTextEntry;
- (bool)hasSpellchecking;
- (bool)hasValidTextRangeLength;
- (bool)hasValidTextRangeLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)keyboardType;
- (id)keyboardTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long*)pINEntrySeparatorIndexes;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)arg1;
- (unsigned long long)pINEntrySeparatorIndexesCount;
- (bool)readFrom:(id)arg1;
- (int)returnKeyType;
- (id)returnKeyTypeAsString:(int)arg1;
- (bool)secureTextEntry;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrection:(bool)arg1;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setHasAutocapitalizationType:(bool)arg1;
- (void)setHasAutocorrection:(bool)arg1;
- (void)setHasEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setHasKeyboardType:(bool)arg1;
- (void)setHasReturnKeyType:(bool)arg1;
- (void)setHasSecureTextEntry:(bool)arg1;
- (void)setHasSpellchecking:(bool)arg1;
- (void)setHasValidTextRangeLength:(bool)arg1;
- (void)setHasValidTextRangeLocation:(bool)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setPINEntrySeparatorIndexes:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSpellchecking:(bool)arg1;
- (void)setValidTextRangeLength:(unsigned long long)arg1;
- (void)setValidTextRangeLocation:(unsigned long long)arg1;
- (bool)spellchecking;
- (unsigned long long)validTextRangeLength;
- (unsigned long long)validTextRangeLocation;
- (void)writeTo:(id)arg1;

@end
