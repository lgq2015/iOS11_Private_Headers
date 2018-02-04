/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalVersion : BRCVersion {
    NSError * _uploadError;
    CKRecord * _uploadedAssets;
}

@property (nonatomic, retain) NSError *uploadError;
@property (nonatomic, retain) CKRecord *uploadedAssets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearSignatures:(unsigned long long)arg1 isPackage:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForPackage:(bool)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (bool)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)isPackageObj;
- (void)setUploadError:(id)arg1;
- (void)setUploadedAssets:(id)arg1;
- (id)sizeObj;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(bool)arg2 filenameOverride:(id)arg3;
- (id)uploadError;
- (id)uploadedAssets;

@end
