/* made by EzioChiu.
 */

@protocol CNContactViewServiceProtocol <NSObject>

@required

- (void)didChangeToEditMode:(bool)arg1;
- (void)editCancel;
- (void)setupWithOptions:(void *)arg1 readyBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)toggleEditing;

@end
