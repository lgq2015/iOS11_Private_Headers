/* made by EzioChiu.
 */

@protocol HDParameterDescription <NSObject, NSCopying>

@required

- (bool)required;
- (NSString *)summary;
- (bool)validateValue:(id <NSObject>)arg1 error:(id*)arg2;

@end
