/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVStoreDownload : NSObject {
    NSString * _preferredAssetFlavor;
    NSDictionary * _properties;
}

@property (nonatomic, retain) NSString *preferredAssetFlavor;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)preferredAssetFlavor;
- (id)properties;
- (void)setPreferredAssetFlavor:(id)arg1;

@end
