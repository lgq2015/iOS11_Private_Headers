/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _imagesForContentSize;
}

@property (nonatomic, copy) NSDictionary *imagesForContentSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageForContentSizeCategory:(id)arg1;
- (id)imagesForContentSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImagesForContentSize:(id)arg1;

@end
