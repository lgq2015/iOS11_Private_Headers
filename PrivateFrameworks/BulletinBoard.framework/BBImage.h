/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBImage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundlePath;
    NSData * _data;
    NSString * _name;
    NSString * _path;
}

@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;

+ (id)imageWithData:(id)arg1;
+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)path;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;

@end
