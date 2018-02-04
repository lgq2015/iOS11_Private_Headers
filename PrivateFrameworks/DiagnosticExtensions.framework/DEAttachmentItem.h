/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEAttachmentItem : NSObject <NSSecureCoding> {
    NSURL * _attachedPath;
    NSString * _attachmentType;
    NSNumber * _deleteOnAttach;
    NSString * _displayName;
    NSNumber * _filesize;
    NSDate * _modificationDate;
    NSURL * _path;
    NSNumber * _shouldCompress;
}

@property (nonatomic, retain) NSURL *attachedPath;
@property (nonatomic, copy) NSString *attachmentType;
@property (nonatomic, copy) NSNumber *deleteOnAttach;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *filesize;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSURL *path;
@property (nonatomic, retain) NSNumber *shouldCompress;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions

+ (id)attachmentWithPath:(id)arg1;
+ (id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
+ (id)attachmentWithPathURL:(id)arg1;
+ (id)newAttachmentWithPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachToDestinationDir:(id)arg1;
- (id)attachWithDestinationDir:(id)arg1;
- (id)attachedPath;
- (id)attachmentType;
- (id)deleteOnAttach;
- (id)description;
- (void)detach;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filesize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
- (id)initWithPathURL:(id)arg1;
- (id)modificationDate;
- (id)path;
- (void)setAttachedPath:(id)arg1;
- (void)setAttachmentType:(id)arg1;
- (void)setDeleteOnAttach:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFilesize:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setShouldCompress:(id)arg1;
- (id)shouldCompress;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (id)description;
- (bool)isGroup;

@end