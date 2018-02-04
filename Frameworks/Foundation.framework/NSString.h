/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSString : NSObject <AFSecurityDigestibleChunksProviding, ASParsingLeafNode, CKLParsedObject, CKRecordValue, CKShortDescription, CNKeyDescriptor_Private, CNUIURLDestinationID, CRCoding, CRDataType, CREquatable, CSCoderEncoder, FCKeyValueStoreCoding, HFPropertyListConvertible, HFStringGenerator, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding, PASerializable, PQLValuable, SBFFileCacheFileIdentifier, SiriCoreSQLiteValue, UIItemProviderReading, UIItemProviderWriting>

@property (nonatomic, retain) NSString *IPASpeechPhonemes;
@property (nonatomic, readonly) NSData *_FTDataFromBase64String;
@property (nonatomic, readonly) NSData *_FTDataFromHexString;
@property (readonly) bool _cn_requiresPhoneNumberSanitizing;
@property (readonly, copy) NSString *cam_uppercaseStringWithPreferredLocale;
@property (readonly) bool containsDotDotPathComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMobileMeSuffix;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ic_sanitizedFilenameString;
@property (nonatomic, readonly) NSString *ic_trimmedString;
@property (nonatomic, readonly) NSString *ic_whitespaceAndNewlineCoalescedString;
@property (readonly) bool isAllCaps;
@property (readonly) unsigned long long length;
@property (readonly, copy) NSString *localizedString;
@property (nonatomic, readonly) NSString *mobileMeDomain;
@property (readonly) bool npkHasContent;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } px_firstLetterRange;
@property (nonatomic, readonly) long long px_platformAgnosticHash;
@property (nonatomic, readonly) NSString *px_stringByIndentingNewLines;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) bool safari_isSpecialFolderRecordName;
@property (nonatomic, readonly, copy) NSString *safari_stringByRemovingExcessWhitespace;
@property (nonatomic, readonly) NSString *sf_URLScheme;
@property (nonatomic, readonly) bool sf_isFeedScheme;
@property (readonly) NSString *stringByEscapingXMLEntities;
@property (readonly, copy) NSString *stringByRemovingPercentEncoding;
@property (readonly) NSString *stringByUnescapingXMLEntities;
@property (nonatomic, readonly) NSString *stripMobileMSuffixIfPresent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tsp_isPasteboardStateType;
@property (nonatomic, readonly) NSString *tsu_UTIFilenameExtension;
@property (nonatomic, readonly) NSString *tsu_pathUTI;
@property (nonatomic, readonly, copy) NSArray *un_localizedStringArguments;
@property (nonatomic, readonly, copy) NSString *un_localizedStringKey;
@property (nonatomic, readonly, copy) NSString *un_localizedStringValue;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_newZStringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)_newZStringWithString:(id)arg1;
+ (id)_newZStringWithUTF8String:(const char *)arg1;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (const unsigned long long*)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (void)initialize;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)pathWithComponents:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)string;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(bool*)arg4;
+ (id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (const char *)UTF8String;
- (id)__escapeString5991;
- (unsigned long long)__graphemeCount;
- (bool)_allowsDirectEncoding;
- (unsigned long long)_cfTypeID;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (const char *)_fastCStringContents:(bool)arg1;
- (const unsigned short*)_fastCharacterContents;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (void)_flushRegularExpressionCaches;
- (void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 stopAtLineSeparators:(bool)arg5;
- (bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 usedEncoding:(unsigned long long*)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (bool)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)_stringByResolvingSymlinksInPathUsingCache:(bool)arg1;
- (id)_stringByStandardizingPathUsingCache:(bool)arg1;
- (id)_stringRepresentation;
- (id)_web_HTTPStyleLanguageCode;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_URLFragment;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (long long)_web_countOfString:(id)arg1;
- (id)_web_domainFromHost;
- (bool)_web_domainMatches:(id)arg1;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_fixedCarbonPOSIXPath;
- (bool)_web_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_web_hasCountryCodeTLD;
- (bool)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (bool)_web_isFileURL;
- (bool)_web_isJavaScriptURL;
- (bool)_web_looksLikeAbsoluteURL;
- (bool)_web_looksLikeIPAddress;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(bool)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLScheme_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLUserPasswordHostPort;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_stringByTrimmingWhitespace;
- (bool)boolValue;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(bool)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (bool)containsString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(bool)arg2;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)decomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)description;
- (id)displayableString;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateLinesUsingBlock:(id /* block */)arg1;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)fastestEncoding;
- (const char *)fileSystemRepresentation;
- (float)floatValue;
- (id)formatConfiguration;
- (bool)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(bool)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)hasPrefix:(id)arg1;
- (bool)hasSuffix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id*)arg5;
- (int)intValue;
- (long long)integerValue;
- (bool)isAbsolutePath;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isNSString__;
- (id)lastPathComponent;
- (unsigned long long)length;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lineRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)linguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)localizedCapitalizedString;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (bool)localizedCaseInsensitiveContainsString:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (bool)localizedHasPrefix:(id)arg1;
- (bool)localizedHasSuffix:(id)arg1;
- (id)localizedLowercaseString;
- (long long)localizedStandardCompare:(id)arg1;
- (bool)localizedStandardContainsString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })localizedStandardRangeOfString:(id)arg1;
- (id)localizedUppercaseString;
- (long long)longLongValue;
- (const char *)lossyCString;
- (id)lowercaseString;
- (id)lowercaseStringWithLocale:(id)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)pathComponents;
- (id)pathExtension;
- (id)precomposedStringWithCanonicalMapping;
- (id)precomposedStringWithCompatibilityMapping;
- (id)propertyList;
- (id)propertyListFromStringsFileFormat;
- (id)quotedStringRepresentation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequencesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })significantText;
- (unsigned long long)smallestEncoding;
- (id)standardizedURLPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringByAddingPercentEscapes;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)stringByApplyingTransform:(id)arg1 reverse:(bool)arg2;
- (id)stringByConvertingPathToURL;
- (id)stringByConvertingURLToPath;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)stringByRemovingPercentEncoding;
- (id)stringByRemovingPercentEscapes;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (id)writableTypeIdentifiersForItemProvider;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;

// Image: /Developer/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

- (bool)xr_getLongLong:(long long*)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKBase64DecodedString;
- (id)CKBase64EncodedURLSafeString;
- (id)CKDPIdentifier_Device;
- (id)CKDPIdentifier_Raw;
- (id)CKDPIdentifier_Record;
- (id)CKDPIdentifier_ShareId;
- (id)CKDPIdentifier_Subscription;
- (id)CKDPIdentifier_User;
- (id)CKDPIdentifier_Zone;
- (id)CKMangledDocumentNameForURLFragment;
- (id)CKNilIfLengthZero;
- (id)CKSHA256;
- (id)CKSafeHashStringForPathComponent;
- (id)CKSafeStringForPathComponent;
- (id)CKSafeStringForURLPathComponent;
- (id)CKSafeStringForURLWithCharsToBeEscaped:(id)arg1;
- (id)CKSanitizedPath;
- (id)CKUnmangledDocumentNameFromURLFragment;
- (id)_CKDPIdentifierWithType:(int)arg1;
- (id)ckShortDescription;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (bool)cnui_containsEmojiCharacters;
- (bool)cnui_containsNonLatinCharacters;
- (unsigned int)cnui_firstUTF32Character;
- (bool)cnui_shouldTransliterateToLatin;
- (bool)cnui_shouldUseJapaneseTransliteration;
- (bool)cnui_shouldUseZhuyinTransliteration;
- (id)cnui_stringByTransliteratingToKanaAsName:(bool)arg1;
- (id)cnui_stringByTransliteratingToPhoneticCharactersForProperty:(id)arg1;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (long long)_caseInsensitiveNumericCompare:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;
- (bool)hasSuffixInsensitive:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)_attendeeNameExtensions;
+ (id)_attendeePartialSurnames;

- (bool)_attendeeAppearsToBeAnInitial;
- (id)_attendeeTrimCommasSpacesQuotes;
- (void)attendeeFirstName:(id*)arg1 middleName:(id*)arg2 lastName:(id*)arg3 extension:(id*)arg4;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)_fpd_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(bool)arg4;

- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (const char *)fp_fileSystemRepresentation;
- (id)fp_libnotifyPerUserNotificationName;
- (id)fp_pathExtension;
- (id)fp_realpath;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)fp_stringByDeletingPathBounceNo:(unsigned long long*)arg1 andPathExtension:(id*)arg2;
- (id)fp_stringByDeletingPathExtension;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (long long)hk_compareBuildVersionWithString:(id)arg1;
- (id)hk_copyNonEmptyString;
- (bool)hk_isBase64;
- (id)hk_stripLeadingTrailingWhitespace;
- (id)hk_trimWhitespaceAndNewlines;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)generateSHA1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_commaListDelimiter;
+ (id)_mapkit_formattedStringForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)_mapkit_formattedStringForFloat:(double)arg1;
+ (id)_mapkit_formattedStringForFloatingPointNumber:(id)arg1;
+ (id)_mapkit_localizedDistanceStringWithMeters:(unsigned int)arg1 abbreviated:(bool)arg2;
+ (id)_mapkit_voiceOverLocalizedDistanceStringWithMeters:(unsigned int)arg1;

- (double)_mapkit_cgFloatValue;
- (id)_mapkit_componentsSeparatedFromCommaDelimitedList;
- (id)mkServerFormattedString;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (id)MP_attributedStringWithEmphasizedTextSeparator:(id)arg1 regularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)stringByLeftPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_commaSeparatedRecipientListWithRecipientCount:(unsigned long long)arg1 prefixForRecipientAtIndex:(id /* block */)arg2 stringForRecipientAtIndex:(id /* block */)arg3 lengthValidationBlock:(id /* block */)arg4;

- (id)mf_copyDisplayableAddressComment;
- (bool)mf_isAttribution;
- (bool)mf_isAttributionPrefix;
- (bool)mf_isForwardSeparator;
- (bool)mf_isHorizontalSeparator;
- (bool)mf_isSignature;
- (bool)mf_isWhitespace;
- (id)mf_substringTruncatedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mf_substringTruncatedToIndex:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)NSStringFromLSInstallPhase:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallState:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallType:(unsigned long long)arg1;

- (id)clean;
- (bool)matches:(id)arg1;
- (bool)matchesString:(id)arg1;

// Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit

- (id)_issueDirectory;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (bool)pu_endsWithFullStopOrEquivalentPunctuationMark;
- (long long)pu_platformAgnosticHash;
- (id)pu_stringByIndentingNewLines;
- (id)pu_stringByRepeating:(long long)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (id)formattedStringForByteCount:(long long)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_ensurePathExtension:(id)arg1;
- (id)sf_URLScheme;
- (bool)sf_isFeedScheme;
- (id)sf_lastPathComponentWithoutZipExtension;
- (id)sf_stringByReplacingLastOccurrenceOfWhitespaceWithANonBreakingSpace;
- (id)sf_stringByReplacingMarkupCharactersWithHTMLEntities;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (unsigned long long)SCN_safeHash;
- (id)scn_stringByReplacingCharactersInRanges:(id)arg1 withStrings:(id)arg2;

// Image: /System/Library/Frameworks/Social.framework/Social

- (unsigned long long)SLTencentWeiboCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (unsigned long long)SLTwitterCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (unsigned long long)SLWeiboCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (bool)hasCaseInsensitiveSuffix:(id)arg1;
- (bool)isTencentWeiboDuplicatePostError;
- (bool)isTwitterDuplicatePostError;
- (bool)isWeiboDuplicatePostError;
- (id)urlEncodedString;

// Image: /System/Library/Frameworks/Twitter.framework/Twitter

- (int)TWTwitterCharacterCountWithShortenedURLLength:(int)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSize:(double)arg3 textSize:(struct CGSize { double x1; double x2; }*)arg4;
- (struct CGSize { double x1; double x2; })_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize { double x1; double x2; })_optimizedSizeWithFont:(id)arg1;
- (id)_ui_secureString;
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(bool)arg2;
- (id)_uikit_unescapedQueryValue;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (id)queryKeysAndValues;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (id)stringByStandardizingWhitespace;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2;

- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;
- (id)un_logDigest;
- (id)un_stringWithMaxLength:(unsigned long long)arg1;
- (unsigned long long)un_unsignedLongLongValue;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (unsigned long long)vs_unsignedLongLongValue;

// Image: /System/Library/Frameworks/WatchKit.framework/WatchKit

- (id)_sp_stringByEncodingIllegalFilenameCharacters;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_axUnit:(unsigned long long)arg1 fromPosition:(long long)arg2 inDirection:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_ax_rangeOfNextUnitWithStartPosition:(long long)arg1 direction:(unsigned long long)arg2 withCharacterSet:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ax_lineFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ax_lineRangeForPosition:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ax_paragraphFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ax_sentenceFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ax_wordFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport

- (unsigned long long)unsignedLongLongValue;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/TTYUtilities.framework/TTYUtilities

- (unsigned long long)unsignedLongLongValue;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)axss_stringByTrimmingToLength:(unsigned long long)arg1 encoding:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (struct USet { }*)_ideographSet;
+ (struct USet { }*)_japaneseLetterSet;

- (bool)_isJapanesePhrase;
- (bool)_isOnlyIdeographs;
- (bool)axContainsString:(id)arg1;
- (bool)axContainsString:(id)arg1 options:(long long)arg2;
- (bool)axIsGenericLanguageCode;
- (bool)axIsLanguageCode;
- (bool)axIsRegionalLanguageCode;
- (id)axLanguageCode;
- (id)axRegionCode;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (id)abEscapeStringForUnichar:(unsigned short)arg1 and:(unsigned short)arg2 advance:(long long*)arg3;
- (id)abStringByRemovingCharactersFromSet:(id)arg1;
- (id)abStringByStrippingControlCharacters;
- (id)abVCardKoshify;
- (id)copyABVCardDataRepresentation;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (long long)IPv4StringCompare:(id)arg1;
- (long long)IPv6StringCompare:(id)arg1;
- (unsigned long long)UTF8ByteCount;
- (bool)isValidEmailFormat;
- (id)prefixStringWithByteCount:(unsigned long long)arg1;
- (id)stringByCapitalizingFirstLetter;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingWhitespace;
- (id)stringByTrimmingLeadingWhitespaceAndNewline;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingTrailingWhitespace;
- (id)stringByTrimmingTrailingWhitespaceAndNewline;
- (id)stringByTrimmingTrailingWhitespaceFromEachLine;

// Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget

- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(bool)arg3;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(bool)arg4;
- (bool)_apwsb_containsEmoji;
- (bool)apw_isEntirelyCharactersInScript:(long long)arg1;
- (bool)apw_isEntirelyCommon;
- (bool)apw_isInScript:(long long)arg1 useLocaleOnly:(bool)arg2;
- (bool)apwsb_isEntirelyCharactersInSet:(struct USet { }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (id)stringByEscapingXMLSpecialCharacters;

// Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService

+ (id)apsStringGUID;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)hexStringFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)hexStringFromData:(id)arg1;

- (id)_af_stringByRemovingPrefixWithLength:(unsigned long long)arg1;
- (id)_af_stringByRemovingSuffix:(id)arg1;
- (bool)_afpreferences_isLanguageCodePrefix;
- (id)_afpreferences_languageCodePrefix;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_SHA256;
- (id)ak_SHA256String;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (bool)_bcs_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_bcs_looksLikeEmailAddress;
- (id)_bcs_stringForcingLeftToRightDirection;
- (id)_bcs_stringWithEnclosingDoubleQuotesRemoved;
- (id)_bcs_trimmedString;
- (id)_bcs_unescapedString;
- (id)_bcs_urlEncodedQueryValue;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary

- (id)bl_md5Hash;
- (id)bl_sha1;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV

- (id)bdv_redactedServerID;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (bool)_validHexChar:(BOOL)arg1;
- (id)fromHex;
- (id)hex;

// Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)ellipsisString;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;

- (id)appendSlashIfNeeded;
- (id)quote;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (id)stringByURLQuoting;
- (id)stringByURLQuotingPaths;
- (id)stringByURLUnquoting;
- (id)stringByXMLUnquoting;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFinalComma;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFirstComma;
- (id)trimWhiteSpace;
- (id)unquote;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)ellipsisString;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;

- (id)CalAddressComment;
- (id)CalSafeHFSPathComponentName;
- (id)CalUncommentedAddress;
- (id)_phoneNumberDetector;
- (id)appendSlashIfNeeded;
- (bool)containsCaseAndDiacriticInsensitive:(id)arg1;
- (bool)containsCaseInsensitive:(id)arg1;
- (id)directionalityIsolatedString;
- (bool)hasMailto;
- (bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;
- (bool)hasPrefixCaseInsensitive:(id)arg1;
- (bool)hasSuffixCaseInsensitive:(id)arg1;
- (bool)hasTel;
- (id)hostFromEmail;
- (bool)isAddressBookURL;
- (bool)isEqualAsURL:(id)arg1;
- (bool)isEqualToStringCaseInsensitive:(id)arg1;
- (bool)isMailURL;
- (bool)isMessagesURL;
- (bool)isPathToAppleScript;
- (bool)isPathToBackupFile;
- (bool)isPathToICalBookmark;
- (bool)isPathToICalData;
- (bool)isPathToICalTruthFile;
- (bool)isPathToVCalData;
- (bool)isPhoneNumber;
- (id)phoneURL;
- (id)quote;
- (id)radarLink;
- (id)removeSlashIfNeeded;
- (bool)resemblesEmailAddress;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)stringAddingMailto;
- (id)stringAddingTel;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (id)stringByExpandingTildeToNonSandboxHome;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLQuoting;
- (id)stringByURLQuotingPaths;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLUnquoting;
- (id)stringRemovingMailto;
- (id)stringRemovingTel;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFinalComma;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFirstComma;
- (id)trimWhiteSpace;
- (id)unquote;
- (id)userFromEmail;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)cam_uppercaseStringWithPreferredLocale;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (id)stringWithPositionalSpecifiersFormat:(id)arg1 arguments:(id)arg2;

- (id)nph_localizedUppercaseString;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)__ck_containsOnlyCharactersFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })__ck_rangeOfSequenceOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)__ck_shouldUseBigEmoji;
- (bool)isAddressBookLabel;
- (id)unformattedPhoneNumber;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_sha1Hash;
- (id)crk_stringByRemovingSuffix:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_clkBlinkerRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_clkBlinkerRangeByBackwardsSearch;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_emptyFilenameAlternativeName;
+ (id)br_pathForDirectory:(unsigned long long)arg1;
+ (id)br_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
+ (id)br_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)br_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(bool)arg4;

- (long long)br_compareToStringForHFS:(id)arg1 isCaseSensitive:(bool)arg2;
- (id)br_displayFilenameWithExtensionHidden:(bool)arg1;
- (const char *)br_fileSystemRepresentation;
- (bool)br_isAbsolutePath;
- (bool)br_isDocumentTooLargeForUpload:(bool)arg1 maxUploadDocumentSize:(long long)arg2;
- (bool)br_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(bool)arg2;
- (bool)br_isExcludedButPreservedAtLogOutWithFilenames:(id)arg1 extensions:(id)arg2;
- (bool)br_isExcludedWithMaximumDepth:(unsigned int)arg1;
- (bool)br_isInPackage;
- (bool)br_isPackageRoot;
- (bool)br_isSideFaultName;
- (bool)br_nameIsRepresentableOnHFS;
- (id)br_pathExtension;
- (id)br_pathOfPackageRoot;
- (id)br_pathRelativeToDirectory:(unsigned long long)arg1;
- (id)br_pathRelativeToPackageRoot;
- (id)br_pathRelativeToPath:(id)arg1;
- (id)br_realpath;
- (id)br_realpathKeepingLastSymlink;
- (id)br_representableDirectoryName;
- (id)br_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)br_sideFaultName;
- (id)br_sideFaultPath;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long*)arg1;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long*)arg1 andPathExtension:(id*)arg2;
- (id)brc_libnotifyPerUserNotificationName;
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)brc_stringByBackslashEscapingCharactersInString:(id)arg1;
- (id)brc_stringByDeletingPathExtension;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (void)_t_brc_removeForcedPackageExtension:(id)arg1;
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneName:(id)arg2 ownerName:(id)arg3 accountID:(id)arg4 salted:(bool)arg5;
+ (void)brc_addForcedPackageExtension:(id)arg1;
+ (id)brc_hexadecimalStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (void)brc_loadForcedPackageExtensions;

- (id)brc_SHA1WithSalt:(id)arg1;
- (id)brc_SHA256;
- (bool)brc_isBlacklistedPackageExtension;
- (bool)brc_isForcedPackageExtension;
- (id)brc_mangledNameFromURLFragment:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplStringByAppendingPathExtension:(id)arg1 fallbackExtension:(id)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

+ (id)cutStringGUID;

- (id)cutStringByResolvingAndStandardizingPath;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_LTRControlCharacters;
+ (bool)_cn_isBlank:(id)arg1;

- (id)_cn_SHA256HashStringWithSalt:(id)arg1;
- (bool)_cn_caseInsensitiveIsEqual:(id)arg1;
- (bool)_cn_containsCharacterInSet:(id)arg1;
- (bool)_cn_containsSubstring:(id)arg1;
- (bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (void)_cn_eachCharacter:(id /* block */)arg1;
- (bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;
- (bool)_cn_hasPrefix:(id)arg1;
- (bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (bool)_cn_hasSuffix:(id)arg1;
- (bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;
- (bool)_cn_isBlank;
- (id)_cn_nameComponentTokens;
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_cn_rangeFromIndex:(unsigned long long)arg1;
- (bool)_cn_requiresPhoneNumberSanitizing;
- (id)_cn_resultWithAllCharacters:(id /* block */)arg1;
- (id)_cn_stringByAddingPercentEscapesIfNecessary;
- (id)_cn_stringByAddingPercentEscapesToEntireURL;
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;
- (id)_cn_stringByNormalizingCase;
- (id)_cn_stringByReplacingStrings:(id)arg1;
- (id)_cn_stringBySanitizingPhoneNumber;
- (id)_cn_tokens;
- (id)_cn_trimmedString;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_URLDestinationID;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1;
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1 pathTag:(id)arg2;
+ (id)CDVStringWithNameSpace:(id)arg1 andName:(id)arg2;
+ (id)CDVStringWithNumberOfSpaces:(unsigned long long)arg1;

- (bool)CDVIsHTTPStatusLineWithStatusCode:(long long)arg1;
- (id)CDVStringByAddingPercentEscapesForHREF;
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;
- (id)CDVStringByAppendingSlashIfNeeded;
- (id)CDVStringByRemovingPercentEscapesForHREF;
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;
- (id)CDVStringByXMLQuoting;
- (id)CDVStringByXMLUnquoting;
- (id)initWithCDVNameSpace:(id)arg1 andName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (long long)ch_occurrencesOfCharactersInSet:(id)arg1 maxCount:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MSMakeUUID;
+ (id)MSStringWithBool:(bool)arg1;
+ (id)MSTempFilePath;

- (id)MSHexData;
- (unsigned long long)MSUniqueID;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (id)parsec_stringByBase64EncodingData:(id)arg1;

- (id)parsec_base64DecodedData;
- (bool)parsec_caseInsensitiveContainsString:(id)arg1;
- (bool)parsec_hasCaseInsensitivePrefix:(id)arg1;
- (bool)parsec_hasCaseInsensitiveSuffix:(id)arg1;
- (bool)parsec_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (bool)parsec_hasPrefix:(id)arg1;
- (bool)parsec_isCaseInsensitiveEqualToString:(id)arg1;
- (int)sf_asButtonAlignment;
- (int)sf_asColumnAlignment;
- (int)sf_asImageAlignment;
- (int)sf_asResultPlacement;
- (int)sf_asTextAlignment;
- (int)sf_cardSectionType;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)cr_lowercaseStringWithStandardLocale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cr_rangeOfAddressDomain;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition

+ (long long)editDistance:(id)arg1 string:(id)arg2;
+ (long long)editDistance:(id)arg1 string:(id)arg2 threshold:(long long)arg3;

- (long long)editDistanceFromString:(id)arg1;
- (long long)editDistanceFromString:(id)arg1 threshold:(long long)arg2;
- (long long)editDistanceFromStringIgnoringSpaces:(id)arg1 threshold:(long long)arg2;
- (bool)isCaseApplicable;
- (bool)isLowercase;
- (bool)isUppercase;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (bool)_caseInsensitiveHasMatchInEnumeration:(id)arg1;
- (id)_firstMatchesForRegularExpression:(id)arg1;
- (id)_firstMatchesForRegularExpressions:(id)arg1;
- (bool)_hasSubstring:(id)arg1;
- (bool)_matchesRegularExpression:(id)arg1;
- (id)_stringByFixingNamePattern:(id)arg1;
- (id)_stringByStrippingLeadingNoise:(id)arg1;
- (id)_stringByStrippingNoiseLeadingNoise:(id)arg1 TrailingNoise:(id)arg2;
- (id)_stringByStrippingTrailingNoise:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (id)sg_deepCopy;

// Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition

- (id)td_stringByStandardizingPath;

// Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit

- (long long)compareToVersion:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_new64ByteGUID;
+ (id)da_newGUID;

- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;
- (id)da_appendSlashIfNeeded;
- (bool)da_hasPrefixCaseInsensitive:(id)arg1;
- (id)da_removeSlashIfNeeded;
- (id)da_stringByAddingPercentEscapesForUsername;
- (id)da_stringByRemovingPercentEscapesForUsername;
- (id)da_stringByURLEscapingPathComponent;
- (id)da_trimWhiteSpace;
- (id)stringByURLQuoting;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV

- (bool)hasMailto;
- (bool)resemblesEmailAddress;
- (id)stringAddingMailto;
- (id)stringRemovingMailto;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV

- (id)prettyStringForDisplayName;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (bool)expectsContent;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;
- (id)stringByConvertingLineEndingsTo:(id)arg1;
- (id)stringByTrimmingNotesJunk;
- (id)stringFormattedForMSVersioning;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP

- (id)ldapHumanReadableStringFromSearchBase;
- (id)ldapSanitizedAddress;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal

- (bool)isSubCalURLString;
- (id)modTagForSubCal;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (id)dd_leadingTextWithNumberOfCharacters:(long long)arg1 beforeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)dd_trailingTextWithNumberOfCharacters:(long long)arg1 afterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions

- (id)escape;

// Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit

- (id)localizedString;

// Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy

- (id)dp_numbersFromCSVString;
- (id)dp_stringsFromCSVString;
- (id)dp_wordRecordsFromCSVString;

// Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation

- (bool)_containsEmoji;
- (void)_enumerateEmojiTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 block:(id /* block */)arg2;
- (bool)_isSingleEmoji;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

- (id)decodeFromPercentEscape;
- (id)decodeHexString;
- (id)encodeToPercentEscape;
- (id)fm_decodeFromPercentEscape;
- (id)fm_decodeHexString;
- (id)fm_encodeToPercentEscape;
- (bool)fm_isNumeric;
- (id)fm_stringByReplacingNonBreakingSpaces;
- (id)fm_wifiToWLAN;
- (bool)isNumeric;
- (id)legacyAllowedCharacterSet;
- (id)wifiToWLAN;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTDataFromBase64String;
- (id)_FTDataFromHexString;

// Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities

- (id)FU_uppercaseStringUsingCurrentLocale:(bool)arg1;
- (id)localizedTerminalOrGateID;

// Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit

- (id)fkMessageCanonicalRawAddress;
- (long long)fkMessageDestinationType;
- (id)fkMessageIDSIdentifier;
- (bool)fkMessageIsIDSIdentifier;
- (bool)fkMessageIsRawAddress;
- (id)fkMessageRawAddress;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)fbs_hasBeenOverridenAlready;
- (void)fbs_setHasBeenOverriddenAlready:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkUUIDString;
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(bool)arg3 isTop:(bool*)arg4;
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;

- (id)_gkArrayByTokenizingString;
- (bool)_gkIsMixedDirection;
- (bool)_gkIsNaturallyRTL;
- (id)_gkLocaleSensitiveUppercaseString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)_gkStringByAddingBidiEmbeddingMarkers;
- (id)_gkStringByEscapingHTMLEntities;
- (id)_gkStringByQuotingWithFormat:(id)arg1;
- (id)_gkStringByUnescapingFromURLQuery;
- (id)_gkTruncationSymbolWithFormat:(id)arg1;
- (id)cacheKeyRepresentation;
- (void)processUTF16CharactersForBidi:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)_gkAttributedStringByApplyingStyle:(id)arg1;
- (id)_gkAttributedStringByApplyingStylesForTags:(id)arg1 untaggedStyle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

+ (id)gs_stringWithFileSystemRepresentation:(const char *)arg1;

- (void)chmod:(unsigned short)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForPid:(int)arg1;
- (id)gs_stringByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (bool)validateGSName:(out id*)arg1;
- (bool)validateGSNameAllowingDot:(bool)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)stringWithStdString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(bool)arg2;

- (id)initWithStdString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(bool)arg2;
- (id)serverFormattedString;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })stdString;

// Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics

- (bool)isAlphaNumeric;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 spacing:(double)arg3;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 spacing:(double)arg3 attributes:(id)arg4;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 withAttributes:(id)arg3;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 spacing:(double)arg2;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 spacing:(double)arg2 attributes:(id)arg3;
- (double)hk_boundingHeightWithWidth:(double)arg1 font:(id)arg2;
- (double)hk_boundingWidthWithHeight:(double)arg1 font:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_formattedPersonNameForFirstName:(id)arg1 lastName:(id)arg2;

- (id)dynamicStringForSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (id)hf_MD5;
- (id)hf_SHA1;
- (id)hf_SHA256;
- (unsigned int)hf_UTF8Length;
- (bool)hf_isEmail;
- (bool)hf_isPhoneNumber;
- (id)hf_stringByCapitalizingFirstWord;
- (id)hf_stringByLowercasingFirstWord;
- (id)hf_stringByTransformingFirstWordUsingBlock:(id /* block */)arg1;
- (id)hf_toHexString:(char *)arg1 length:(unsigned int)arg2;
- (bool)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)stringWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

- (id)generateSHA1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)__im_handleIdentifierRegex;

- (id)__im_IDForHandleIdentifierString;
- (id)__im_handleIdentifiers;
- (id)__im_rangesOfHandleIdentifierStrings;
- (id)idsFormat;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)copyStringGUID;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)generatedRoomNameForGroupChat;
+ (id)randomString;
+ (id)stringGUID;
+ (id)stringGUIDForObject:(id)arg1;

- (long long)_FZBestGuessFZIDType;
- (id)_FZIDFromEmail;
- (id)_FZIDFromPhoneNumber;
- (long long)_FZIDType;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_URIFromBusinessID;
- (id)_URIFromCanonicalizedBusinessID;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedEmail;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromDSID;
- (id)_URIFromEmail;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromPhoneNumber;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })__rangeOfNewlineInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (id)__stringByStrippingControlCharacters;
- (bool)_appearsToBeBusinessID;
- (bool)_appearsToBeDSID;
- (bool)_appearsToBeEmail;
- (bool)_appearsToBePhoneNumber;
- (id)_bestGuessURI;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_imInitWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)_md5Hash;
- (id)_stripFZIDPrefix;
- (id)_stripPotentialTokenURIWithToken:(id*)arg1;
- (bool)hasMobileMeSuffix;
- (unsigned int)hexValue;
- (bool)isDirectory;
- (bool)isEqualToIgnoringCase:(id)arg1;
- (long long)localizedCompareToString:(id)arg1;
- (id)mobileMeDomain;
- (id)pathStringForDisplay;
- (bool)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringByAddingURLEscapes;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)stringByRemovingURLEscapes;
- (id)stringByRemovingWhitespace;
- (id)stringByResolvingAndStandardizingPath;
- (id)stringWithLTREmbedding;
- (id)stripMobileMSuffixIfPresent;
- (id)trimmedString;
- (id)uniqueSavePath;
- (unsigned int)unsignedIntValue;
- (id)urlFromString;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)xct_quotedSwiftStringRepresentation;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)__im_apfsCompatibleFilename;
- (id)__im_engramDataRepresentation;
- (id)__im_filePathWithVariant:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (long long)ik_valueForBooleanAttribute:(id)arg1;

- (bool)ik_attributeBoolValue;
- (id)ik_stringByTrimmingControlChars;

// Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext

- (bool)_ICEnumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;

- (bool)containsDotDotPathComponents;

// Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices

+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (struct USet { }*)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet { }*)_nonIdeographicCharacterSet;

- (bool)_containsCJKSymbolsAndPunctuation;
- (bool)_containsEmoji;
- (bool)_containsHiraganaKatakanaOrBopomofo;
- (bool)_containsIdeographicCharacters;
- (bool)_contentsExclusivelyInCharacterSet:(struct USet { }*)arg1;
- (long long)wordCount;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)decodeFromDER:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(id /* block */)arg2;

- (bool)_lp_hasCaseInsensitivePrefix:(id)arg1;
- (id)_lp_highLevelDomainFromHost;
- (bool)_lp_isEqualIgnoringCase:(id)arg1;
- (bool)_lp_isEqualToAnyIgnoringCase:(id)arg1;
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(bool)arg2;
- (id)_lp_stringForcingLeftToRightDirection;
- (id)_lp_topLevelDomainUsingCFFromComponents:(id)arg1;
- (id)_lp_userVisibleHost;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(bool)arg3;
+ (id)mf_nameExtensions;
+ (id)mf_partialSurnames;
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;

- (void)__mf_firstName:(id*)arg1 middleName:(id*)arg2 lastName:(id*)arg3 extension:(id*)arg4;
- (id)_mf_bestMimeCharset:(id)arg1;
- (id)mf_MD5Digest;
- (id)mf_SHA1Digest;
- (id)mf_addressComment;
- (id)mf_addressCommentPersonNameComponents;
- (id)mf_addressDomain;
- (bool)mf_appearsToBeAnInitial;
- (id)mf_bestMimeCharset;
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (id)mf_copyAddressComment;
- (id)mf_copyIDNADecodedEmailAddress;
- (id)mf_copyIDNAEncodedEmailAddress;
- (id)mf_copyStringByDecodingIDNA;
- (id)mf_copyStringByDecodingIDNAInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mf_copyStringByEncodingIDNA;
- (id)mf_copyStringByEncodingIDNAInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mf_copyUncommentedAddress;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(bool)arg2;
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;
- (id)mf_emailAddressesWithEquivalentDomains;
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;
- (bool)mf_hasSameNamesAs:(id)arg1;
- (bool)mf_isEqualToAddress:(id)arg1;
- (bool)mf_isLegalCommentedEmailAddress;
- (bool)mf_isLegalEmailAddress;
- (const void*)mf_lossyDefaultCStringBytes;
- (id)mf_messageIDSubstring;
- (id)mf_personNameComponents;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfAddressDomain;
- (id)mf_stringByRemovingParentheticals;
- (id)mf_trimCommasSpacesQuotes;
- (id)mf_uncommentedAddress;
- (id)mf_uncommentedAddressRespectingGroups;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCMakeUUID;

- (id)MCAppendDeviceName;
- (id)MCAppendGreenteaSuffix;
- (unsigned int)MCHash;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCHashedIdentifier;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (id)MCRemoveAppExternalVersionIDParameter;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCSHA256DigestWithSalt:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream

+ (id)MSMSUserDirectory;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)disarmFilename:(id)arg1;
+ (id)formattedDiskSpace:(double)arg1;
+ (id)pathComponent:(id)arg1 componentIndex:(unsigned int)arg2;
+ (id)pathComponents:(id)arg1 firstComponentIndex:(unsigned int)arg2 lastComponentIndex:(unsigned int)arg3;
+ (id)shortStyleStringFromDuration:(double)arg1;
+ (id)shortStyleStringFromFrameDuration:(long long)arg1;
+ (id)stringFromDuration:(int)arg1 frameRate:(int)arg2;
+ (id)stringFromDuration:(int)arg1 showTenths:(bool)arg2 frameRate:(int)arg3;
+ (id)stringFromDuration:(int)arg1 showTenths:(bool)arg2 frameRate:(int)arg3 readable:(bool)arg4;
+ (id)stringFromDuration:(int)arg1 showTenths:(bool)arg2 frameRate:(int)arg3 showTimecode:(bool)arg4;
+ (id)stringFromDuration:(int)arg1 showTenths:(bool)arg2 frameRate:(int)arg3 showTimecode:(bool)arg4 readable:(bool)arg5 useShortReadable:(bool)arg6;
+ (id)stringFromDurationInHoursMinutesAndSeconds:(int)arg1 frameRate:(int)arg2;
+ (id)stringFromDurationInSeconds:(long long)arg1 showTenths:(bool)arg2 frameRate:(long long)arg3;
+ (id)stringFromOSErr:(short)arg1;
+ (id)stringFromSeconds:(double)arg1;
+ (id)stringFromSeconds:(double)arg1 showTenths:(bool)arg2;
+ (id)stringFromSeconds:(double)arg1 showTenths:(bool)arg2 readable:(bool)arg3;

- (id)_markupEscapedString:(bool)arg1;
- (id)appendToPathname:(id)arg1;
- (long long)caseInsensitiveLocalizedNumericCompare:(id)arg1;
- (long long)caseInsensitiveLocalizedNumericCompare:(id)arg1;
- (long long)compareLiteral:(id)arg1;
- (long long)compareProjectPathModificationDates:(id)arg1;
- (bool)containsArabicCharacters;
- (bool)containsHebrewCharacters;
- (bool)containsRTLScript;
- (id)displayablePathString;
- (id)fileURL;
- (id)filterErrorDescription;
- (unsigned int)getTrailingCountWithDelimiter:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)htmlEncodedString;
- (bool)imContainsArabic;
- (bool)imContainsEmoji;
- (bool)isCaseInsensitiveEqualToString:(id)arg1;
- (bool)isRTL;
- (unsigned long long)lengthWithComposedCharacters;
- (id)localizedTextForAudioTitle;
- (id)locationValue;
- (id)md5String;
- (long long)numericalCaseInsensitiveCompare:(id)arg1;
- (void)parametersToFitInSize:(struct CGSize { double x1; double x2; })arg1 font:(id)arg2 minPointSize:(float)arg3 maxPointSize:(float)arg4 multiLine:(bool)arg5 actualFont:(id*)arg6 actualSize:(struct CGSize { double x1; double x2; }*)arg7;
- (bool)pathIsInSharedMedia;
- (id)pathToUseToCheckModDate;
- (id)propertyListXMLEncodedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (long long)rangeCompare:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromLocation:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfStringSurroundedBy:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfStringSurroundedBy:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)rangesOfString:(id)arg1;
- (id)rangesOfStringsSurroundedBy:(id)arg1;
- (id)string;
- (id)stringByAbbreviatingAppOrUserSandboxWithTildeInPath;
- (id)stringByCenterTruncatingToCharCount:(int)arg1;
- (id)stringByChangingWhiteSpaceToSpace;
- (id)stringByDeletingPathExtensionInExtensions:(id)arg1;
- (id)stringByIncrementingTrailingCountWithDelimiter:(id)arg1;
- (id)stringByPrefixingPathComponent:(id)arg1;
- (id)stringByRemovingNewlines;
- (id)stringByRemovingPathPrefix:(id)arg1;
- (id)stringByRemovingPrefix:(id)arg1;
- (id)stringByRemovingRedundantWhiteSpace;
- (id)stringByRemovingSingleCharacterWords;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByRemovingTrailingOccurrencesOfCharactersInSet:(id)arg1;
- (id)stringByReplacingOccurancesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingRedundantWhiteSpaceWithSingleSpace;
- (id)stringByReplacingWord:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingWords:(id)arg1 withString:(id)arg2;
- (id)suitableUTF8_XMLString;
- (struct CGSize { double x1; double x2; })textSizeForMaximumSize:(struct CGSize { double x1; double x2; })arg1 font:(id)arg2 paragraphStyle:(id)arg3;
- (id)uniquePath;
- (id)widestWordWithFont:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP

- (id)mf_decodedIMAPMailboxName;
- (id)mf_encodedIMAPMailboxName;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)mf_UUID;
+ (id)mf_messageIDStringWithDomainHint:(id)arg1;
+ (id)mf_stringForMimeTypeFromFileName:(id)arg1;
+ (id)mf_stringFromMimeEnrichedString:(id)arg1 asHTML:(bool)arg2;
+ (id)mf_stringFromMimeRichTextString:(id)arg1 asHTML:(bool)arg2;
+ (id)mf_stringRepresentationForBytes:(long long)arg1;
+ (id)mf_stringWithAttachmentCharacter;

- (id)mf_SQLEscapedString;
- (id)mf_betterStringByResolvingSymlinksInPath;
- (id)mf_canonicalizedAbsolutePath;
- (bool)mf_caseInsensitiveIsEqualToString:(id)arg1;
- (bool)mf_containsSubstring:(id)arg1;
- (bool)mf_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (id)mf_convertFromFlowedText:(unsigned int)arg1 visuallyEmpty:(bool*)arg2;
- (id)mf_fileSystemString;
- (bool)mf_isSubdirectoryOfPath:(id)arg1;
- (unsigned long long)mf_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)mf_makeDirectoryWithMode:(int)arg1;
- (unsigned long long)mf_nextWordFromIndex:(unsigned long long)arg1 forward:(bool)arg2;
- (id)mf_prefixToString:(id)arg1;
- (id)mf_stringByAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (id)mf_stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)mf_stringByEscapingForXML;
- (id)mf_stringByEscapingHTMLCodes;
- (id)mf_stringByEscapingSQLLikeSpecialCharactersWithEscapeCharater:(unsigned short)arg1;
- (id)mf_stringByExpandingTildeWithSharedResourcesDirectoryInPath;
- (id)mf_stringByLocalizingReOrFwdPrefix;
- (id)mf_stringByReallyAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (id)mf_stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)mf_stringByTrimmingWhitespaceAndNewlineCharacters;
- (id)mf_stringForQuotingWithCharacter:(BOOL)arg1;
- (id)mf_stringWithNoExtraSpaces;
- (unsigned int)mf_subjectPrefixLength;
- (id)mf_uniqueFilenameWithRespectToFilenames:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;

- (const char *)FSR;
- (id)MBAppendGreenteaSuffix;
- (id)backupIDByAddingCKPrefix;
- (id)backupIDByRemovingCKPrefix;
- (bool)pathComponentExistsInSet:(id)arg1;
- (void)splitIntoBase:(int*)arg1 andRelativePath:(const char **)arg2;
- (id)stringByAppendingSlash;

// Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;

- (bool)containsDotDotPathComponents;

// Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage

+ (id)hexStringWithData:(id)arg1;

- (id)initHexStringWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)_mtStringByRemovingNotificationPrefixes;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (id)MLSortString;
- (id)MLSortStringWithPrefix;
- (id)_copyWithoutInsignificantPrefix:(bool)arg1 andCharacters:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeWithoutInsignificantPrefix:(bool)arg1 andCharacters:(bool)arg2;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)sanitizedString;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)nnmk_base64String;
- (id)nnmk_sanitizedFileNameString;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (bool)isAllCaps;
- (bool)npkHasContent;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)imageWithFont:(id)arg1;
- (id)imageWithFont:(id)arg1 border:(unsigned long long)arg2 color:(id)arg3 cropped:(bool)arg4;
- (id)imageWithFont:(id)arg1 border:(unsigned long long)arg2 cropped:(bool)arg3;
- (bool)ntk_containsOnlyValidMonogramCharacters;
- (bool)ntk_isValidMonogram;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (bool)_componentsWillUseShortFormat:(id)arg1;
+ (id)_frequencyStringForComponents:(id)arg1 forRange:(bool)arg2 forceShort:(bool)arg3;
+ (long long)_navigation_abbreviatedFromatterUnitsStyleForLocale:(id)arg1;
+ (id)_navigation_addPrefixToInstructions:(id)arg1 isServer:(bool)arg2 isSpoken:(bool)arg3;
+ (bool)_navigation_compareServerInstructions:(id)arg1 withClientInstructions:(id)arg2;
+ (id)_navigation_descriptionForFrequencyMinuteValue:(long long)arg1;
+ (id)_navigation_descriptionForFrequencyRangeWithMinFrequency:(long long)arg1 maxFrequency:(long long)arg2;
+ (id)_navigation_formatFloatForPrintedDistance:(double)arg1;
+ (id)_navigation_formattedDescriptionForFrequency:(id)arg1;
+ (id)_navigation_formattedStringForFloat:(double)arg1;
+ (id)_navigation_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(bool)arg2;
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2;
+ (id)_navigation_formattedStringForInteger:(long long)arg1;
+ (id)_navigation_formattedStringForPriceValue:(double)arg1 currencyCode:(id)arg2;
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2;
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(bool)arg3;
+ (id)_navigation_languageDirectionStringWithFormat:(id)arg1;
+ (id)_navigation_localizedStringForDistance:(double)arg1 context:(long long)arg2 extraDetail:(bool)arg3;
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6;
+ (bool)_navigation_logIfContainsVariables:(id)arg1;
+ (void)_navigation_logMismatchBetweenServerInstruction:(id)arg1 clientInstruction:(id)arg2;
+ (id)_navigation_overridenTokenForToken:(id)arg1 overrideVariables:(id)arg2;
+ (id)_navigation_pointerDescription:(id)arg1;
+ (id)_navigation_replacementForFormatToken:(id)arg1 abbreviatedUnits:(bool)arg2 detail:(long long)arg3 spoken:(bool)arg4 overrideVariables:(id)arg5;
+ (id)_navigation_selectInstructionWithServerString:(id)arg1 isSpoken:(bool)arg2 clientBlock:(id /* block */)arg3;
+ (id)_navigation_selectInstructionWithServerStringArray:(id)arg1 isSpoken:(bool)arg2 clientBlock:(id /* block */)arg3;
+ (id)_navigation_stringForDistance:(double)arg1 formatter:(id)arg2 locale:(id)arg3;
+ (id)_navigation_stringForExpectedTravelTime:(double)arg1 dateUnitStyle:(long long)arg2;
+ (id)_navigation_stringForServerFormattedString:(id)arg1;
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(bool)arg2 detail:(long long)arg3 spoken:(bool)arg4 overrideVariables:(id)arg5;
+ (id)_navigation_stringWithAltitude:(double)arg1 accuracy:(double)arg2;
+ (id)_navigation_stringWithAltitudeUnits;
+ (id)_navigation_stringWithDirection:(double)arg1 abbreviated:(bool)arg2;
+ (id)_navigation_stringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 abbreviated:(bool)arg2;
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_stringWithSpeed:(double)arg1;
+ (id)_navigation_stringWithSpeedUnits;
+ (id)_navigation_stringWithTime:(id)arg1;
+ (id)_navigation_stringWithTimeStampValues:(id)arg1;

- (bool)_navigation_containsVariables;
- (unsigned long long)_navigation_distanceLevenshtein:(id)arg1;
- (bool)_navigation_isCJK;
- (bool)_navigation_isEqualToString:(id)arg1;
- (id)_navigation_sanitizedStringForDisplayInHTML;
- (id)_navigation_stringByEscapingHTML;
- (id)_navigation_stringByMakingPhonetic;
- (id)_navigation_stringByMarkingAsAddress;
- (id)_navigation_stringByMarkingAsNavigationText;
- (id)_navigation_stringByMarkingAsNormalText;
- (id)_navigation_stringByReplacingNewLinesWithString:(id)arg1;
- (id)_navigation_stripDebugPrefix;
- (id)_navigation_stripTagsFromSpokenString;
- (id)_navigation_stripVariablesFromString;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

- (bool)naui_containsCJKScripts;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_string:(id /* block */)arg1;
+ (bool)fc_string:(id)arg1 isEqualToString:(id)arg2;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)stringWithValue:(id)arg1;

- (id)_FCCKPIdentifierWithType:(int)arg1;
- (bool)fc_hasArticleIDPrefix;
- (bool)fc_hasTagIDPrefix;
- (id)fc_lowerCaseStringByTrimmingWhiteSpace;
- (id)fc_lowercaseTokensWithMinimumLength:(unsigned long long)arg1;
- (id)fc_numberFollowingString:(id)arg1;
- (id)fc_stringByMultiplyingStringByCount:(unsigned long long)arg1;
- (id)fc_stringByPrefixingLinesWithString:(id)arg1;
- (id)fc_stringByRemovingPunctuation;
- (id)fc_stringByReplacingOccurrencesOfStrings:(id)arg1 withString:(id)arg2;
- (id)fc_stringByReplacingPrefix:(id)arg1 withString:(id)arg2;
- (unsigned long long)fc_unsignedLongLongValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)tokenizedLowerCaseStringWithMinimumLength:(unsigned long long)arg1;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout

+ (id)nfl_attributesLookup;
+ (id)nfl_fontForFeedHeaderType:(long long)arg1;
+ (id)nfl_fontLookup;
+ (double)nfl_leadingForFeedHeaderType:(long long)arg1;
+ (bool)nfl_shouldTitlecaseForFeedHeaderType:(long long)arg1;
+ (double)nfl_trackingForFeedHeaderType:(long long)arg1;

- (id)nfl_attributedStringForHeaderType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

- (id)nf_sha1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (void)enumerateContentLineRangesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateParagraphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)ic_sanitizedFilenameString;
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_substringFromIndex:(unsigned long long)arg1;
- (id)ic_substringToIndex:(unsigned long long)arg1;
- (id)ic_substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ic_trimmedString;
- (id)ic_whitespaceAndNewlineCoalescedString;
- (unsigned long long)lengthOfLongestLine;
- (id)md5;
- (unsigned long long)numberOfLines;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 contentEnd:(unsigned long long*)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)dictionaryFromQueryComponents;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)stringByDecodingURLFormat;
- (id)stringByEncodingURLFormat;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth

- (id)oauth_urlEncodedString;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)gsu_UUIDString;
+ (id)gsu_formattedStringWithDouble:(double)arg1;
+ (id)gsu_tokenWithLength:(unsigned long long)arg1;
+ (id)stringWithCsString:(const struct CsString { int (**x1)(); unsigned short *x2; unsigned int x3; unsigned int x4; }*)arg1;
+ (id)stringWithOcText:(const struct OcText { int (**x1)(); int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; char *x7; bool x8; }*)arg1;
+ (id)stringWithWideCString:(int*)arg1;
+ (id)tc_mapString:(id)arg1;
+ (bool)tc_skipString:(id)arg1;
+ (id)tc_stringWithXmlString:(const char *)arg1;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(bool)arg3;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(bool)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tsu_indentStringWithLevel:(unsigned long long)arg1;
+ (id)tsu_numberSymbols;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(bool)arg3;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_stringWithXMLString:(const char *)arg1;

- (id)_copyCsvRows:(unsigned long long*)arg1 usingDelimiter:(id)arg2 columnCountIsConstant:(bool*)arg3;
- (int*)cWideString;
- (id)copyCsvRows:(unsigned long long*)arg1;
- (void)copyToCsString:(struct CsString { int (**x1)(); unsigned short *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)copyToOcText:(struct OcText { int (**x1)(); int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; char *x7; bool x8; }*)arg1;
- (void)copyToOcText:(struct OcText { int (**x1)(); int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; char *x7; bool x8; }*)arg1 encoding:(int)arg2;
- (id)dataUsingWordEncoding:(int)arg1;
- (int)fontTypeForCharacter:(unsigned short)arg1 isControl:(bool*)arg2;
- (id)getDataUsingOfficeCryptographicEncoding;
- (unsigned long long)gsu_crc32WithInterval:(unsigned long long)arg1;
- (id)gsu_realpath;
- (id)gsu_singleLineForLog;
- (id)gsu_splitNumParts:(unsigned long long)arg1 delimiter:(id)arg2;
- (id)gsu_splitWithoutLastEmptyEntryWithDelimiter:(id)arg1 isEndWithDelimiter:(bool*)arg2;
- (id)gsu_stripTrailingChars:(BOOL)arg1;
- (id)gsu_stripTrailingSlashesIfPresent;
- (long long)gsu_uInt64Value:(unsigned long long*)arg1;
- (unsigned long long)gsu_unsignedIntegerValue;
- (id)initWithCsString:(const struct CsString { int (**x1)(); unsigned short *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)initWithOcText:(const struct OcText { int (**x1)(); int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; char *x7; bool x8; }*)arg1;
- (id)initWithWideCString:(int*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })oi_rangeOfCharactersFromSet:(id)arg1 index:(int)arg2;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2 bold:(bool)arg3 italic:(bool)arg4;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tc_componentsSeparatedByWhitespace;
- (bool)tc_doesURLHostContainWhitespace;
- (id)tc_escapedFragment;
- (id)tc_escapedPath;
- (int)tc_fontTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 forXML:(bool)arg3;
- (id)tc_initFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 ns:(const char *)arg2 attributeName:(const char *)arg3;
- (id)tc_initFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 nsWithFallbackNs:(id)arg2 attributeName:(const char *)arg3;
- (id)tc_initWithContentOfXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)tc_initWithValueOfXmlAttribute:(struct _xmlAttr { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlAttr {} *x7; struct _xmlAttr {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; int x11; void *x12; }*)arg1;
- (id)tc_initWithXmlString:(const char *)arg1;
- (id)tc_initialsFromAuthorName;
- (bool)tc_isEqualToXmlString:(const char *)arg1;
- (int)tc_languageTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)tc_startsWithString:(id)arg1;
- (const char *)tc_xmlString;
- (id)tsu_UTIFilenameExtension;
- (long long)tsu_compareToVersionString:(id)arg1;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (bool)tsu_containsSubstring:(id)arg1;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (bool)tsu_customFormatIntegerTokenUsesSeparator;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (id)tsu_encodeStringBase64;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)tsu_escapeForIcuRegex;
- (id)tsu_escapeXML;
- (id)tsu_firstKey;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (bool)tsu_isCJKString;
- (bool)tsu_isChildOfPath:(id)arg1;
- (bool)tsu_isDescendantOfPath:(id)arg1;
- (bool)tsu_isEqualToString:(id)arg1;
- (bool)tsu_isLegalEmailAddress;
- (bool)tsu_isNumberFormatPattern;
- (bool)tsu_isSpecialCustomNumberFormatToken;
- (bool)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_lastKey;
- (id)tsu_md5Hash;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (bool)tsu_pathConformsToUTI:(id)arg1;
- (bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (id)tsu_pathUTI;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(bool)arg1;
- (id)tsu_sha256HexHashString;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringByExpandingTableFormatting;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(bool)arg2;
- (id)tsu_stringWithRealpath;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (id)tsu_uncommentedAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_unescapeXML;

// Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)decodeHexadecimal;
- (id)pk_capitalizedStringForPreferredLocale;
- (id)pk_lowercaseStringForPreferredLocale;
- (id)pk_uppercaseAttributedString;
- (id)pk_uppercaseFirstStringForLocale:(id)arg1;
- (id)pk_uppercaseFirstStringForPreferredLocale;
- (id)pk_uppercaseStringForPreferredLocale;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)pr_hexStringWithData:(id)arg1;

- (id)pr_SHADigest;
- (id)pr_numericValue;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

+ (id)normalizeString:(id)arg1;

- (id)sha1HashData;
- (id)sha1HashString;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)generateUUID;
+ (id)normalizeString:(id)arg1;

- (id)clsBetterComponentsSeparatedByCharactersInSet:(id)arg1;
- (id)indentBy:(unsigned long long)arg1;
- (id)sha1HashData;
- (id)sha1HashString;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

+ (id)generateUUID;
+ (id)normalizeString:(id)arg1;

- (id)sha1HashData;
- (id)sha1HashString;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;
- (id)sha1HashData;
- (id)sha1HashString;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (id)setterName;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_stringByReplacingPathExtension:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)containsDigits;
- (long long)digits;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })px_firstLetterRange;
- (bool)px_hasPrefixIgnoringCaseAndDiacritics:(id)arg1;
- (bool)px_hasStringIgnoringCaseAndDiacritics:(id)arg1;
- (long long)px_platformAgnosticHash;
- (id)px_stringByApplyingCapitalization:(long long)arg1;
- (id)px_stringByIndentingNewLines;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfDigits;
- (id)stringByRemovingDigits;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (long long)compareVersionString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (id)ICCIDString;
- (id)IMEIString;

// Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharactersFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

- (id)_pb_fixCase:(bool)arg1;
- (id)camelCase;
- (id)intern;
- (bool)isObjcReservedWord;
- (id)pascalCase;
- (id)plural;
- (id)stripQuotes;

// Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal

- (id)qp_normalize;
- (id)qp_normalizeLikeParsec;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)queryStringForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit

- (bool)consistsOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2;
- (id)lowercaseFirstWordString;
- (id)stringByEscapingXMLEntities;
- (id)stringByUnescapingXMLEntities;
- (id)uppercaseFirstWordString;

// Image: /System/Library/PrivateFrameworks/SOS.framework/SOS

+ (id)stringWithPositionalSpecifiersFormat:(id)arg1 arguments:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(id /* block */)arg2;

- (bool)safari_containsInteriorWhitespace;
- (bool)safari_containsPeriodOrHomoglyphForPeriod;
- (bool)safari_hasCaseInsensitivePrefix:(id)arg1;
- (bool)safari_hasCaseInsensitiveSuffix:(id)arg1;
- (bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (bool)safari_hasPrefix:(id)arg1;
- (id)safari_highLevelDomainFromHost;
- (bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;
- (bool)safari_isCaseInsensitiveEqualToString:(id)arg1;
- (bool)safari_isSpecialFolderRecordName;
- (id)safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(bool)arg2 simplifiedStringOffset:(unsigned long long*)arg3;
- (id)safari_stringByTrimmingWhitespace;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_localizedStringFromComponents:(id)arg1 usingConjunctionForFinalJoiner:(bool)arg2;
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringAsHexWithData:(id)arg1;
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2 nullStringPolicy:(long long)arg3;
+ (id)safari_stringWithUTF8Bytes:(const void*)arg1 length:(unsigned long long)arg2;

- (id)safari_base64DecodedData;
- (id)safari_bestLanguageTag;
- (id)safari_bestURLForUserTypedString;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (id)safari_containedURLs;
- (unsigned long long)safari_countOfString:(id)arg1;
- (id)safari_domainFromHost;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(id /* block */)arg1;
- (id)safari_fixedStringByExpandingTildeInPath;
- (bool)safari_hasDirectionalPrefix;
- (bool)safari_isJavaScriptURLString;
- (bool)safari_isPathExtensionAllowedForAnalytics;
- (bool)safari_isVisualDuplicateOfURLString:(id)arg1;
- (id)safari_md5Hash;
- (id)safari_normalizedParsecInputString;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_scriptIfJavaScriptURLString;
- (id)safari_sha256Hash;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
- (id)safari_stringByRemovingDirectionalPrefix;
- (id)safari_stringByRemovingExcessWhitespace;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_stringByRemovingWwwDotPrefix;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (id)safari_userVisibleURL;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)stringWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)stringWithDollarCode:(id)arg1;

- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long*)arg2;
- (bool)containsAttachmentCharSet;
- (id)contentsOfEmbeddedCommand:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })enclosingSentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)fourCharCodeValue;
- (bool)hasMultipleWordsWithLocaleName:(const char *)arg1 ignorePunctuation:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextWordFromPosition:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })previousWordFromPosition:(long long)arg1;
- (id)scrc_composedCharacterAtIndex:(unsigned long long)arg1;
- (id)scrc_composedCharacterEnumerator;
- (bool)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (bool)scrc_containsOnlyOneGlyph;
- (unsigned char)scrc_countNumberOfGlyphs;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_encodeUnicodeForKVO;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceBreakInDirection:(bool)arg1 fromIndex:(unsigned long long)arg2 skipCurrent:(bool)arg3;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByTrimmingEmptySpaceEdges;
- (id)stringByTruncatingToWordAtIndex:(unsigned long long)arg1 addElipses:(bool)arg2;
- (id)stringWithMathIndicators;
- (id)stringWrappedInMathMLTag:(id)arg1;
- (id)stringWrappedInMathMLTag:(id)arg1 withAttributes:(id)arg2;
- (id)threadDescription;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

- (long long)_brailleTableCompare:(id)arg1;
- (id)_illegalCharacterSet;
- (long long)_indexAdjustedForWhitespace:(long long)arg1;
- (id)_legalWhiteSpaceSet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsRangeForCFRange:(struct { long long x1; long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeIsolatingIllegalCharacters:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forwards:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordAfterWordAtIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordBeforeWordAtIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordContainingIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (id)sp_escapedStringForSearchQuery;
- (id)sp_queryOptionsForSearchQueryWithPrimaryLanguage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)sxaxAttributedStringWithLowPitchPrefix:(id)arg1;
- (id)sxaxLowPitchAttributedString;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

- (id)SHA256;
- (id)_cf_camelCase;
- (id)_cf_fixCase:(bool)arg1;
- (bool)containsString:(id)arg1;
- (bool)containsString:(id)arg1 ignoringCase:(bool)arg2;
- (long long)messageAttributeEnum;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (const char *)siriCoreSQLiteValue_textRepresentation;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriUIAttributedStringWithSubscriptAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 font:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)generateUUID;
+ (id)mimeBoundary;
+ (id)mimeCloser;
+ (id)mimePart:(id)arg1 forName:(id)arg2;
+ (id)multipartMIMEContentType;
+ (id)normalizeString:(id)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)upperBoundString:(id)arg1;

- (id)firstline;
- (id)hmacSha1Hash:(id)arg1;
- (id)javaScriptEscapedString;
- (id)md5Hash;
- (id)md5HashString;
- (id)pathRelativeTo:(id)arg1;
- (id)sha1HashData;
- (id)sha1HashString;
- (id)stringByAddingPercentEscapes;
- (id)stringByAddingPercentEscapesForURLPath;
- (id)stringByCapitalizingFirstCharacter;
- (id)stringByDeletingTrailingSlash;
- (id)stringByReplacingPercentEscapes;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (long long)compareNumerically:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight

- (id)sp_stringByStandardizingSuggestion;
- (id)sp_stringByStandardizingSuggestion:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)escapedStringForSearchQuery;
- (id)queryOptionsForSearchQueryWithPrimaryLanguage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)fileCacheStableDataRepresentation;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)sbs_stringFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sbs_cgRectValue;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (id)sbui_rangesOfEmojiTokens:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(bool)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(bool)arg4;
- (bool)_isEntirelyCharactersInScript:(long long)arg1;
- (bool)_isEntirelyCommon;
- (bool)_isInScript:(long long)arg1 useLocaleOnly:(bool)arg2;
- (bool)isNewline;
- (bool)isSingleCharacterAndMemberOfSet:(id)arg1;
- (bool)sb_containsEmoji;
- (bool)sb_isEntirelyCharactersInSet:(struct USet { }*)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)numberFromHexDigits;

// Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator

- (id)maximumLogLevelString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (unsigned long long)numberForString:(id)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (id)regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(bool)arg3;
+ (id)stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)tsp_stringForDigest:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsp_stringWithExtensionFieldComponent:(unsigned int)arg1;

- (int)contentsScript;
- (int)contentsScriptInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isAllWhitespaceInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 includePreviousWord:(bool)arg3;
- (id)replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (id)stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 searchOptions:(unsigned long long)arg3;
- (id)stringByNormalizingParagraphBreaks;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 replacementCount:(unsigned long long*)arg5;
- (id)tsp_stringByAppendingExtensionFieldComponent:(unsigned int)arg1;
- (unsigned int)utf32CharacterAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(bool)arg3;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)numberSymbols;
+ (id)stringWithSqlStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (id)tsu_listSeparator;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(bool)arg3;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_stringWithXMLString:(const char *)arg1;

- (void)appendJsonStringToString:(id)arg1;
- (bool)bindToSqlStatement:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 error:(id*)arg3;
- (bool)containsPercentEscapes;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (bool)customFormatIntegerTokenUsesSeparator;
- (id)digitPlaceholderStringInDigitToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;
- (id)initWithSqlStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
- (bool)isNumberFormatPattern;
- (bool)isSpecialCustomNumberFormatToken;
- (bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
- (unsigned long long)numberOfDigitsInCustomNumberFormatDecimalToken;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (id)prefixOfNumberFormatSubpattern;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (id)stringByInsertingFormatGroupingSeparators;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)suffixOfNumberFormatSubpattern;
- (id)tsu_UTIFilenameExtension;
- (struct CGSize { double x1; double x2; })tsu_boundingSizeWithFont:(id)arg1;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (bool)tsu_containsSubstring:(id)arg1;
- (id)tsu_encodeStringBase64;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)tsu_escapeForIcuRegex;
- (id)tsu_escapeXML;
- (id)tsu_firstKey;
- (bool)tsu_isChildOfPath:(id)arg1;
- (bool)tsu_isDescendantOfPath:(id)arg1;
- (bool)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_lastKey;
- (id)tsu_md5Hash;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (bool)tsu_pathConformsToUTI:(id)arg1;
- (bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (id)tsu_pathToRelativeComponentPath:(id)arg1;
- (id)tsu_pathUTI;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)tsu_stringByAddingCSVEscapes;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringByExpandingTableFormatting;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(bool)arg2;
- (id)tsu_stringWithRealpath;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToIndex:(unsigned long long)arg1;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (id)tsu_unescapeXML;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(bool)arg3;

- (id)tv_MD5String;
- (id)tv_SHA256String;
- (id)tv_filenameSafeString;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

- (id)nph_localizedUppercaseString;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)IDSFormattedDestinationID;
- (id)LTRString;
- (id)RTLString;
- (bool)destinationIdIsCallControlCode;
- (bool)destinationIdIsEmailAddress;
- (bool)destinationIdIsPhoneNumber;
- (id)formattedDisplayID;
- (id)normalizedDestination;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (struct USet { }*)_bopomofoSet;
+ (struct USet { }*)_bopomofoToneSet;
+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (struct USet { }*)_fullwidthLettersAndNumbersSet;
+ (struct USet { }*)_fullwidthLettersAndSymbolsSet;
+ (struct USet { }*)_hiraganaSet;
+ (struct USet { }*)_ideographSet;
+ (struct USet { }*)_japaneseLetterSet;
+ (struct USet { }*)_nonFullwidthLettersAndNumbersSet;
+ (struct USet { }*)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet { }*)_nonHiraganaOrKatakanaSet;
+ (struct USet { }*)_nonIdeographicCharacterSet;
+ (struct USet { }*)_nonJapaneseLetterSet;
+ (struct USet { }*)_nonKatakanaOrKanjiSet;
+ (bool)_string:(id)arg1 matchesString:(id)arg2;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)stringWithUnichar:(unsigned int)arg1;

- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_containsBopomofoOnly;
- (bool)_containsBopomofoToneOnly;
- (bool)_containsCJKScriptsOnly;
- (bool)_containsCJKSymbolsAndPunctuation;
- (bool)_containsCJScripts;
- (bool)_containsCJScriptsOnly;
- (bool)_containsEmoji;
- (bool)_containsEmojiOnly;
- (bool)_containsFullwidthLettersAndNumbers;
- (bool)_containsFullwidthLettersAndNumbersOnly;
- (bool)_containsFullwidthLettersAndSymbolsOnly;
- (bool)_containsHiraganaKatakanaOrBopomofo;
- (bool)_containsHiraganaOnly;
- (bool)_containsHiraganaOrKatakana;
- (bool)_containsIdeographicCharacters;
- (bool)_containsIdeographsOrBopomofoOnly;
- (bool)_containsJapanese;
- (bool)_containsJapaneseOnly;
- (bool)_containsKatakanaOrKanji;
- (bool)_containsSubstring:(id)arg1;
- (bool)_contentsExclusivelyInCharacterSet:(struct USet { }*)arg1;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (bool)_endsSentence;
- (void)_enumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned short)_firstChar;
- (id)_firstGrapheme;
- (unsigned int)_firstLongCharacter;
- (unsigned long long)_graphemeCount;
- (unsigned long long)_indexFromStartingIndex:(unsigned long long)arg1 byIncrementingComposedCharacterSequenceCount:(unsigned long long)arg2;
- (bool)_isDelete;
- (bool)_isIdeographicGlyphs;
- (bool)_isLeftAssociative;
- (bool)_isModifierSymbol;
- (bool)_isNaturallyRTL;
- (bool)_isNewlineOrReturn;
- (bool)_isOnlyIdeographs;
- (bool)_isPlainSpace;
- (bool)_isSpace;
- (bool)_isSpaceOrReturn;
- (bool)_isTripledPunctuation;
- (id)_lastGrapheme;
- (unsigned int)_lastLongCharacter;
- (bool)_looksLikeEmailAddress;
- (bool)_looksLikeNumberInput;
- (bool)_looksLikeURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfLongCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (void)_reverseEnumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (bool)_shouldBePaddedWithSpaces;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByComposingDiacriticsLogicalOrder:(bool)arg1 allowedCharacters:(id /* block */)arg2;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (id)_stringByDeletingInteriorSentences;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer { }*)arg1;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(bool)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(bool)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingPrecedingLines;
- (id)_stringByTrimmingSuccedingLines;
- (bool)containsSubstring:(id)arg1;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (bool)endsSentence;
- (bool)isDelete;
- (bool)isLeftAssociative;
- (bool)isNaturallyRTL;
- (bool)isNewlineOrReturn;
- (bool)isPlainSpace;
- (bool)isSpace;
- (bool)isSpaceOrReturn;
- (bool)isTripledPunctuation;
- (bool)looksLikeEmailAddress;
- (bool)looksLikeNumberInput;
- (bool)looksLikeURL;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)stringByTrimmingLastCharacter;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (bool)TI_hasTruePrefix:(id)arg1;
- (bool)TI_hasTrueSuffix:(id)arg1;
- (unsigned short*)characters;
- (id)longestCommonSubstring:(id)arg1 backwards:(bool)arg2;
- (id)stringByRemovingPunctuationAndExplicitWhitespaces:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (id)IPASpeechPhonemes;
- (void)setIPASpeechPhonemes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (void)setShowsControlCharacters:(bool)arg1;
+ (void)setShowsInvisibleCharacters:(bool)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (void)setUsesFontLeading:(bool)arg1;
+ (void)setUsesScreenFonts:(bool)arg1;
+ (bool)showsControlCharacters;
+ (bool)showsInvisibleCharacters;
+ (long long)typesetterBehavior;
+ (bool)usesFontLeading;
+ (bool)usesScreenFonts;

- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAttributes:(id)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithAttributes:(id)arg1;
- (id)stringByStrippingLeadingAndTrailingWhitespace;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

+ (id)uns_stringWithDigestOfSHA1Hash:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (bool)nc_isFirstPartyIdentifier;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id)_vk_internedString;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_stringWithPersistentID:(long long)arg1;

- (long long)rc_persistentIDValue;
- (id)rc_stringByReplacingBreakingWithNonBreakingSpaces;

// Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI

- (bool)_caseInsensitiveHasMatchInEnumeration:(id)arg1;
- (id)_firstMatchesForRegularExpression:(id)arg1;
- (id)_firstMatchesForRegularExpressions:(id)arg1;
- (bool)_hasSubstring:(id)arg1;
- (bool)_matchesRegularExpression:(id)arg1;
- (id)_stringByFixingNamePattern:(id)arg1;
- (id)_stringByStrippingLeadingNoise:(id)arg1;
- (id)_stringByStrippingNoiseLeadingNoise:(id)arg1 TrailingNoise:(id)arg2;
- (id)_stringByStrippingTrailingNoise:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (unsigned long long)wlk_unsignedLongLongValue;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

+ (id)stringWithFormat:(id)arg1 andArguments:(id)arg2;

- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 fontColor:(id)arg4 shadowColor:(id)arg5;
- (void)drawWithDegreeAtPoint:(struct CGPoint { double x1; double x2; })arg1 font:(id)arg2 degreeFont:(id)arg3 degreeOffset:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })sizeWithDegreeWithFont:(id)arg1 degreeFont:(id)arg2 degreeOffset:(struct CGSize { double x1; double x2; })arg3;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)_wb_stringByDeletingTrailingSlash;
- (id)_wb_stringByStandardizingDAVServerID;
- (bool)_webBookmarks_hasCaseInsensitivePrefix:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

+ (id)WF_ignorableCharacterSet;
+ (id)WF_stringFromArray:(id)arg1;

- (bool)WF_containsString:(id)arg1;
- (bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;
- (bool)WF_containsWord:(id)arg1;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (long long)WF_numericCompare:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })WF_rangeOfWord:(id)arg1;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)WF_stringByRemovingWord:(id)arg1;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)WF_stringWithMostSignificatDomainPart;
- (bool)_isIPv4DomainAddress;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_stringWithData:(id)arg1 textEncodingName:(id)arg2;
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;
+ (id)_webkit_localStorageDirectoryWithBundleIdentifier:(id)arg1;

- (id)_web_bestURLForUserTypedString;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (id)_web_decodeHostName;
- (id)_web_encodeHostName;
- (bool)_web_isUserVisibleURL;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_possibleURLsForForUserTypedString:(bool)arg1;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (id)_web_stringByStrippingReturnCharacters;
- (id)_webkit_decodeHostName;
- (id)_webkit_encodeHostName;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (bool)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (bool)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (bool)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (bool)_webkit_looksLikeAbsoluteURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_webkit_rangeOfURLScheme;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (id)_webkit_stringByTrimmingWhitespace;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (bool)webui_isConfigProfileMIMEType;

// Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit

+ (id)wl_uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

- (id)wl_sqlIDComponentsSeparatedByString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (bool)isEmpty;
- (bool)isValidIPv4Address;
- (bool)isValidSubnetMask;

// Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper

- (id)md5;
- (id)md5;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)_ICSStringForParameterQuotedValue;
- (id)_ICSStringForParameterValue;
- (id)_ICSStringForProperyValue;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

- (id)stringWithNonBreakingSpaces;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)copyUTF8StringOfLength:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(bool)arg3;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned int)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)sfu_numberSymbols;
+ (id)tsce_stringWithCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
+ (id)tsce_stringWithCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 stickyBits:(unsigned char)arg2;
+ (id)tsce_stringWithCellRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 stickyBits:(unsigned char)arg2;
+ (id)tsce_stringWithSignedCellID:(struct { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; })arg1 stickyBits:(unsigned char)arg2;
+ (id)tsk_normalizedDisplayName:(id)arg1;
+ (id)tsk_regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
+ (id)tsp_stringWithProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(bool)arg3;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(bool)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(bool)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;
+ (id)tsu_numberSymbols;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(bool)arg3;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithSqlStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(bool)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;

- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (bool)customFormatIntegerTokenUsesSeparator;
- (id)digitPlaceholderStringInDigitToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (bool)isSpecialCustomNumberFormatToken;
- (bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (unsigned int)numberOfDigitsInCustomNumberFormatDecimalToken;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (id)ptsce_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)sfu_createRangesOfEscapedCharactersInNumberFormatPattern;
- (id)sfu_createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
- (int)sfu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (int)sfu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (int)sfu_indexOfNumberFormatSubpatternSeparator;
- (bool)sfu_isNumberFormatPattern;
- (id)sfu_negativeSubpatternOfNumberFormatPattern;
- (id)sfu_numberPortionOfNumberFormatSubpattern;
- (id)sfu_positiveSubpatternOfNumberFormatPattern;
- (id)sfu_prefixOfNumberFormatSubpattern;
- (id)sfu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)sfu_suffixOfNumberFormatSubpattern;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (id)stringByInsertingGroupingSeparators;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })tsce_coordinateValue;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })tsce_coordinateValueGettingStickyBits:(char *)arg1;
- (bool)tsce_hasCaseInsensitivePrefix:(id)arg1 withLocale:(id)arg2;
- (id)tsce_initWithCellID:(struct { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; })arg1 stickyBits:(unsigned char)arg2;
- (bool)tsce_isSingleQuoted;
- (bool)tsce_needsReferenceSingleQuoteEscaping;
- (id)tsce_newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)tsce_newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_newStringByForcingSingleQuoteEscapes:(bool)arg1;
- (long long)tsce_numericCompare:(id)arg1;
- (void)tsce_p_initializeQuotes;
- (id)tsce_referenceComponentsSeparatedByColon;
- (id)tsce_referenceComponentsSeparatedByPathDelimiter;
- (id)tsce_referenceComponentsSeparatedBySpace;
- (id)tsce_stringByAddingSingleQuoteEscapes;
- (id)tsce_stringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)tsce_stringByForcingSingleQuoteEscapes:(bool)arg1;
- (id)tsce_stringByRemovingNewlines;
- (id)tsce_stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)tsce_stringByUnescapingPartialQuotedString;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(bool)arg1;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(bool)arg1 preserveTrailingUnquotedWhitespace:(bool)arg2;
- (id)tsce_stringByUnescapingSingleQuotes;
- (id)tsce_stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long*)arg1;
- (void)tsch_saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (id)tsk_URLByPercentEncoding;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsk_rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)tsk_stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 searchOptions:(unsigned long long)arg3;
- (id)tsk_stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 replacementCount:(unsigned long long*)arg5;
- (id)tsp_initWithProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (bool)tsp_isPasteboardStateType;
- (id)tsp_pathExceptPrivate;
- (const char *)tsp_protobufString;
- (void)tsp_saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (id)tsp_stringByAppendingObjectPathComponent:(id)arg1;
- (id)tst_cleanForFormulaEditor;
- (bool)tst_hasFormulaEqualsPrefix;
- (bool)tst_hasLeadingCharacterInSet:(id)arg1;
- (bool)tst_hasLeadingSingleQuoteEscape;
- (bool)tst_isEqualToFormulaEqualsString;
- (bool)tst_isOneCharacterInSet:(id)arg1;
- (id)tsu_UTIFilenameExtension;
- (bool)tsu_bindToSqlStatement:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 error:(id*)arg3;
- (long long)tsu_compareToVersionString:(id)arg1;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (bool)tsu_containsSubstring:(id)arg1;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (bool)tsu_customFormatIntegerTokenUsesSeparator;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (id)tsu_encodeStringBase64;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)tsu_escapeForIcuRegex;
- (id)tsu_escapeXML;
- (id)tsu_firstKey;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)tsu_initWithSqlStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
- (bool)tsu_isCJKString;
- (bool)tsu_isChildOfPath:(id)arg1;
- (bool)tsu_isDescendantOfPath:(id)arg1;
- (bool)tsu_isEqualToString:(id)arg1;
- (bool)tsu_isLegalEmailAddress;
- (bool)tsu_isNumberFormatPattern;
- (bool)tsu_isSpecialCustomNumberFormatToken;
- (bool)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_lastKey;
- (id)tsu_md5Hash;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (bool)tsu_pathConformsToUTI:(id)arg1;
- (bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (id)tsu_pathUTI;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(bool)arg1;
- (id)tsu_sha256HexHashString;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringByExpandingTableFormatting;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(bool)arg2;
- (id)tsu_stringWithRealpath;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (id)tsu_uncommentedAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_unescapeXML;
- (bool)tswp_containsIdeographs;
- (int)tswp_contentsScript;
- (int)tswp_contentsScriptInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)tswp_isAllWhitespaceInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)tswp_isHyphenationAtCharacterIndex:(unsigned long long)arg1;
- (bool)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 includePreviousWord:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 includePreviousWord:(bool)arg3 includeHyphenation:(bool)arg4;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (id)tswp_stringByNormalizingParagraphBreaks;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;

// Image: /bootstrap/Library/SBInject/AnemoneCore.dylib

- (id)anemoneThemedPath;
- (id)anemoneThemedPath:(bool)arg1;

// Image: /usr/lib/libmecabra.dylib

- (id)componentsByLanguage:(int)arg1;
- (id)firstCharacter;
- (id)pinyinStringFromPinyinWithToneNumber;
- (long long)simplifiedChineseCompare:(id)arg1;
- (id)stringByApplyingPinyinToneMarkToFirstSyllableWithToneNumber:(unsigned long long)arg1;
- (id)stringByStrippingDiacritics;
- (id)strokeStringFromNumberString;
- (id)toneFromPinyinSyllableWithNumber;
- (long long)traditionalChinesePinyinCompare:(id)arg1;
- (long long)traditionalChineseZhuyinCompare:(id)arg1;
- (id)zhuyinSyllableFromPinyinSyllable;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
