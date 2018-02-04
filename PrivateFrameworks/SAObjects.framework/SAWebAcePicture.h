/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *height;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *width;

+ (id)acePicture;
+ (id)acePictureWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)format;
- (id)groupIdentifier;
- (id)height;
- (void)setFormat:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)width;

@end
