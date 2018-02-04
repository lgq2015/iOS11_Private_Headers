/* made by EzioChiu.
 */

@protocol ICSWriting

@required

- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToObscure;
- (bool)shouldObscureValue;

@end
