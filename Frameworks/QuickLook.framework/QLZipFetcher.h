/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipFetcher : QLItemFetcher {
    UIDocumentInteractionController * _archiveController;
    NSError * _extractError;
    NSString * _relativePath;
    QLURLHandler * _urlHandler;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 relativePath:(id)arg2;
- (id)itemSize;
- (id)newItemProvider;
- (id)shareableItem;
- (id)urlHandler;

@end
