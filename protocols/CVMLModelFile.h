/* made by EzioChiu.
 */

@protocol CVMLModelFile <NSObject>

@required

- (void)advise:(long long)arg1;
- (const void*)baseAddress;
- (unsigned long long)length;

@optional

- (NSString *)resourcePath;
- (void)setResourcePath:(NSString *)arg1;

@end
