/* made by EzioChiu.
 */

@protocol PXCPLService <NSObject>

@required

- (bool)canPerformAction:(long long)arg1;
- (id /* block */)handler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, PXCPLServiceStatus *, void*, id, SEL
- (void)performAction:(long long)arg1;
- (void)setHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXCPLServiceStatus *, void*

@end