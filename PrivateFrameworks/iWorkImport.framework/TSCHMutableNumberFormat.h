/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>

@property (nonatomic) unsigned int base;
@property (nonatomic) unsigned int basePlaces;
@property (nonatomic) bool baseUseMinusSign;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) unsigned int decimalPlaces;
@property (nonatomic) int formatType;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) int negativeStyle;
@property (nonatomic, copy) NSString *prefixString;
@property (nonatomic) bool showThousandsSeparator;
@property (nonatomic, copy) NSString *suffixString;
@property (nonatomic) bool useAccountingStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)p_formatTypeAffectedPropertyKeys;
- (void)p_setFractionAccuracy:(int)arg1;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1;
- (void)setBase:(unsigned int)arg1;
- (void)setBasePlaces:(unsigned int)arg1;
- (void)setBaseUseMinusSign:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDecimalPlaces:(unsigned int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setNegativeStyle:(int)arg1;
- (void)setPrefixString:(id)arg1;
- (void)setShowThousandsSeparator:(bool)arg1;
- (void)setSuffixString:(id)arg1;
- (void)setUseAccountingStyle:(bool)arg1;
- (void)setValueType:(int)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end
