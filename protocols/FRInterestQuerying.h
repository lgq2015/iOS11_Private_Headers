/* made by EzioChiu.
 */

@protocol FRInterestQuerying <NSObject>

@required

- (void)enumerateIdentifierCountsWithPrefix:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, bool*, void*
- (void)enumerateIndentifierCountsForIdentifiers:(void *)arg1 after:(void *)arg2 attributeIndex:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 11: NSArray *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, bool*, void*
- (void)enumerateIndentifierCountsForIdentifiers:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, bool*, void*
- (void)enumerateIndentifierCountsWithPrefix:(void *)arg1 attributeIndex:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 10: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, bool*, void*

@end
