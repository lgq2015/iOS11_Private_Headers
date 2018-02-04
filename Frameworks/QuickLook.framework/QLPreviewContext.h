/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewContext : NSObject <NSSecureCoding> {
    UIColor * _backgroundColor;
    bool  _canBeEdited;
    NSString * _contentType;
    NSURL * _editedFileURL;
    QLItem * _item;
    NSNumber * _itemSize;
    NSString * _password;
    unsigned long long  _previewItemType;
    NSString * _previewTitle;
    long long  _processIdentifier;
    <QLItemThumbnailGeneratorProtocolInternal> * _thumbnailGenerator;
}

@property (retain) UIColor *backgroundColor;
@property bool canBeEdited;
@property (retain) NSString *contentType;
@property (retain) NSURL *editedFileURL;
@property (retain) QLItem *item;
@property (retain) NSNumber *itemSize;
@property (retain) NSString *password;
@property unsigned long long previewItemType;
@property (retain) NSString *previewTitle;
@property long long processIdentifier;
@property (retain) <QLItemThumbnailGeneratorProtocolInternal> *thumbnailGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeEdited;
- (id)contentType;
- (id)editedFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemSize;
- (id)password;
- (unsigned long long)previewItemType;
- (id)previewTitle;
- (long long)processIdentifier;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeEdited:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setEditedFileURL:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemSize:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreviewItemType:(unsigned long long)arg1;
- (void)setPreviewTitle:(id)arg1;
- (void)setProcessIdentifier:(long long)arg1;
- (void)setThumbnailGenerator:(id)arg1;
- (id)thumbnailGenerator;

@end
