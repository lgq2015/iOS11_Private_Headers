/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    NSMutableDictionary * _results;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithXPCDictionaryRepresentation:(id)arg1;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;
- (id)xpcDictionaryRepresentation;

@end
