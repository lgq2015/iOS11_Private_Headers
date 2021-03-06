/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLFPItemFetcher : QLUbiquitousItemFetcher {
    QLURLHandler * _fetchedURLHandler;
    FPItem * _fpItem;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(bool)arg2;
- (bool)isLongFetchOperation;
- (id)itemSize;

@end
