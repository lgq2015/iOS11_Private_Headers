/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding> {
    bool  _backedByFileProvider;
    NSURL * _deleteAfterUseURL;
    FPItem * _fpItem;
    bool  _readonly;
    NSData * _scope;
    NSURL * _url;
}

@property (getter=isBackedByFileProvider, nonatomic, readonly) bool backedByFileProvider;
@property (nonatomic, retain) NSURL *deleteAfterUseURL;
@property (nonatomic, readonly) FPItem *fpItem;
@property (getter=isReadonly, nonatomic, readonly) bool readonly;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_deleteTemporaryFilesWithCompletionHandler:(id /* block */)arg1;
- (id)deleteAfterUseURL;
- (void)deleteTemporaryFilesWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fpItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1;
- (id)initWithNSURLWrapper:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2 extensionClass:(id)arg3;
- (bool)isBackedByFileProvider;
- (bool)isReadonly;
- (id)nsURLWrapper;
- (void)setDeleteAfterUseURL:(id)arg1;
- (id)url;

@end
