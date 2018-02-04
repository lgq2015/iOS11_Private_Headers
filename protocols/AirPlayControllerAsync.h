/* made by EzioChiu.
 */

@protocol AirPlayControllerAsync

@required

- (void)getProperty:(void *)arg1 qualifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, id
- (void)performCommand:(void *)arg1 qualifier:(void *)arg2 params:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, id, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, void*
- (void)postEvent:(void *)arg1 qualifier:(void *)arg2 params:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSString *, id, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setProperty:(void *)arg1 qualifier:(void *)arg2 value:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, id, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
