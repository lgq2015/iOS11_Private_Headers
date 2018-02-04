/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TQQuicklook : NSObject <TSPDocumentResourceFileURLProvider> {
    TSABaseApplicationDelegate * mBaseAppDelegate;
    TSACirrusDocument * mDocument;
    <TSKRenderingExporter> * mExporter;
    NSBundle * mInstalledGingerBundle;
    NSBundle * mInstalledSageBundle;
    NSString * mPassphrase;
    NSString * mPath;
    TSUTemporaryDirectory * mTemporaryDirectory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)loadAssetColorMap;
+ (id)tsuColorFromColorArray:(id)arg1;
+ (void)unloadAssetColorMap;

- (Class)appDelegateClass;
- (void)close;
- (void)dealloc;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
- (struct __CFString { }*)getIdentifierForApp:(id)arg1;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2;
- (bool)load;
- (id)newPDFForPageNumber:(unsigned long long)arg1;
- (id)newPDFPreviewAndClose;
- (unsigned long long)pageCount;
- (id)sheetNameForPageNumber:(unsigned long long)arg1 isForm:(bool*)arg2;
- (id)thumbnail;
- (bool)writePreviewToOutput:(id)arg1 pageNumber:(unsigned long long)arg2;

@end
