/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentContentItem : NSObject <NSSecureCoding> {
    struct CGImage { } * _image;
    NSURLRequest * _imageRequest;
    NSAttributedString * _label;
    NSAttributedString * _title;
}

@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, copy) NSURLRequest *imageRequest;
@property (nonatomic, copy) NSAttributedString *label;
@property (nonatomic, copy) NSAttributedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct CGImage { }*)image;
- (id)imageRequest;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentContentItem:(id)arg1;
- (id)label;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setImageRequest:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
