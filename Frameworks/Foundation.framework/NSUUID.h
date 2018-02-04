/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <AFSecurityDigestibleChunksProviding, CRCoding, CRDataType, CREquatable, NSCopying, NSSecureCoding, PASerializable, PQLValuable>

@property (readonly, copy) NSString *UUIDString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/ARKit.framework/ARKit

+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;

- (unsigned long long)ar_integerValue;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_UUIDWithData:(id)arg1;

- (id)hk_dataForUUIDBytes;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(bool)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)_LS_UUIDWithData:(id)arg1;
+ (id)_LS_UUIDWithData:(id)arg1 SHA1:(bool)arg2;
+ (id)_LS_nullUUID;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_zerosUUID;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)nilUUID;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)zeroUUID;

- (id)initWithNamespace:(id)arg1 data:(id)arg2;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(bool)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_maps_UUIDWithUUIDString:(id)arg1;
+ (id)_maps_zeroUUID;

- (long long)_maps_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)uuidWithMSVBase64UUID:(id)arg1;

- (id)MSVBase64UUIDString;
- (id)initWithMSVBase64UUIDString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_dataForUUID;
+ (id)_navigation_uuidForData:(id)arg1;

- (id)_navigation_data;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)CR_UUIDFromStdString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_zero;
+ (id)TTZero;

- (long long)CR_compare:(id)arg1;
- (id)CR_shortDescription;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })CR_toStdString;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (id)PK_zero;

- (long long)PK_compare:(id)arg1;
- (id)PK_shortDescription;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)tsp_initWithMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)tsp_saveToMessage:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
