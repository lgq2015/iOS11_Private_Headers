/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding> {
    NSArray * _attachmentItems;
    NSURL * _rootURL;
}

@property (nonatomic, retain) NSArray *attachmentItems;
@property (nonatomic, retain) NSURL *rootURL;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions

+ (id)createWithName:(id)arg1 rootURL:(id)arg2;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachToDestinationDir:(id)arg1;
- (id)attachWithDestinationDir:(id)arg1;
- (id)attachmentItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rootURL;
- (void)setAttachmentItems:(id)arg1;
- (void)setRootURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (id)description;

@end
