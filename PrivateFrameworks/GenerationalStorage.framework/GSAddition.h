/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSAddition : NSObject {
    NSString * _displayName;
    NSString * _namespace;
    unsigned long long  _options;
    NSString * _originalName;
    NSNumber * _size;
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> * _storage;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool isSavedConflict;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *originalPOSIXName;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;
@property (nonatomic, readonly) NSData *sandboxExtension;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

+ (id)makeNameForUser:(unsigned int)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithStorage:(id)arg1 andDictionary:(id)arg2;
- (void)_refreshWithDictionary:(id)arg1;
- (bool)copyAdditionContentToURL:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)displayName;
- (id)displayNameWithError:(id*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)internalStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSavedConflict;
- (bool)mergeUserInfo:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)nameSpace;
- (unsigned long long)options;
- (id)originalPOSIXName;
- (id)originalPOSIXNameWithError:(id*)arg1;
- (id)persistentIdentifier;
- (bool)refreshWithError:(id*)arg1;
- (id)replaceItemAtURL:(id)arg1 error:(id*)arg2;
- (id)sandboxExtension;
- (bool)setDisplayName:(id)arg1 error:(id*)arg2;
- (bool)setNameSpace:(id)arg1 error:(id*)arg2;
- (bool)setOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)size;
- (struct NSObject { Class x1; }*)storage;
- (id)url;
- (id)userInfo;
- (id)userInfoWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)_br_markResolvedWithError:(id*)arg1;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (id)br_lastEditorNameComponents;
- (bool)br_markResolvedWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)additionURLForName:(id)arg1 storagePrefix:(id)arg2 inConflictNamespace:(bool)arg3;
+ (bool)brc_parseAdditionFilename:(id)arg1 mangledID:(id*)arg2 itemID:(id*)arg3 etag:(id*)arg4 session:(id)arg5;

- (bool)brc_parseMangledID:(id*)arg1 itemID:(id*)arg2 etag:(id*)arg3 session:(id)arg4;

@end
