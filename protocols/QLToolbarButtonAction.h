/* made by EzioChiu.
 */

@protocol QLToolbarButtonAction <NSObject>

@required

- (void)buttonPressedWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
