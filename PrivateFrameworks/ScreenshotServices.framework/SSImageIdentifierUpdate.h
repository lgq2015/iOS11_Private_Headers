/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding> {
    NSString * _environmentDescriptionIdentifier;
    NSString * _imageIdentifier;
}

@property (nonatomic, readonly) NSString *briefDescription;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *environmentDescriptionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)briefDescription;
- (id)bsSettings;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)environmentDescriptionIdentifier;
- (id)imageIdentifier;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setEnvironmentDescriptionIdentifier:(id)arg1;
- (void)setImageIdentifier:(id)arg1;

@end
