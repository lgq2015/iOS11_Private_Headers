/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackage : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _additionalZipArchiveOptions;
    SFUCryptoKey * _decryptionKey;
    TSPDocumentProperties * _documentProperties;
    <TSPFileCoordinatorDelegate> * _fileCoordinatorDelegate;
    unsigned long long  _fileFormatVersion;
    struct { 
        unsigned int isLazyLoadingDocumentProperties : 1; 
        unsigned int isLazyLoadingZip : 1; 
    }  _flags;
    bool  _isClosed;
    NSError * _lastReloadError;
    NSHashTable * _packageDatas;
    unsigned char  _packageIdentifier;
    TSUZipFileArchive * _zipArchive;
}

@property (readonly) TSUZipFileArchive *componentZipArchive;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;
@property (nonatomic, readonly) TSPDocumentProperties *documentProperties;
@property (nonatomic, readonly) <TSPFileCoordinatorDelegate> *fileCoordinatorDelegate;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool isClosed;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (readonly) NSError *lastReloadError;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) long long packageType;
@property (nonatomic, readonly) NSString *passwordHint;
@property (nonatomic, readonly) NSData *passwordVerifier;
@property (retain) TSUZipFileArchive *zipArchive;

+ (id)dataEntryPathForFilename:(id)arg1;
+ (bool)hasZipArchive;
+ (bool)isValidPackageAtURL:(id)arg1;
+ (bool)isZeroLengthFileOrEmptyDirectory:(id)arg1;
+ (id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4;
+ (id)newPackageWithURL:(id)arg1 options:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 error:(id*)arg6;
+ (id)objectArchiveEntryPathForPackageLocator:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void).cxx_destruct;
- (bool)checkPassword:(id)arg1;
- (id)componentZipArchive;
- (bool)containsData:(id)arg1;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(bool)arg6 completion:(id /* block */)arg7;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(bool)arg2 error:(id*)arg3;
- (id)decryptionKey;
- (void)didCloseDocument;
- (void)didReadFileFormatVersion:(unsigned long long)arg1;
- (void)didReferenceData:(id)arg1;
- (bool)didReloadZipArchive:(id)arg1 error:(id*)arg2;
- (void)didRetrieveDecryptionKey:(id)arg1;
- (id)documentProperties;
- (void)enumerateDatasUsingBlock:(id /* block */)arg1;
- (id)fileCoordinatorDelegate;
- (unsigned long long)fileFormatVersion;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(bool)arg6;
- (id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 zipArchiveOptions:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 decryptionKey:(id)arg6 fileCoordinatorDelegate:(id)arg7 error:(id*)arg8;
- (bool)isClosed;
- (bool)isPasswordProtected;
- (id)keyFromPassword:(id)arg1;
- (id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2;
- (id)lastReloadError;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id /* block */)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (id)newReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(bool)arg2 error:(id*)arg3;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (unsigned char)packageIdentifier;
- (long long)packageType;
- (id)passwordHint;
- (id)passwordVerifier;
- (void)peformSynchronousAccessToZipArchive:(id /* block */)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;
- (bool)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(bool)arg2 error:(id*)arg3;
- (void)removeAllDataReferences;
- (void)setZipArchive:(id)arg1;
- (id)zipArchive;

@end
