/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _imageIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)imageIdentifier;
- (id)initWithImageIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end