/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBKeyValueDataCardSection : PBCodable <NSSecureCoding, _SFPBKeyValueDataCardSection> {
    _SFPBImage * _accessoryImage;
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _datas;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBImage *accessoryImage;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSArray *datas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccessoryImage;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)accessoryImage;
- (void)addData:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearData;
- (void)clearPunchoutOptions;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (id)datas;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryImage;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setAccessoryImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDatas:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
