/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNumber : NSValue <AFSecurityDigestibleChunksProviding, ASParsingLeafNode, CKLParsedObject, CKRecordValue, CRCoding, CRDataType, CREquatable, HFPropertyListConvertible, LPCSSText, NSFetchRequestResult, PQLValuable, SiriCoreSQLiteValue, TSCHChartGridValue, TSDMixing>

@property (nonatomic, readonly) double CGFloatValue;
@property (nonatomic, readonly) long long PHAssetExportRequestVariantValue;
@property (nonatomic, readonly) unsigned long long PXDataSourceIdentifierValue;
@property (readonly) long long _cn_reputationScoreValue;
@property (readonly) bool boolValue;
@property (readonly) BOOL charValue;
@property (nonatomic, readonly) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property (readonly, copy) NSString *description;
@property (readonly) double doubleValue;
@property (readonly) float floatValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *hf_absoluteValue;
@property (readonly) int intValue;
@property (readonly) long long integerValue;
@property (readonly) long long longLongValue;
@property (readonly) long long longValue;
@property (nonatomic, readonly) NSNumber *safari_percentageFromSamplingRate;
@property (readonly) short shortValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) unsigned long long unsignedIntegerValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) unsigned long long unsignedLongValue;
@property (readonly) unsigned short unsignedShortValue;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (unsigned char)_getValue:(void*)arg1 forType:(long long)arg2;
- (long long)_reverseCompare:(id)arg1;
- (bool)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (unsigned long long)hash;
- (id)initWithBool:(bool)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (int)intValue;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (bool)isNSNumber__;
- (long long)longLongValue;
- (long long)longValue;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (long long)_cn_reputationScoreValue;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)numberWithCGFloat:(double)arg1;

- (int)_mk_laneDirectionValue;
- (double)cgFloatValue;
- (id)initWithCGFloat:(double)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MPMediaLibraryDataProviderSystemML3CoercedString;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (long long)PHAssetExportRequestVariantValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (unsigned int)MIDIDevice;
- (unsigned int)MIDIEndpoint;
- (unsigned int)MIDIEntity;
- (unsigned int)MIDIObject;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_numberWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_localizedString;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

+ (id)_cnac_numberWithAutocompleteAddressType:(long long)arg1;

- (long long)_cnac_autocompleteAddressTypeValue;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_times:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)sf_asRowAlignment;
- (int)sf_asTopHit;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

+ (id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRRecentID:(long long)arg1;

- (unsigned long long)cr_CRContactGroupKindValue;
- (long long)cr_CRContactIDValue;
- (long long)cr_CRRecentIDValue;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (bool)expectsContent;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (bool)fm_isEqualToNumber:(id)arg1 withPrecision:(double)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkServerTimeInterval:(double)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hk_hasFloatingPointValue;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (bool)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_absoluteValue;
- (long long)hf_compareAbsoluteValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)localizedString;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSText;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)_BoolValue;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (double)cgFloatValue;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (bool)nu_isBoolean;
- (bool)nu_isFloat;
- (bool)nu_isInfinite;
- (bool)nu_isInteger;
- (bool)nu_isNaN;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (double)CGFloatValue;
- (bool)fc_isGreaterThan:(id)arg1;
- (bool)fc_isLessThan:(id)arg1;
- (bool)fc_isLessThanOrEqualTo:(id)arg1;
- (id)fc_largerNumber:(id)arg1;
- (id)fc_smallerNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)numberWithCGFloat:(double)arg1;

- (double)CGFloatValue;
- (bool)isFloatingPointType;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (bool)tsu_isAlmostEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (bool)pk_isIntegralNumber;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (unsigned long long)PXDataSourceIdentifierValue;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_percentageFromSamplingRate;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (bool)sd_isEqualToNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (double)siriCoreSQLiteValue_doubleRepresentation;
- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (long long)siriCoreSQLiteValue_integerRepresentation;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)numberWithItemIdentifier:(unsigned long long)arg1;

- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifierValue;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_numberWithCGFloat:(double)arg1;

- (void)appendJsonStringToString:(id)arg1;
- (double)tsu_CGFloatValue;
- (bool)tsu_isFloatingPointType;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)rc_persistentIDValue;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (bool)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

+ (id)boolFromICSString:(id)arg1;

- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)numberWithCGFloat:(double)arg1;
+ (id)tsch_instanceWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (id)tsch_numberWithStyleInt:(int)arg1;
+ (id)tsch_numberWithStyleProperty:(int)arg1;
+ (id)tsch_optionalNumberWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (void)tsch_saveOptionalNumber:(id)arg1 toArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg2 archiver:(id)arg3;

- (double)CGFloatValue;
- (int)chartGridValueType;
- (bool)isFloatingPointType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsch_initWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;
- (int)tsch_styleIntValue;
- (int)tsch_stylePropertyValue;
- (int)tss_propertyValue;
- (bool)tsu_isAlmostEqual:(id)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
