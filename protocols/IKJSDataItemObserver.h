/* made by EzioChiu.
 */

@protocol IKJSDataItemObserver <NSObject>

@optional

- (void)dataItem:(IKJSDataItem *)arg1 didChangePropertyPathWithString:(NSString *)arg2;
- (void)dataItem:(IKJSDataItem *)arg1 didChangeSubPropertyPathWithString:(NSString *)arg2 forPropertyPathWithString:(NSString *)arg3 subscriptIndex:(long long)arg4;

@end
