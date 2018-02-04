/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKClassGroup : NSObject <NSSecureCoding> {
    NSString * _classGroupName;
    NSArray * _classes;
}

@property (nonatomic, readonly, copy) NSString *classGroupName;
@property (nonatomic, readonly, copy) NSArray *classes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classGroupName;
- (id)classes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLKClassGroup:(id)arg1;

@end
