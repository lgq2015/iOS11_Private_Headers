/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDeviceSupport : NSObject {
    NSString * _buildVersion;
    NSRecursiveLock * _lock;
    NSString * _model;
    NSString * _productName;
    NSString * _productVersion;
}

@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSString *userAgentString;

+ (id)marketingNameForModel:(id)arg1;
+ (id)sharedInstance;

- (void)_generateProductInformation;
- (void)dealloc;
- (id)deviceInformationString;
- (id)init;
- (id)model;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)userAgentString;

@end
