/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    unsigned long long  _fileId;
}

@property (readonly) unsigned long long fileId;

+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileId:(unsigned long long)arg1;
- (id)initWithFileURL:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
