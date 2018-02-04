/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionBaseMapNamedImage : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _name;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setData:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;

@end
