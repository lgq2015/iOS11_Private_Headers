/* made by EzioChiu.
 */

@protocol ASDDeviceConfigurationChangeDelegate <NSObject>

@required

- (bool)requestConfigurationChangeForDevice:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: ASDObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
