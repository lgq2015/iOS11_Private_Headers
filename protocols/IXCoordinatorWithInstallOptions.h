/* made by EzioChiu.
 */

@protocol IXCoordinatorWithInstallOptions <NSObject>

@required

- (bool)hasInstallOptions;
- (bool)setInstallOptions:(MIInstallOptions *)arg1 error:(id*)arg2;

@end
