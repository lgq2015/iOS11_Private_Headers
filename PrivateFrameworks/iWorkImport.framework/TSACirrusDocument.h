/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSACirrusDocument : NSObject <TSPObjectContextDelegate> {
    TSPObjectContext * _context;
    NSString * _documentPasswordHint;
    NSURL * _fileURL;
    bool  _isClosed;
    TSUTemporaryDirectory * _tempDirForSupport;
}

@property (nonatomic, readonly) NSDictionary *additionalDocumentPropertiesForWrite;
@property (nonatomic, readonly) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (nonatomic, retain) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentPasswordHint;
@property (nonatomic, readonly) TSADocumentRoot *documentRoot;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (nonatomic, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreDocumentSupport;
@property (nonatomic, readonly) bool isDocumentSupportTemporary;
@property (nonatomic, readonly) bool skipDocumentUpgrade;
@property (readonly) Class superclass;

- (void)close;
- (id)context;
- (void)dealloc;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentPasswordHint;
- (id)documentPasswordHintForWrite;
- (id)documentRoot;
- (id)fileURL;
- (id)initWithURL:(id)arg1 registry:(id)arg2 error:(id*)arg3 passphrase:(id)arg4;
- (id)name;
- (void)presentPersistenceError:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFileURL:(id)arg1;
- (bool)skipDocumentUpgrade;
- (id)supportDirectoryURL;
- (id)tskCachedDocumentInfo;

@end
