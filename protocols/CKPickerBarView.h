/* made by EzioChiu.
 */

@protocol CKPickerBarView <NSObject>

@required

- (NSArray *)acknowledgmentViews;
- (id)initWithGroupCounts:(NSDictionary *)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
- (void)performCancelAnimation:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performSelectedAnimation:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performSendAnimation:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performShowAnimation:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAcknowledgmentViews:(NSArray *)arg1;

@end
