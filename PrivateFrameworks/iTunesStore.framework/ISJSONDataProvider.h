/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISJSONDataProvider : ISDataProvider {
    unsigned long long  _options;
}

@property unsigned long long parserOptions;

- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (unsigned long long)parserOptions;
- (void)setParserOptions:(unsigned long long)arg1;

@end
