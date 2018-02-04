/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSAccountKeyHistory : NSObject <NSCoding, NSCopying> {
    NSArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end
