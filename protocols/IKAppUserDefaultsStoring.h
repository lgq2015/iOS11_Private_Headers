/* made by EzioChiu.
 */

@protocol IKAppUserDefaultsStoring <NSObject>

@required

- (NSObject<NSCoding> *)dataForKey:(NSString *)arg1;
- (void)removeDataForKey:(NSString *)arg1;
- (void)setData:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;

@end
