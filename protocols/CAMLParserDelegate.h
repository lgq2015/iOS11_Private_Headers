/* made by EzioChiu.
 */

@protocol CAMLParserDelegate <NSObject>

@optional

- (Class)CAMLParser:(CAMLParser *)arg1 didFailToFindClassWithName:(NSString *)arg2;
- (id)CAMLParser:(CAMLParser *)arg1 didFailToLoadResourceFromURL:(NSURL *)arg2;
- (void)CAMLParser:(CAMLParser *)arg1 didLoadResource:(id)arg2 fromURL:(NSURL *)arg3;
- (void)CAMLParser:(CAMLParser *)arg1 evaluateScriptElement:(NSString *)arg2 sourceURL:(NSURL *)arg3 lineNumber:(unsigned int)arg4;
- (id)CAMLParser:(CAMLParser *)arg1 evaluateScriptValue:(NSString *)arg2 sourceURL:(NSURL *)arg3 lineNumber:(unsigned int)arg4;
- (void)CAMLParser:(CAMLParser *)arg1 formatErrorString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(CAMLParser *)arg1 formatWarningString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (id)CAMLParser:(CAMLParser *)arg1 resourceForURL:(NSURL *)arg2;

@end
