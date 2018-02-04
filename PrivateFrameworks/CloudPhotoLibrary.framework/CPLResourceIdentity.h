/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentity : NSObject <NSCopying, NSSecureCoding> {
    bool  _available;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    NSString * _fileUTI;
    NSString * _fingerPrint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageDimensions;
}

@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *fileUTI;
@property (nonatomic, copy) NSString *fingerPrint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageDimensions;

+ (Class)_identityImplementationClass;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)identityForStorageName:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (Class)resourceIdentityImplementation;
+ (void)setResourceIdentityImplementation:(Class)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)fileUTI;
- (id)fingerPrint;
- (unsigned long long)hash;
- (id)identityForStorage;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileUTI:(id)arg1;
- (void)setFingerPrint:(id)arg1;
- (void)setImageDimensions:(struct CGSize { double x1; double x2; })arg1;

@end
