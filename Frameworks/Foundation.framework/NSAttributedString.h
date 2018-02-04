/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAttributedString : NSObject <HFStringGenerator, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding, UIItemProviderReading, UIItemProviderWriting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *string;
@property (readonly) Class superclass;
@property (setter=tv_setDefaultAttributes:, nonatomic, copy) NSDictionary *tv_defaultAttributes;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributedString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)string;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)_handleFormattingError:(id)arg1 forString:(id)arg2;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 error:(id*)arg4;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 defaultReplacementAttributes:(id)arg3 startTokenDelimiter:(id)arg4 endTokenDelimiter:(id)arg5 error:(id*)arg6;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;

- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 error:(id*)arg3;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 startTokenDelimiter:(id)arg3 endTokenDelimiter:(id)arg4 error:(id*)arg5;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_localizedAttributedStringForCommentWithCommenterFullName:(id)arg1 text:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)pu_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 streamName:(id)arg2 accepted:(bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForLikesFromUser:(bool)arg1 orPersonFullName:(id)arg2 photoCount:(long long)arg3 videoCount:(long long)arg4 streamName:(id)arg5 defaultTextAttributes:(id)arg6 emphasizedTextAttributes:(id)arg7;
+ (id)pu_localizedAttributedStringForLikesFromUser:(bool)arg1 otherPeopleFullNames:(id)arg2 isVideo:(bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForLikesWithLikerCount:(long long)arg1 isVideo:(bool)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)pu_localizedAttributedStringForPostWithSubjectFullName:(id)arg1 photoCount:(long long)arg2 videoCount:(long long)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForUserCommentWithText:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserCreatingStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserJoiningStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserPostWithPhotoCount:(long long)arg1 videoCount:(long long)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(bool)arg3 error:(id*)arg4;
+ (id)_objectWithRTFDAtURL:(id)arg1 error:(id*)arg2;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_fontsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultFont:(id)arg2;
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 outLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outBaselineOffset:(double*)arg4;
- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_ui_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)containsAttribute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)_attributedStringWithParagraphStyleFromStyle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (id)dd_attributedStringByAppendingAttributedString:(id)arg1;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (bool)dd_isTransientAttribute:(id)arg1;

- (id)dd_contextAtLocation:(long long)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)dd_resultAtLocation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities

- (id)FU_uppercaseAttributedStringCurrentLocale:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_attributedStringForSpacing:(double)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)dynamicStringForSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (bool)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;

- (id)hu_attributedStringScaledByFactor:(double)arg1;
- (double)hu_scaleFactorForBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (id)hu_scaledAttributedStringWithBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (bool)attribute:(id)arg1 existsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)trimmedString;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_attributedStringByUpdatingTextStyleFontsToPreferredTextStyleFonts;
- (bool)MPU_hasUniformFont;
- (id)MPU_tallestFontFromAttributes;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)attributedStringConcatenatingString:(id)arg1 withString:(id)arg2 font:(id)arg3 secondaryFont:(id)arg4 paragraphStyle:(id)arg5;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)NTKCountdownToDate:(id)arg1 useShort:(bool)arg2 withDesignatorFont:(id)arg3;
+ (id)NTKDesignatorAttributedTimeWithDate:(id)arg1;
+ (id)NTKHyphenatableString:(id)arg1;
+ (id)NTKHyphenatableString:(id)arg1 factor:(float)arg2;
+ (id)NTKReplaceTimeDesignatorAttributesFrom:(id)arg1 withDesignatorFont:(id)arg2;
+ (id)NTKSwapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4;
+ (id)NTKSwapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 timeZone:(id)arg5 options:(unsigned long long)arg6;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorAttributes:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 options:(unsigned long long)arg3;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)TT_attributedStringWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(bool)arg4 error:(id*)arg5;
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id*)arg4;
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(bool)arg4 error:(id*)arg5;

- (unsigned long long)TT_approximateAttachmentsSizeIncludingPreviews:(bool)arg1;
- (bool)TT_isCopyableSize;
- (void)TT_saveToArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4;
- (id)TT_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3;
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateAttachmentsInContext:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)ic_itemProviderDataForUTI:(id)arg1;
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long*)arg2;
- (unsigned long long)ic_numberOfTables;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeForAttachment:(id)arg1 withTextAttachment:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;
- (id)ic_stringWithoutAttachments;
- (struct { unsigned long long x1; unsigned long long x2; })ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)ic_textTablesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)ic_writingDirectionAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_attributedStringWithString:(id)arg1 baseAttributes:(id)arg2 secondaryAttributes:(id)arg3 delimiter:(id)arg4;

- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByTrimmingLeadingTrailingWhitespace;
- (id)tsu_stringWithoutAttachments;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(unsigned long long)arg2 forceWordWrap:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary

+ (id)pl_stringWithFormat:(id)arg1 defaultAttributes:(id)arg2 arguments:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 defaultTextAttributes:(id)arg2 subjectName:(id)arg3;

- (id)px_attributedStringByApplyingCapitalization:(long long)arg1;
- (id)px_attributedStringByDeletingCharactersInSet:(id)arg1;
- (id)px_attributedStringWithParagraphLineBreakMode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)_scrcStringWithFormat:(id)arg1 args:(char *)arg2;
+ (id)scrcPauseString;
+ (id)scrcSpaceString;
+ (id)scrcString;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithFormat:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithString:(id)arg1;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;

- (bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_scrcRangeOfVanillaFormatSpecifier;
- (bool)scrcContainsPause;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)splitBasedOnAttribute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)getRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 ofAttribute:(id)arg2;
- (bool)getRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)sxaxAttributedStringForSpeakingStringInLowerPitch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;
- (id)tv_defaultAttributes;
- (void)tv_setDefaultAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_UIKBStringWideAttributeValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)_documentTypeForFileType:(id)arg1;
+ (id)attributedStringWithAttachment:(id)arg1;

- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_documentFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 subresources:(id*)arg3;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)_isStringDrawingTextStorage;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usesAlternativeBreaker:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(bool*)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scaledByScaleFactor:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTrackingAdjustment:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (bool)containsAttachments;
- (bool)containsAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)defaultLanguage;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)fontAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

+ (id)attributedStringWithTextElement:(id)arg1 baseFont:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 links:(id)arg3;
+ (id)attributesForIndex:(long long)arg1 baseAttributes:(id)arg2;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsd_attributedStringWithString:(id)arg1 baseAttributes:(id)arg2 secondaryAttributes:(id)arg3 delimiter:(id)arg4;

- (bool)tsd_stringPreservesTextLabelTextColor;

@end
