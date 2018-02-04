/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFDescriptionCardSection : SFTitleCardSection <NSCopying, NSSecureCoding, SFDescriptionCardSection> {
    SFImage * _attributionGlyph;
    NSString * _attributionText;
    NSURL * _attributionURL;
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    bool  _descriptionExpand;
    NSNumber * _descriptionSize;
    SFText * _descriptionText;
    NSNumber * _descriptionWeight;
    NSString * _expandText;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int titleNoWrap : 1; 
        unsigned int descriptionExpand : 1; 
        unsigned int imageAlign : 1; 
        unsigned int textAlign : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    SFImage * _image;
    int  _imageAlign;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _subtitle;
    int  _textAlign;
    NSString * _title;
    bool  _titleNoWrap;
    NSNumber * _titleWeight;
    NSString * _type;
}

@property (nonatomic, retain) SFImage *attributionGlyph;
@property (nonatomic, copy) NSString *attributionText;
@property (nonatomic, copy) NSURL *attributionURL;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool descriptionExpand;
@property (nonatomic, copy) NSNumber *descriptionSize;
@property (nonatomic, retain) SFText *descriptionText;
@property (nonatomic, copy) NSNumber *descriptionWeight;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *expandText;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic) bool isCentered;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int textAlign;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool titleNoWrap;
@property (nonatomic, copy) NSNumber *titleWeight;
@property (nonatomic, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionGlyph;
- (id)attributionText;
- (id)attributionURL;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)descriptionExpand;
- (id)descriptionSize;
- (id)descriptionText;
- (id)descriptionWeight;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expandText;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasDescriptionExpand;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasImageAlign;
- (bool)hasSeparatorStyle;
- (bool)hasTextAlign;
- (bool)hasTitleNoWrap;
- (bool)hasTopPadding;
- (id)image;
- (int)imageAlign;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAttributionGlyph:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setAttributionURL:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionWeight:(id)arg1;
- (void)setExpandText:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtitle;
- (int)textAlign;
- (id)title;
- (bool)titleNoWrap;
- (id)titleWeight;
- (id)type;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (bool)_crkinteractivecardsectionviewcontroller_shouldRenderButtonOverlay;

@end
