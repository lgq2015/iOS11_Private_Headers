/* made by EzioChiu.
 */

@protocol AudioComponentRegistrarProtocol

@required

- (void)getComponentList:(void *)arg1 linkedSDKVersion:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 11: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSArray *, bool, void*

@end