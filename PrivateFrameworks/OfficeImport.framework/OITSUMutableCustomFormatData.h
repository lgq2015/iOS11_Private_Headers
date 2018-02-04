/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) bool formatContainsIntegerToken;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic, copy) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic, copy) NSArray *interstitialStrings;
@property (nonatomic) bool isComplexFormat;
@property (nonatomic) bool isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) bool requiresFractionReplacement;
@property (nonatomic) double scaleFactor;
@property (nonatomic) bool showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) bool useAccountingStyle;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
