/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {
    int  deviceID;
    unsigned long long  documentID;
    unsigned char  volumeUUID;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentIdentifier:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(bool)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;

@end
